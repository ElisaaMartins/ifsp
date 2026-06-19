CREATE DATABASE documentos_lista12

c\ documentos_lista12

CREATE TABLE documento (
	id_documento INT,
	titulo VARCHAR(100),
	PRIMARY KEY (id_documento)
)

CREATE TABLE autores (
	id_autor INT,
	nome_autor VARCHAR(100),
	PRIMARY KEY (id_autor)
)

CREATE TABLE documento_autor (
	id_documento INT,
	id_autor INT,
	PRIMARY KEY (id_documento, id_autor),
	FOREIGN KEY (id_documento) REFERENCES documento(id_documento),
	FOREIGN KEY (id_autor) REFERENCES autores(id_autor)
)


CREATE TABLE secao (
	id_secao INT,
	numero VARCHAR(100),
	titulo VARCHAR(100),
	documento INT,
	id_secao_pai INT,
	PRIMARY KEY (id_secao),
	FOREIGN KEY (documento) REFERENCES documento(id_documento),
	FOREIGN KEY (id_secao_pai) REFERENCES secao(id_secao)
)
	
INSERT INTO documento VALUES
	(1, 'Urbanismo tático em uma cidade para pessoas');
	(2, 'Inteligência Artificial');
	
	
INSERT INTO autores VALUES
	(1, 'Taina Melo de Jesus Caetano'),
	(2, 'William Ramalho Feitosa')
	(3, 'Maria Silva');
	
INSERT INTO documento_autor VALUES
	(1, 1),
	(1, 2),
	(2, 3);
	
INSERT INTO secao VALUES	
	(1, 1,'Neoliberalismo e o espaço urbano', 1, NULL),
	(2, 1.1,'Problemas urbanos', 1, 1),
	(3, 2,'Urbanismo tático', 1, NULL),
	(4, 2.1,'A cidade para pessoas', 1, 3),
	(5, 3,'Material e métodos', 1, NULL),
	(6, 4,'Referências', 1, 5),
	
	(7, 1,'Introdução', 2, NULL),
	(8, 1.1,'Contextualização da Inteligência Artificial', 2, 7),
	(9, 1.2,'Relevância atual da IA em diversos setores', 2, 7),
	(10, 1.3,'Objetivos do artigo', 2, 7),
	(11, 2,'Conceitos Fundamentais de Inteligência Artificial', 2, NULL),
	(12, 2.1,'Definição de IA', 2, 11),
	(13, 2.2,'Principais áreas da IA', 2, 11),
	(14, 2.3,'Histórico e evolução da IA', 2, 11),
	(15, 3,'Tecnologias e Técnicas de IA', 2, NULL),
	(16, 3.1,'Algoritmos de Aprendizado de Máquina', 2, 15),
	(17, 3.1.1,'Aprendizado supervisionado', 2, 15),
	(18, 3.1.2,'Aprendizado não supervisionado', 2, 15),
	(19, 3.1.3,'Aprendizado por reforço', 2, 15),
	(20, 3.2,'Redes Neurais Artificiais e Deep Learning', 2, 15),
	(22, 3.3,'Processamento de Linguagem Natural (PLN)', 2, 15),
	(23, 3.4,'Processamento de Linguagem Natural (PLN)', 2, 15);