-- lista 2 (extra)

CREATE DATABASE escola;

\c escola

CREATE TABLE curso(
	cod INT,
	nome VARCHAR(50),
	sigla VARCHAR(5),
	PRIMARY KEY (cod)
);

CREATE table professor(
	matr int,
	nome VARCHAR(50),
	rg VARCHAR(9),
	PRIMARY KEY (matr)
);

CREATE table aluno(
	pront int,
	rg varchar(9),
	nome varchar(50),
	data_nasc DATE,
	endereco varchar(100),
	PRIMARY key (pront)
);

CREATE table turma(
	id int,
	turno VARCHAR(10),
	numero INT,
	curso_cod int,
	prof_resp int,
	PRIMARY key (id),
	FOREIGN key (curso_cod) REFERENCES curso(cod),
	FOREIGN key (prof_resp) REFERENCES professor(matr)
);

CREATE table turma_aluno(
	turma_id int,
	aluno_pront int,
	PRIMARY key (turma_id, aluno_pront),
	FOREIGN key (turma_id) REFERENCES turma(id),
	FOREIGN key (aluno_pront) REFERENCES aluno(pront)
);

-- INSERTS EXEMPLOS
INSERT INTO curso (cod, nome, sigla) VALUES
	(1, 'Desenvolvimento Web', 'WEB'),
	(2, 'Banco de Dados', 'BD'),
	(3, 'Programacao em Python', 'PY'),
	(4, 'Redes de Computadores', 'RED');

INSERT INTO professor (matr, nome, rg) VALUES
	(101, 'Carlos Eduardo', '123456789'),
	(102, 'Mariana Silva', '234567890'),
	(103, 'Joao Pedro', '345678901'),
	(104, 'Ana Paula', '456789012');


INSERT INTO aluno (pront, rg, nome, data_nasc, endereco) VALUES
	(1001, '111111111', 'Lucas Almeida', '2004-05-12', 'Rua das Flores, 100'),
	(1002, '222222222', 'Beatriz Santos', '2003-08-25', 'Rua Brasil, 250'),
	(1003, '333333333', 'Gabriel Oliveira', '2005-01-17', 'Avenida Central, 80'),
	(1004, '444444444', 'Julia Martins', '2004-11-03', 'Rua das Palmeiras, 45'),
	(1005, '555555555', 'Rafael Souza', '2002-07-19', 'Rua Sao Paulo, 320'),
	(1006, '666666666', 'Camila Ferreira', '2005-03-28', 'Avenida Brasil, 150'),
	(1007, '777777777', 'Pedro Henrique', '2003-09-10', 'Rua Campinas, 210'),
	(1008, '888888888', 'Larissa Costa', '2004-12-22', 'Rua das Acacias, 90');

INSERT INTO turma (id, turno, numero, curso_cod, prof_resp) VALUES
	(1, 'Noite', 101, 1, 101),
	(2, 'Manha', 102, 2, 102),
	(3, 'Noite', 103, 3, 103),
	(4, 'Tarde', 104, 4, 104);


INSERT INTO turma_aluno (turma_id, aluno_pront) VALUES
	(1, 1001),
	(1, 1002),
	(1, 1003),
	(2, 1004),
	(2, 1005),
	(3, 1006),
	(3, 1007),
	(4, 1008);

-- consultas
-- i
select sigla || ' ' || nome as nome from curso;

-- ii
select UPPER(nome) as nome from aluno;

-- iii
select lower(sigla) as sigla , upper(nome) as nome from curso;

-- iv
select pront, nome from aluno where LENGTH(nome) <= 20;

-- v
select matr, initcap(nome) as nome from professor;

-- vi
select substring(nome, 1, 5) as nome, sigla from curso;