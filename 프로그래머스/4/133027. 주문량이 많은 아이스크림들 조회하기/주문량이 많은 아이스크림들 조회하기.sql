-- 코드를 입력하세요
SELECT a.flavor 
FROM FIRST_HALF as a
join JULY as b
on a.FLAVOR = b.FLAVOR
group by b.flavor
order by sum(a.total_order) + sum(b.total_order) desc
limit 3