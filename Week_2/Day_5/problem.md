You have an empty sequence, and you will be given *N* queries. Each query is one of these three types:
- x -Push the element x into the stack.
- Delete the element present at the top of the stack.
- Print the maximum element in the stack.

## Function Description

Complete the getMax function in the editor below.\
getMax has the following parameters:
- string operations[n]: operations as strings

### Returns
- int[]: the answers to each type 3 query

### Input Format
The first line of input contains an integer, **n**. The next **n** lines each contain an above mentioned query.

### Constraints
```
1 <= n <= 10^5
1 <= x <= 10^9
1 <= n <= 3
```
All queries are valid.
### Sample Input
```
STDIN Function
----- --------
10 operations[] size n = 10
1 97 operations = ['1 97', '2', '1 20', ....]
2
1 20
2
1 26
1 20
2
3
1 91
3
```
### Sample Output
26\
91

[Link to the question](https://www.hackerrank.com/challenges/maximum-element/problem?isFullScreen=true)