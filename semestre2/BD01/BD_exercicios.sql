-- ATIVIDADE 2

-- CRIAR
CREATE DATABASE Empresa;

-- TABELAS
create table Departamento 
	(codigo int,
	 nome varchar(100),
	 primary key (codigo)
	);

create table Empregado 
	(matricula int,
	 nome varchar(100),
	 data_nasc date,
	 salario decimal(10 , 2),
	 depto_cod int,
	 primary key (matricula),
	 foreign key (depto_cod) references Departamento (codigo)
	);

-- INSERIR DADOS
insert into Departamento (codigo, nome) values 
	(1, 'Informática'), 
	(2, 'RH'), 
	(3, 'Administrativo'), 
	(4, 'Finanças'), 
	(5, 'Marketing');

insert into Empregado (matricula, nome, data_nasc, salario, depto_cod) values 
	(1, 'Aline', '1995-10-05', 5000, 1), 
	(2, 'Joana', '2005-12-20', 1500, 2), 
	(3, 'Marcos', '1980-05-13', 8500, 3), 
	(4, 'Lucas', '2003-06-30', 3200, 4), 
	(5, 'Solange', '1999-10-10', 6050, 5);

-- DADOS DA ATIVIDADE 3
insert into Departamento (codigo, nome) values 
	(101, 'Design de produto'), 
	(102, 'Experiência de cliente'), 
	(103, 'Verificação, validação e testes'), 
	(105, 'Gestão de pessoas'), 
	-- (NULL, 'Gestão de pessoas'), vai dar erro de restrição não nulo // 107
	(106, 'Relacionamento com cliente');

insert into Empregado (matricula, nome, data_nasc, salario, depto_cod) values
	(111222, 'Maria', '1999-04-10', 5000.00,  101),
	(333444, 'João', '2001-05-12', 2500.00,  102),
	(555666, 'Ana', '2005-07-16', 4000.00,  NULL),
	-- (NULL, 'Pedro', '2003-06-14', 3000.00,  103), vai dar erro de restrição não nulo
	(252525, 'Pedro', '2003-06-14', 3000.00,  103), 
	-- (999000, 'José', '2002-12-13', NULL,  107); vai dar erro pq não existe departamento 107
	(999000, 'José', '2002-12-13', NULL,  106);

-- RECUPERAR TODOS OS DEPARTAMENTOS
SELECT * from Departamento;

-- ATIVIDADE 3
-- 1. Alterar o nome do empregado de matrícula 999000 para ‘José Carlos’
UPDATE Empregado 
set nome = 'José Carlos' 
where matricula = 999000;

	-- outra interpretação
	UPDATE Empregado 
	set matricula = 'Jose Carlos' 
	where matricula = 999000;
	-- vai dar erro pq matricula não pode ser varchar só int

-- 2. Alterar o salário do empregado com matrícula 333444 de 2500.00 para 5500.00
UPDATE Empregado 
set salario = 5500.00
where matricula = 333444;

-- 3. Alterar o departamento do empregado com matrícula 111222 para 102
UPDATE Empregado 
set depto_cod = 102
where matricula = 111222;

-- 4. Alterar o nome do departamento de código 102 para 'Experiência de usuário'
UPDATE Departamento 
set nome = 'Experiência de usuário'
where codigo = 102;

-- 5. Excluir o registro da tabela empregado com matrícula 999000
delete from Empregado
where matricula = 999000;

-- 6. Excluir o registro da tabela com código 106
delete from Departamento
where codigo = 106;