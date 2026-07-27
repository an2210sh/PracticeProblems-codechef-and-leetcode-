# XYSTR - Rating 1124

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Chef and String

There are $N$ students standing in a row and numbered $1$ through $N$ from left to right. You are given a string $S$ with length $N$, where for each valid $i$, the $i$-th character of $S$ is 'x' if the $i$-th student is a girl or 'y' if this student is a boy. Students standing next to each other in the row are friends.

The students are asked to form pairs for a dance competition. Each pair must consist of a boy and a girl. Two students can only form a pair if they are friends. Each student can only be part of at most one pair. What is the maximum number of pairs that can be formed?

### Input
- The first line of the input contains a single integer $T$ denoting the number of test cases. The description of $T$ test cases follows.
- The first and only line of each test case contains a single string $S$.
### Output

For each test case, print a single line containing one integer ― the maximum number of pairs.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 10^5$
- $|S| = N$
- $S$ contains only characters 'x' and 'y'
- the sum of $N$ over all test cases does not exceed $3 \cdot 10^5$
### Subtasks

 **Subtask #1 (100 points):**  original constraints

### Sample 1:
Input
Output

```
3
xy
xyxxy
yy
```

```
1
2
0
```

### Explanation:

 **Example case 1:**  There is only one possible pair: (first student, second student).

 **Example case 2:**  One of the ways to form two pairs is: (first student, second student) and (fourth student, fifth student).

Another way to form two pairs is: (second student, third student) and (fourth student, fifth student).

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-27T13:32:20.606Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int prev=s[0];
	    int i=1,m=0;
	    while(i<s.length()){
	        if(s[i]!=prev){
	        m++;
	        prev=s[i+1];
	        i+=2;
	        }
	        else{
	            prev=s[i];
	            i++;
	        }
	     } cout<<m<<"\n";
	 
	        
	    
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/XYSTR)