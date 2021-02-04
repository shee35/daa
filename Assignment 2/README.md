# Assignment-2

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019030  |   Kaushal Kumar | kingkapoork |
|    IIT2019031  |   Sarvesh | sarvesh-11 | 
|    IIT2019032  |   Aarushi | shee35  |

**Group No-**"10"

**Faculty Name-**"Mohammad Javed"

**Mentor Name-** "Mr. Meraz"

---
## Problem Statement
Prepare a matrix of random characters of size 50×50 and check for valid English words diagonally.

---
## How to use code
Download the source code and run it on any gcc compiler machine. It will ask you for the size of matrix and print the result by random generated matrix's frequency distribution table. 
```
#Download project
git clone https://github.com/shee35/daa 
```
* Then get into the folder Assignment-2
* Run the code using any python compiler
---

**Test case**


Test Case-1
Input  
**"No Input required"**

Output
```
['A', 'Au', 'Oz', 'QED', 'ED', 'Dr', 'is', 'UV', 'oke', 'Bd', 'ls', 'It', 'Rf', 'CH', 'CHG', 'HG', 'GP']
```
---

## **Theory**
According to the given problem statement, we had to check if any word in
the diagonals are valid or not, therefore we have made use of PyEnchant
library from python. Enchant is used
to check the spelling of words and
suggest corrections for words that are
miss-spelled. It can use many popular spellchecking packages to perform
this task, including Ispell, Aspell and
MySpell. It is quite flexible at handling
multiple dictionaries and multiple languages. Dictionaries are created using
a language tag which specifies the language to be checked The language tag
used here signifies American English.
If the language tag is not specified, an
attempt is made to determine the language currently in use. This is not always possible, in which case an Error
is raised.

---

## **Analysis**

**Time Complexity**

In case of time complexity the loops
are running completely through the entire fixed matrix for twice. So, after
accordingly analysing the pseudo code
we can infer that time complexity will
be the size of matrix.

**Space Complexity**

As the size for the matrix is fixed according to the problem statement thus,
the space used by any of the algorithm
will be constant and equal to that fixed
value. Here the space complexity is
50x50.

---

### References

[Introduction to PyEnchant](https://pyenchant.github.io/pyenchant/tutorial.html)<br>
[PyEnchant](https://pypi.org/project/pyenchant/
)

