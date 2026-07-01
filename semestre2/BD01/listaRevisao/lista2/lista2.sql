CREATE DATABASE banco_lista2;

\c banco_lista2

CREATE TABLE cliente (
	codigo INT,
	CPF INT,
	nome VARCHAR(100),
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
	
INSERT INTO conta VALUES
	(1, 123, '2005-12-02', 0.00, 1000.00, NULL),
	(2, 123, '2006-03-03', 100.00, 2000.00, NULL),
	(3, 234, '2007-04-04', 150.00, 1500.00, NULL);
	
