-- i, ii, iii, vi, vii não precisa group by

-- i 
SELECT COUNT(*) as qtdEspecialidades from especialidade;

-- ii
SELECT COUNT(*) as qtdPacientes from paciente 
where EXTRACT(year from data_nasc_p) < 2000;

-- iii
select count (num_registro) as qtdMedicos from medico
where num_registro is not null;

-- iv
SELECT status_c, COUNT(*) as qtd from consulta 
GROUP by status_c
order by qtd desc ;

-- v
select e.codigo, e.nome_e, count(t.medico_id) as qtdMedicos 
from especialidade e 
	left join tem_especialidade t on e.codigo = t.espec_cod
group by e.codigo, e.nome_e
order by qtdMedicos desc, e.nome_e asc;

-- vi
select count(*) as qtdConsultas from consulta
-- where data_hora_agend = '05-10-2021';
where data_hora_agend::date = '05-10-2021';
 
-- vii
select count(*) as qtdConsultas 
from consulta c left join paciente p on c.paciente_id = p.id_p
where c.data_hora_agend::date < data_nasc_p;

-- viii
select count(*) as qtdConsultas 
from consulta c 
group by c.data_hora_agend 
order by c.data_hora_agend asc;

-- ix
select e.codigo, e.nome_e, count(t.medico_id) as qtdMedicos 
from especialidade e 
	left join tem_especialidade t on e.codigo = t.espec_cod
group by e.codigo, e.nome_e
order by qtdMedicos desc, e.nome_e asc;

-- x
select e.codigo, e.nome_e, count(t.medico_id) as qtdMedicos 
from especialidade e 
	left join tem_especialidade t on e.codigo = t.espec_cod
group by e.codigo, e.nome_e
HAVING count(t.medico_id) >= 2
order by qtdMedicos desc, e.nome_e asc;

-- xi 
select m.id_m, m.nome_m, count(t.espec_cod) qtdEspecialidades
from medico m left join tem_especialidade t on m.id_m = t.medico_id
group by m.id_m, m.nome_m
order by qtdEspecialidades desc, nome_m asc;

-- xii
select m.id_m, m.nome_m, count(t.espec_cod) qtdEspecialidades
from medico m left join tem_especialidade t on m.id_m = t.medico_id
group by m.id_m, m.nome_m
HAVING count(t.espec_cod) >= 2
order by qtdEspecialidades desc, nome_m asc;