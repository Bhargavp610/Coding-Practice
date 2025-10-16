# 📊 SQL Practice Problems  

This folder contains my SQL practice problems solved on HackerRank.  
Each `.sql` file starts with comments describing the problem statement and notes about the solution.  

---

## Problems Covered  

1. **American Cities >100k**  
   Query all columns for American cities in the `CITY` table with populations larger than 100,000. (`CountryCode = 'USA'`)  

2. **American Cities >120k (Names only)**  
   Query the `NAME` field for American cities in the `CITY` table with populations larger than 120,000. (`CountryCode = 'USA'`)  

3. **All Cities**  
   Query all columns for every row in the `CITY` table.  

4. **City by ID**  
   Query all columns for the city in `CITY` where `ID = 1661`.  

5. **Japanese Cities (All Attributes)**  
   Query all attributes of every Japanese city in the `CITY` table. (`CountryCode = 'JPN'`)  

6. **Japanese Cities (Names Only)**  
   Query the names of all Japanese cities in the `CITY` table. (`CountryCode = 'JPN'`)  

7. **City and State from Station**  
   Query a list of `CITY` and `STATE` from the `STATION` table.  

8. **Unique City Names with Even IDs**  
   Query distinct `CITY` names from `STATION` where the `ID` is even. Results can be in any order.  

9. **Shortest and Longest City Names**
   Query the two cities in the STATION table with the shortest and longest CITY names, along with their respective lengths.
   If multiple cities have the same shortest or longest name, select the one that comes first alphabetically.

10. **Cities Starting with Vowels**
Query the list of CITY names from STATION that start with a vowel (a, e, i, o, u).

11. **Cities Ending with Vowels**
   Query the list of CITY names from STATION that end with vowels (a, e, i, o, u).
   The result should not contain duplicates.

12. **Cities Starting and Ending with Vowels**
   Query the list of CITY names from STATION where both the first and last characters are vowels.
   The result should not contain duplicates.

13. **Cities Not Starting with Vowels**
   Query the list of CITY names from STATION that do not start with vowels.
   The result should not contain duplicates.

14. **Cities Not Ending with Vowels**
   Query the list of CITY names from STATION that do not end with vowels.

15. **Cities Not Starting or Ending with Vowels**
   Query the list of CITY names from STATION that either do not start with vowels or do not end with vowels.
   The result should not contain duplicates.

16. **Cities Not Starting and Not Ending with Vowels**
   Query the list of CITY names from STATION that do not start with vowels and do not end with vowels.
   The result should not contain duplicates.

17. **Students Scoring Higher than a Certain Marks**
   Query the NAME of students from STUDENTS who scored higher than a given marks.
   Order by the last three characters of the name, and in case of tie, sort by ascending ID.

18. **Employee Names in Alphabetical Order**
   Query the list of employee names from EMPLOYEE in alphabetical order.

19. **High Salary Employees with Short Tenure**
   Query the list of employee names from EMPLOYEE who have a salary greater than $2000 per month and have worked for less than 10 months.
   Sort the results by ascending EMPLOYEE_ID.