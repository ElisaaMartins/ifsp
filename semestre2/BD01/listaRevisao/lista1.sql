CREATE DATABASE lista1;

\c lista1

CREATE TABLE especialidade(
	codigo SERIAL,
	nome_e VARCHAR(100),
	descricao VARCHAR(500),
	PRIMARY KEY (codigo)
);

CREATE TABLE medico(
	id_m SERIAL,
	nome_m VARCHAR(100),
	num_registro INT,
	data_nasc_m DATE,
	PRIMARY KEY (id_m)
);

CREATE TABLE paciente(
	id_p SERIAL,
	nome_p VARCHAR(100),
	data_nasc_p DATE,
	endereco VARCHAR(200),
	PRIMARY KEY (id_p)
);

CREATE TABLE tem_especialidade(
	id SERIAL,
	espec_cod INT,
	medico_id INT,
	PRIMARY KEY (id),
	FOREIGN KEY (espec_cod) REFERENCES especialidade(codigo),
	FOREIGN KEY (medico_id) REFERENCES medico(id_m)
);

CREATE TABLE consulta(
	id_c SERIAL,
	medico_id INT,
	paciente_id INT,
	data_hora_agend TIMESTAMP,
	status_c VARCHAR(100),
	observacao VARCHAR(1000),
	PRIMARY KEY (id_c),
	FOREIGN KEY (medico_id) REFERENCES medico(id_m),
	FOREIGN KEY (paciente_id) REFERENCES paciente(id_p)
);

INSERT INTO especialidade VALUES 
	(1, 'Pediatra', 'Descrição de pediatria...'),
	(2, 'Radiologia', 'Descrição de radiologia...'),
	(3, 'Cardiologia', 'Descrição de cardiologia...');
	

INSERT INTO medico VALUES 
	(1, 'Miguel', 1234, '2000-10-30'),
	(2, 'Helena', 5678, '1999-09-27'),
	(3, 'Sofia', 9012, '1998-08-24'),
	(4, 'José', NULL, NULL);

INSERT INTO paciente VALUES 
	(1, 'Júlia', '1990-06-15', 'Rua 9 de julho, 100'),
	(2, 'José',  '1991-07-16', 'Rua 15 de novembro, 76'),
	(3, 'Alice', '1992-08-17', 'Rua 12 de outubro, 11'),
	(4, 'Cícero','2000-06-15', NULL);

	
INSERT INTO tem_especialidade VALUES 
	(1, 1, 1),
	(2, 1, 2),
	(3, 2, 2),
	(4, 3, 2),
	(5, 3, 3);
	
INSERT INTO consulta VALUES 
	(1, 	1,	1, 	'2020-08-10 08:00:00', 'Finalizado', 'Nenhuma'),
	(2, 	1,	2, 	'2020-08-11 14:00:00', 'Finalizado', 'Nenhuma'),
	(3, 	2,	3, 	'2020-08-17 10:00:00', 'Agendado', 	 'Nenhuma'),
	(4, NULL, NULL, '2020-07-12 00:00:00', NULL, 		 NULL),
	(5, NULL, NULL, '2019-12-23 00:00:00', NULL,  		 NULL);
	
SELECT * FROM paciente;
SELECT * FROM especialidade;
SELECT * FROM medico;
SELECT * FROM consulta;
