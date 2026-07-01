CREATE DATABASE banco_lista3;

\c banco_lista3

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
	(15, 2345, 'Maria', '1992-02-02');
	
INSERT INTO conta VALUES
	(1, 123, '2005-12-02', 0.00, 1000.00),
	(2, 123, '2006-03-03', 100.00, 2000.00),
	(3, 234, '2007-04-04', 150.00, 1500.00);
	

UPDATE conta SET codigo_cliente = 11 WHERE ID = 1;
UPDATE conta SET codigo_cliente = 15 WHERE ID = 2;

UPDATE conta SET codigo_cliente = 15 WHERE ID = 3;
