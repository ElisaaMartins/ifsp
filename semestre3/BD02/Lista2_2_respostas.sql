-- lista 2

-- i
SELECT nome_p, data_nasc_p from paciente where data_nasc_p BETWEEN '1990-01-01' AND '1990-12-31';

-- ii
SELECT DISTINCT status_c from consulta;

-- iii
SELECT * from consulta where observacao IS NULL;

-- iv
SELECT * from consulta where observacao IS NULL ORDER BY medico_id, id_c;

-- v
SELECT * from paciente ORDER BY nome_p LIMIT 5;

-- vi
SELECT * from consulta ORDER BY data_hora_agend LIMIT 1;

-- vii
SELECT * from consulta ORDER BY data_hora_agend LIMIT 4 OFFSET 1;
