-- criação da tabela agencia
CREATE TABLE agencia (
	numero INT,
	nome   VARCHAR(100),
	PRIMARY KEY (numero)
);

CREATE TABLE conta (
	numero INT,
	num_ag INT,
	saldo  DECIMAL(15, 2), -- decimal que tem 15 digitos sendo 2 depois da virgula
	PRIMARY KEY (numero, num_ag),
	FOREIGN KEY (num_ag) REFERENCES agencia(numero)
);

-- inserindo dados na tabela 
INSERT INTO agencia (numero, nome) VALUES (123, 'Salto Centro'); 
INSERT INTO agencia (numero, nome) VALUES (124, 'Salvador'), (203, 'Manaus'); 

INSERT INTO conta (numero, num_ag, saldo) VALUES (1, 123, 0.00); 
INSERT INTO conta (numero, num_ag, saldo) VALUES (2, 123, 10.00), (3, 124, 5000.00); 

-- vai dar erro
INSERT INTO conta (numero, num_ag, saldo) VALUES (2, 129, 0.00);  -- não existe agencia 129
INSERT INTO conta (numero, num_ag, saldo) VALUES (NULL, 123, 0.00);  -- PK não pode ser nulo

-- selecionar registros de uma tabela
SELECT * FROM agencia;
SELECT * FROM conta;

