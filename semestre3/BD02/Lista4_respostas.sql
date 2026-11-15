-- Lista 4
-- I 
SELECT p.nome_p, p.data_nasc_p
FROM paciente p, consulta c
WHERE c.id_c = 1 AND c.paciente_id = p.id_p;

-- II
SELECT m.num_registro, m.nome_m
FROM medico m, consulta c
WHERE c.id_c = 2 AND c.medico_id = m.id_m;

-- III
SELECT c.* from consulta C INNER JOIN medico m ON (c.medico_id = m.id_m)
where m.num_registro = 1234 
ORDER BY c.data_hora_agend DESC;

-- IV
SELECT e.codigo, e.nome_e, e.descricao
from especialidade e, medico m, tem_especialidade t
where m.num_registro = 5678 and m.id_m = t.medico_id and t.espec_cod = e.codigo
ORDER BY e.nome_e ASC;

-- V
SELECT m.num_registro, m.nome_m
FROM medico m, especialidade e, tem_especialidade t
WHERE e.nome_e = 'Pediatria' AND e.codigo = t.espec_cod AND t.medico_id = m.id_m;

-- VI
SELECT DISTINCT p.id_p, p.nome_p, p.data_nasc_p
from paciente p, consulta c, tem_especialidade t, especialidade e
where p.id_p = c.paciente_id and c.medico_id = t.medico_id and t.espec_cod = e.codigo and e.nome_e = 'Pediatria';

-- VII
select m.num_registro, m.nome_m
from medico m, consulta c
where c.medico_id = m.id_m;

-- VIII
select m.num_registro, m.nome_m
from medico m  
left join consulta c on m.id_m = c.medico_id
where c.medico_id IS NULL;

-- IX
select DISTINCT m.num_registro, m.nome_m
from medico m, tem_especialidade t 
where t.medico_id = m.id_m;

-- X
select m.num_registro, m.nome_m
from medico m 
left join tem_especialidade t on m.id_m = t.medico_id
where t.medico_id is NULL;
