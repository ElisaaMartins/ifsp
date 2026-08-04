-- a
update paciente set nome_p =  'Maria Lívia' where id_p = 1;

update medico set data_nasc_m = '1998-10-24' where id_m = 3;

delete from consulta where id_c = 3;

-- b
SELECT * from medico;

SELECT codigo, nome_e from especialidade;

SELECT nome_p, data_nasc_p from paciente where data_nasc_p < '1990-01-01';

select nome_m, num_registro from medico where num_registro BETWEEN 10000 and 19999;

select id_c, paciente_id, data_hora_agend from consulta where medico_id = 1;

select * from paciente where nome_p like 'J%';

select * from paciente where nome_p similar to 'A%';

select * from paciente where nome_p like '%José%' OR 
							 nome_p like '%João%';

select * from paciente where nome_p similar to '%(José|João)%';


