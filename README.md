# Assignment-1

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019030  |   Kaushal Kumar | kingkapoork |
|    IIT2019031  |   Sarvesh | sarvesh-11 | 
|    IIT2019032  |   Aarushi | shee35  |

**Group No-**"10"

**Faculty Name-**"Mohammad Javed"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
To prepare a frequency distribution table along with location information from a randomly generated matrix of any size and 2-digit positive integers.

---
## How to use code
A quick and simplified answer is download the source code and run it on any gcc compiler machine. It will ask you for the size of matrix and print the result by random generated matrix's frequency distribution table. 
```
#Download project
git clone https://github.com/shee35/daa 
```
Project Initialize 
```
cd daa
#create assignment-1 folder
mkdir assignment_01

#go to assignment-1
cd assignment_01

#Create file
touch readme.md
touch main.py
.
.
```
---

Run the code
```
python main.py
```
Output
```
Curve fitting using Least squares Approximation
```
---

**Test case**

Find max
```
Test Case-1
Input:
6
2 4 8 0 2 1
Out:
8
#--------------------------#
Test Case-2
Input:
6
2 4 8 0 2 1
Out:
8
```

---

### Theory
According to the given problem statement we have to generate a 2D matrix, with 2 digit positive integer value and accordingly generate its frequency distribution table along with the position of each value as situated in the generated matrix. Here, we have used hashing techniques to store the frequencies of the elements in an array and mapped their values to the positions in which they are situated. To store the key/value pair, you can use a simple array like a data structure where keys (integers) can be used directly as an index to store values. However, in cases where the keys are large and cannot be used directly as an index, you should use a hash function. The mapping is done using a 2D vector and pair to store x-y indexes

---

### Analysis

**Time Complexity**

In all the cases, time complexity will always be same as O(n*m). As we have to do the 3 computations: first begin the generation of random arrays. Second being the computation of frequency array and the last one is print the frequency array. For first and second Computation, time complexity is always O(n*m). For third computation, time complexity is equals to the O(no. of distinct elements*respective occurrence) and ultimately this comes as the O(n*m) So overall time complexity is O(n*m).

**Space Complexity**

The complexity of both the algorithm is almost same for small inputs which is generally O(n*m) but for large inputs algorithm 2 is more efficient than algorithm 1 because it will reduce unnecessary wastage of memory and solve the problems in O(n*m) complexity.

---

### References

[Link1](https://www.geeksforgeeks.org/find-frequency-number-array/)
[Link2](https://www.geeksforgeeks.org/vector-of-vectors-in-c-stl-with-examples/)

