-- LISTA DE EXERCICIO 4
-- 1 (conta e cliente)

CREATE DATABASE banco_lista4;

\c banco_lista4

CREATE TABLE cliente (
	codigo INT,
	CPF INT,
	nome VARCHAR(100),
	data_nascimento DATE,
	PRIMARY KEY(codigo)
);

CREATE TABLE conta (
	ID INT,
	numero_agencia INT,
	data_abertura DATE,
	saldo_atual DECIMAL(15, 2),
	limite_especial DECIMAL(20, 2),
	codigo_cliente INT,
	PRIMARY KEY(ID),
	FOREIGN KEY (codigo_cliente) REFERENCES cliente (codigo)
);

INSERT INTO cliente VALUES
	(11, 1234, 'José', '1991-01-01'),
	(15, 2345, 'Maria', '1992-02-02'),
	(19, 3456, 'Paulo', '1993-03-03');

INSERT INTO conta VALUES
	(1, 123, '2005-12-02', 0.00, 1000.00),
	(2, 123, '2006-03-03', 100.00, 2000.00),
	(3, 234, '2007-04-04', 150.00, 1500.00);

UPDATE cliente SET ID_conta = 1 WHERE codigo = 11;
UPDATE cliente SET ID_conta = 2 WHERE codigo = 15;

UPDATE cliente SET ID_conta = 3 WHERE codigo = 15;
UPDATE cliente SET ID_conta = 3 WHERE codigo = 19;

-- 2 (filme e diretor)
CREATE DATABASE videoteca_lista4;

\c videoteca_lista4

CREATE TABLE diretor (
	codigo INT,
	nome_artistico VARCHAR(100),
	data_nascimento DATE,
	pais_nascimento VARCHAR(100),
	PRIMARY KEY (codigo)
);

CREATE TABLE  filme (
	codigo INT,
	titulo_original VARCHAR(100),
	titulo_portugues VARCHAR(100),
	ano_lancamento INT,
	nota INT,
	diretor INT,
	PRIMARY KEY (codigo),
	FOREIGN KEY (diretor) REFERENCES diretor (codigo)
);


INSERT INTO filme VALUES 
	(1, 'The origin', 'A origem', 2000, 8),
	(2, 'The beginning', 'O início', 2002, 6),
	(3, 'The end', 'O fim', 2004, 5),
	(4, 'The opening', 'A abertura', 1998, NULL)
;
	
	
INSERT into diretor VALUES
	(10, 'John Smith', '1980-03-20', 'Estados Unidos'),
	(11, 'Jose da Silva', '1985-09-15', 'Brasil'),
	(8, 'Maria de Souza', '1975-12-10', 'Brasil')
;

UPDATE filme SET diretor = 10 WHERE codigo = 1;
UPDATE filme SET diretor = 11 WHERE codigo = 2;
UPDATE filme SET diretor = 11 WHERE codigo = 3;

UPDATE filme SET diretor = 8 WHERE codigo = 3;
UPDATE filme SET diretor = 10 WHERE codigo = 4;

-- 3 (clinica e pacientes)
CREATE DATABASE clinica_lista4;

\c clinica_lista4

CREATE TABLE paciente (
	ID_paciente INT,
	nome VARCHAR(100),
	data_nasc DATE,
	endereco VARCHAR(100),
	RG VARCHAR(100),
	CPF VARCHAR(100),
	PRIMARY KEY(ID_paciente)
);

CREATE TABLE medico (
	ID_medico INT,
	nome VARCHAR(100),
	CRM INT,
	telefone VARCHAR(100),
	RG VARCHAR(100),
	CPF VARCHAR(100),
	PRIMARY KEY(ID_medico)
);

CREATE TABLE consulta (
	ID_consulta INT,
	data_hora_agenda TIMESTAMP, -- TIMESTAMP = DATATIME DO SQL
	data_hora_inicio TIMESTAMP,
	data_hora_termino TIMESTAMP,
	status VARCHAR(20) CHECK (status IN ('prevista', 'realizada', 'finalizada', 'não realizada')), 	-- status VARCHAR(100),
	observacao VARCHAR(100),
	ID_paciente INT,
	ID_medico INT,
	PRIMARY KEY(ID_consulta ),
	FOREIGN KEY (ID_paciente) REFERENCES paciente (ID_paciente),
	FOREIGN KEY (ID_medico) REFERENCES medico (ID_medico)
);

INSERT INTO paciente VALUES
	(1, 'José da Silva', '2000-08-20', 'Rua 9 de julho, 52', '1234567', '111.222.333-44'),
	(2, 'Maria das Graças', '1990-10-19', 'Rua 15 de novembro, 97', '2345678', '222.333.444-55');

	
INSERT INTO medico VALUES	
	(11, 'Otávio Silva', 10452, '(11) 1111-2222', '1122334', '111.111.222-22'),
	(12, 'Lívia Souza', 11563, '(11) 2222-3333', '2233445', '222.222.333-33');
	

INSERT INTO consulta VALUES	
	(1, '2019-04-10 10:00', '2019-04-10 10:04', '2019-04-10 10:31', 'realizada', NULL, 1, 11),
	(2, '2019-04-11 14:00', NULL, NULL, 'não realizada', 'reagendar', 1, 12),
	(3, '2019-04-15 09:30', NULL, NULL, 'prevista', 'analisar exames', 2, 12);
