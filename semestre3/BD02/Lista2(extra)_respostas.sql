-- lista 2 (extra)

CREATE DATABASE escola;

\c escola

CREATE TABLE curso(
	cod INT,
	nome VARCHAR(50),
	sigla VARCHAR(5),
	PRIMARY KEY cod
);

CREATE table professor(
	matr int,
	nome VARCHAR(50),
	rg VARCHAR(9),
	PRIMARY KEY matr
);

CREATE table aluno(
	
);

CREATE table turma(
	id int;
	turno VARCHAR(10),
	numero INT,
	curso_cod int,
	prof_resp VARCHAR(50),
	PRIMARY key id,
	FOREIGN key (curso_cod) REFERENCES curso(cod),
	FOREIGN key (prof_resp) REFERENCES professor(matr)
);

CREATE table turma_aluno(
	turma_id int,
	aluno_pront int,
	PRIMARY key turma_idm
	FOREIGN key (turma_id) REFERENCES turma(id),
	FOREIGN key (aluno_pront) REFERENCES aluino(pront)
);
