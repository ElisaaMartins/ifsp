-- lista 3

-- i
SELECT nome_m FROM medico;

-- ii
SELECT nome_p FROM paciente;

-- iii
SELECT nome_m FROM medico UNION SELECT nome_p FROM paciente;

-- iv
SELECT nome_m FROM medico UNION SELECT nome_p FROM paciente ORDER BY nome_m ASC; 

-- v
SELECT id_p FROM paciente;

-- vi 
-- SELECT id_p FROM paciente INTERSECT SELECT paciente_id FROM consulta;
SELECT paciente_id FROM consulta

-- vii
SELECT id_p FROM paciente EXCEPT SELECT paciente_id FROM consulta;

-- viii
SELECT id_m FROM medico INTERSECT SELECT medico_id FROM tem_especialidade;

-- ix
SELECT medico_id FROM consulta;

-- x 
SELECT medico_id FROM tem_especialidade INTERSECT SELECT medico_id FROM consulta;

-- xi 
SELECT medico_id FROM tem_especialidade EXCEPT SELECT medico_id FROM consulta;