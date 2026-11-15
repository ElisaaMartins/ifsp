-- LISTA 5 (EXTRA)

CREATE DATABASE escola;

\c escola

CREATE TABLE curso(
	sigla varchar(2),
	nome VARCHAR(50),
	data_inicio datetime,
	PRIMARY KEY (sigla)
);

CREATE table area (
	codigo int,
	nome varchar(50),
	PRIMARY key (codigo)
);

CREATE table professor(
	rg varchar(15),
	nome VARCHAR(50),
	data_nasc datetime,
	area_cod int,
	PRIMARY KEY (rg),
	FOREIGN key (area_cod) REFERENCES area(codigo)
);

CREATE table turma(
	numero int,
	curso_sigla varchar(2),
	prof_resp_rg varchar(15),
	FOREIGN key (curso_sigla) REFERENCES curso(sigla),
	FOREIGN key (prof_resp_rg) REFERENCES professor(rg)
);

CREATE table pode_ministrar(
	prof_rg varchar(15),
	curso_sigla varchar(2),
	FOREIGN key (prof_rg) REFERENCES professor(rg),
	FOREIGN key (curso_sigla) REFERENCES curso(sigla)
);

CREATE table matricula(
	turma_num int,
	aluno_rg varchar(15),
	data_matr datetime,
	FOREIGN key (turma_num) REFERENCES turma(numero),
	FOREIGN key (aluno_rg) REFERENCES aluno(rg)
);

CREATE TABLE aluno(
	rg INT,
	nome VARCHAR(50),
	data_nasc datetime,
	PRIMARY KEY (rg)
);
	
-- A 
SELECT nome, codigo from area
where nome like 'I%a%';

-- B
SELECT rg, nome from aluno
where (nome like 'H%' and data_nasc < '2000-01-01')
   or (nome like '%a' and data_nasc >= '2005-01-01');

-- C
SELECT * from curso
where data_inicio BETWEEN '2000-01-01' and '2005-01-01'
order by data_inicio ASC;

-- D
select nome, rg from professor
where data_nasc is not NULL
order by data_nasc ASC
LIMIT 1;

-- E
select nome, rg from aluno
where data_nasc is not NULL
order by data_nasc asc 
LIMIT 3;

-- F 
select nome from aluno union select nome from professor
order by nome asc ;

-- G 
select * from professor
where area_cod = 12;

-- H 
select t.* from turma t join curso c on t.curso_sigla = c.sigla 
where c.nome = 'Excel Avançado I';

-- I *
select p.* from professor p join pode_ministrar pm on p.rg = pm.prof_rg 
							join curso c on pm.curso_sigla = c.sigla
where c.nome = 'Exel Avançado'
order by p.nome asc, p.data_nasc asc;
 
-- J 
select a.* from aluno a join matricula m on a.rg = m.aluno_rg
where m.turma_num = 1;

-- K 
select a.* from aluno a join matricula m on a.rg = m.aluno_rg 
						join turma t on m.turma_num = t.numero 
						join curso c on t.curso_sigla = c.sigla
where c.nome = 'Exel Avançado'
order by a.nome asc, a.data_nasc asc;

-- L *
select rg, nome from professor
where rg not in (
	select t.prof_resp_rg from turma t, curso c on t.curso_sigla = c.sigla 
	where c.nome = 'Excel Avançado' and t.prof_resp_rg is not NULL
);

-- M 
select count(*) as qtd_curso from curso;

-- N *
select count(distinct a.rg) as qtd_aluno from aluno a join matricula m on a.rg = m.aluno_rg	
													  join turma t on m.turma_num = t.numero 
													  join curso c on t.curso_sigla = c.sigla
where c.nome = 'Excel Avançado';

-- O *
select c.sigla, c.nome, count(distinct m.aluno_rg) as qtd_aluno from curso c 
left join turma t on c.sigla = t.curso_sigla 
left join matricula m on t.numero = m.turma_num 
GROUP by c.sigla, c.nome
order by qtd_aluno desc, c.nome asc;

-- P *
select codigo, nome, count(p.rg) as qtd_professor from area a
left join professor p on a.codigo = p.area_cod
GROUP by a.codigo, a.nome
HAVING count(p.rg) >= 3
order by qtd_professor desc, a.nome asc;