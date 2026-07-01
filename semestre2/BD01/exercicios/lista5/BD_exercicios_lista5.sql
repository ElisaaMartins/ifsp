-- LISTA DE EXERCICIO 5
-- 1 (conta e cliente)

CREATE DATABASE banco_lista5;

\c banco_lista5

CREATE TABLE cliente (
	codigo INT,
	CPF INT,
	nome VARCHAR(100),
	data_nascimento DATE,
	PRIMARY KEY(codigo)
);

CREATE TABLE conta (
	ID_conta INT,
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

-- 2 (mesa e colaborador)
CREATE DATABASE banco_lista5;

\c banco_lista5

CREATE TABLE colaborador (
	matricula INT,
	nome VARCHAR(100),
	cargo VARCHAR(100),
	PRIMARY KEY (matricula)
);

CREATE TABLE mesa (
	patrimonio INT,
	data_aquisicao DATE,
	qtd_gavetas INT,
	cor VARCHAR(100),
	altura INT,
	largura INT,
	comprimento INT,
	matricula_colaborador INT UNIQUE, -- relacionamento 1:1 garantido, senão vários colaboradores poderiam usar a mesma mesa
	PRIMARY KEY (patrimonio),
	FOREIGN KEY (matricula_colaborador) REFERENCES colaborador (matricula)
);

INSERT INTO mesa VALUES
	(1001, '2010-10-01', 3, 'Branca', 75, 180, 100),
	(1002, '2010-02-15', 2, 'Cinza', 75, 180, 90),
	(1005, '2010-03-20', 2, 'Cinza', 75, 150, 90),
	(1006, '2010-03-20', 2, 'Cinza', 75, 150, 90);
	
INSERT INTO colaborador VALUES
	(1234, 'Rita', 'Coordenador'),
	(2345, 'Jose', 'Programador'),
	(3456, 'Trajano', 'Programador');
	
UPDATE mesa SET matricula_colaborador = 1234 WHERE patrimonio = 1001;
UPDATE mesa SET matricula_colaborador = 2345 WHERE patrimonio = 1002;
UPDATE mesa SET matricula_colaborador = 3456 WHERE patrimonio = 1005;