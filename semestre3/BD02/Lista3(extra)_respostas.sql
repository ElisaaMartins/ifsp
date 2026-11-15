-- lista 3 (extra)

-- 1
CREATE DATABASE informatica;

\c informatica

CREATE TABLE cliente(
	id int,
	nome varchar(5),
	data_nasc date,
	endereco varchar(100),
	PRIMARY key (id)
);

CREATE TABLE venda (
	id int,
	valor_total FLOAT,
	data_hora date,
	prazo_entrega INTERVAL,
	cli_id int,
	PRIMARY key (id),
	FOREIGN key (cli_id) REFERENCES cliente(id)
);

CREATE table produto (
	cod int,
	descricao varchar(100),
	prazo_entrega_prev INTERVAL,
	preco_sugerido FLOAT,
	PRIMARY key (cod)
);

CREATE TABLE item_venda (
	id int,
	prod_cod int,
	venda_id int, 
	qtd int,
	prazo_entrega INTERVAL,
	preco_venda FLOAT,
	PRIMARY key (id),
	FOREIGN key (prod_cod) REFERENCES produto(cod),
	FOREIGN key (venda_id) REFERENCES venda(id)
);

-- a)
-- Clientes
INSERT INTO cliente VALUES 
	(1, 'Maria', '2000-10-05', 'Rua XV de Novembro, 256'),
	(2, 'José', '1995-04-15', 'Rua 7 de Setembro, 512'),
	(3, 'Ana', '2001-12-10', 'Rua 9 de Julho, 200');

-- Produtos
-- so funciona o interval se usar em ingles
INSERT INTO produto VALUES 
	(1001, 'Teclado X', '2 days', 100.00),
	(1002, 'Mouse Y', '2 days', 50.00),
	(1003, 'HD Externo Z', '5 days', 300.00),
	(2001, 'Notebook W', '10 days', 3000.00);

-- Vendas 
INSERT INTO venda VALUES 
	(1, 100.00, '2025-02-10', '2 days', 1),
	(2, 400.00, '2025-02-15', '5 days', 2),
	(3, 3000.00, '2025-02-17', '10 days', 2),
	(4, 3150.00, '2025-03-03', '10 days', 3);

-- Itens Venda 
INSERT INTO item_venda VALUES 
	(1, 1001, 1, 1, '2 days', 100.00),
	(2, 1002, 2, 2, '2 days', 50.00),
	(3, 1003, 2, 1, '5 days', 300.00),
	(4, 2001, 3, 1, '10 days', 3000.00),
	(5, 2001, 4, 1, '10 days', 3000.00),
	(6, 1001, 4, 1, '2 days', 100.00),
	(7, 1002, 4, 1, '2 days', 50.00);
	
	
-- b) 
-- 	I
select age(data_nasc) as Idade from cliente; 
-- funcao AGE vai calcular a diferenca de datas (como nao tem nenhuma usa a CURRENT_DATE que eh a atual)

-- II
select DISTINCT EXTRACT(YEAR from data_nasc) as Ano from cliente;

-- III
select EXTRACT(DOW from data_hora) from venda where id = 1;
-- DOW serve pra contar dias da semana, comeca com domingo = 0, parametro do extract

-- IV
SELECT (EXTRACT(YEAR FROM CURRENT_DATE)::INTEGER % 4 = 0 AND 
       (EXTRACT(YEAR FROM CURRENT_DATE)::INTEGER % 100 != 0 OR 
        EXTRACT(YEAR FROM CURRENT_DATE)::INTEGER % 400 = 0)) AS ano_bissexto;

-- V
select *, data_hora + interval '1 day' as Novo_Prazo_Entrega from venda;

-- VI 
select max(prazo_entrega) from item_venda where id = 2;

-- VII
select *, prazo_entrega_prev + interval '3 days' as Novo_Prazo_Entrega from produto;
