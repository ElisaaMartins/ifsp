create database clinica;

\c clinica

create table especialidade (
	codigo int, 
	nome_e varchar(100), 
	descricao varchar(500),
	PRIMARY key (codigo)
);

create table medico (
	id_m int, 
	nome_m varchar(100), 
	num_registro int,
	data_nasc_m date,
	PRIMARY key (id_m)
);

create table paciente (
	id_p int, 
	nome_p varchar(100), 
	data_nasc_p date,
	endereco varchar(200),
	PRIMARY key (id_p)
);

create table consulta (
	id_c int, 
	medico_id int,
	paciente_id int,
	data_hora_agend TIMESTAMP,
	status_c varchar(100),
	observacao varchar(1000),
	PRIMARY key (id_c),
	FOREIGN key (medico_id) REFERENCES medico(id_m),
	FOREIGN key (paciente_id) REFERENCES paciente(id_p)
);

create table tem_especialidade (
	id int, 
	espec_cod int,
	medico_id int,
	PRIMARY key (id),
	FOREIGN key (espec_cod) REFERENCES especialidade(codigo),
	FOREIGN key (medico_id) REFERENCES medico(id_m)
);

INSERT into especialidade VALUES
	(1, 'Pediatria', 'Descrição de pediatria...'),
	(2, 'Radiologia', 'Descrição de radiologia...'),
	(3, 'Cardiologia', 'Descrição de cardiologia...');
	
	
INSERT into medico VALUES
	(1, 'Miguel', 1234, '2000-10-30'),
	(2, 'Helena', 5678, '1999-09-27'),
	(3, 'Sofia', 9012, '1998-08-24'),
	(4, 'José', NULL, NULL);


INSERT into paciente VALUES
	(1, 'Júlia',  '1990-06-15', 'Rua 9 de julho, 100'),
	(2, 'José', '1991-07-16' , 'Rua 15 de novembro, 76 '),
	(3, 'Alice', '1992-08-17' , 'Rua 12 de outubro, 11'),
	(4, 'Cícero', '2000-06-15', NULL );

INSERT into consulta VALUES
	(1, 1, 1, '2020-08-10 08:00:00', 'Finalizado', 'Nenhuma'),
	(2, 1, 2, '2020-08-11 14:00:00', 'Finalizado', 'Nenhuma'),
	(3, 2, 3, '2020-08-17 10:00:00', 'Agendado', 'Nenhuma'),
	(4, NULL, NULL, '2020-07-12 00:00:00', NULL, NULL),
	(5, NULL, NULL, '2019-12-23 00:00:00', NULL, NULL);

INSERT into tem_especialidade VALUES
	(1, 1, 1),
	(2, 1, 2),
	(3, 2, 2),
	(4, 3, 2),
	(5, 3, 3);
	
SELECT * from paciente;
SELECT * from especialidade;
SELECT * from medico;
SELECT * from consulta;
