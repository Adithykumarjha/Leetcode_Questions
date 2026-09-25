# Write your MySQL query statement below
SELECT 
s.student_id, s.student_name, sub.subject_name ,
COUNT(E.student_id) attended_exams
FROM Students s
CROSS JOIN Subjects sub
LEFT JOIN Examinations E
ON s.student_id = E.student_id
AND sub.subject_name = E.subject_name

GROUP BY s.student_id, s.student_name, sub.subject_name
ORDER BY s.student_id, s.student_name, sub.subject_name;

