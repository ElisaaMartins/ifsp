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
	PRIMARY KEY(ID)
);

CREATE TABLE cliente_conta (
	codigo_cliente INT,
	id_conta INT,
	PRIMARY KEY(codigo_cliente, id_conta),
	FOREIGN KEY(codigo_cliente) REFERENCES cliente(codigo),
	FOREIGN KEY(id_conta) REFERENCES conta(ID)
);

INSERT INTO cliente VALUES
	(11, 1234, 'José', '1991-01-01'),
	(15, 2345, 'Maria', '1992-02-02'),
	(19, 3456, 'Paulo', '1993-03-03');

INSERT INTO conta VALUES
	(1, 123, '2005-12-02', 0.00, 1000.00),
	(2, 123, '2006-03-03', 100.00, 2000.00),
	(3, 234, '2007-04-04', 150.00, 1500.00);

INSERT INTO cliente_conta VALUES
	(11,1),
	(15,2),
	(15,3),
	(19,3);