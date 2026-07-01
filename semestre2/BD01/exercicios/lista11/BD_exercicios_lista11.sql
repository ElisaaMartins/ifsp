CREATE DATABASE loja_lista11

c\ loja_lista11

CREATE TABLE cliente (
	id_cliente INT,
	primeiro_nome VARCHAR(100),
	inicial_meio VARCHAR(1),
	sobrenome VARCHAR(100),
	PRIMARY KEY (id_cliente)
)
	
	
CREATE TABLE email (
	id_email INT,
	email VARCHAR(100),
	cliente INT,
	PRIMARY KEY (id_email),
	FOREIGN KEY (cliente) REFERENCES cliente(id_cliente)
)

CREATE TABLE endereco (
	id_endereco INT,
	cliente INT,
	logradouro VARCHAR(100), 
	numero INT, 
	complemento VARCHAR(100), 
	CEP VARCHAR(9),
	cidade VARCHAR(100),
	UF CHAR(2),
	PRIMARY KEY (id_endereco),
	FOREIGN KEY (cliente) REFERENCES cliente(id_cliente)
)

INSERT INTO cliente VALUES
	(1, 'Célio', 'A', 'Silva'),
	(2, 'Maria', 'B', 'Souza');
	

INSERT INTO email VALUES
	(1, 'celio.a.silva@dominio.com.br', 1),
	(2, 'silva.celio@empresa.com.br', 1),
	(3, 'mariabsouza@dominio.com.br', 2),
	(4, 'souza.maria@empresa.com.br', 2);
	
	
INSERT INTO endereco VALUES
	(1, 1, 'Rua sete de setembro', 70, NULL, '12345-678', 'Salto', 'SP'),
	(2, 2, 'Rua onze de junho', 144, 'Apto 33', '11223-555', 'Itu', 'SP'),
	(3, 2, 'Rua quinze de novembro', 99, NULL, '11223-444', 'Itu', 'SP');
	