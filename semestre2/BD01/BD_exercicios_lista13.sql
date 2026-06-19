CREATE DATABASE rede_social_lista13

c\ rede_social_lista13

CREATE TABLE pessoa (
	id_pessoa INT,
	nome VARCHAR(100),
	PRIMARY KEY (id_pessoa)
)

CREATE TABLE amizade (
	id_solicita INT,
	id_aceita INT,
	data_hora_solicitacao DATETIME,
	data_hora_aprovacao DATETIME,
	data_hora_nao_aprovacao DATETIME,
	PRIMARY KEY (id_solicita, id_aceita, data_hora_solicitacao),
	FOREIGN KEY (id_aceita) REFERENCES pessoa(id_pessoa),
	FOREIGN KEY (id_solicita) REFERENCES pessoa(id_pessoa)
)
	
INSERT INTO pessoa VALUES 
	(1, 'Adriana'),
	(2, 'Bernardo'),
	(3, 'Cecília'),
	(4, 'Dionísio');
	
INSERT INTO amizade VALUES
	(1, 2, '03-10-2020 08:45', '03-10-2020 15:12', NULL),
	(1, 3, '03-10-2020 10:20', '03-13-2020 19:06', NULL),
	(2, 3, '03-13-2020 19:20', '03-14-2020 15:12', NULL),
	(4, 2, '03-17-2020 21:31', NULL, NULL);


CREATE DATABASE artigos_lista13

c\ artigos_lista13


CREATE TABLE artigo (
	id_artigo CHAR(4),
	titulo VARCHAR(100),
	nome_primeiro_autor VARCHAR(100),
	PRIMARY KEY (id_artigo)
)

CREATE TABLE referencia (
	id_artigo_referencia VARCHAR(4),
	id_artigo_referenciado VARCHAR(4),
	PRIMARY KEY (id_artigo_referencia, id_artigo_referenciado),
	FOREIGN KEY (id_artigo_referencia) REFERENCES artigo (id_artigo),
	FOREIGN KEY (id_artigo_referenciado) REFERENCES artigo (id_artigo)
)
	
	
INSERT INTO artigo VALUES
	('A001', 'Estudo Comparativo de Algoritmos Genéticos', 'Maria Santos'),
	('A002', 'Redes Neurais Aplicadas ao Reconhecimento de Imagens Genéticos', 'João Pereira'),
	('A003', 'Análise de Desempenho em Sistemas Distribuídos Genéticos', 'Carla Lima'),
	('A004', 'Técnicas de Otimização em Problemas de Roteamento Genéticos','Paulo Oliveira'),
	('A005', 'Mineração de Dados em Grandes Volumes de Informação Genéticos', 'Ana Costa');
	
INSERT INTO referencia VALUES
	('A002', 'A001'),
	('A003', 'A001'),
	('A004', 'A001'),
	('A004', 'A003'),
	('A005', 'A002'),
	('A005', 'A004');
	