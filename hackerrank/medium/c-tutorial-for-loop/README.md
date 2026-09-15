# For Loop

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

A _for_ loop is a programming language statement which allows code to be repeatedly executed.  

The syntax is

	for ( <expression_1> ; <expression_2> ; <expression_3> )
    	<statement>

- _expression\_1_ is used for intializing variables which are generally used for controlling the terminating flag for the loop.
- _expression\_2_ is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
- _expression\_3_ is generally used to update the flags/variables.

A sample loop is

	for(int i = 0; i < 10; i++) {
    	...
    }
    
In this challenge, you will use a for loop to increment a variable through a range.  

**Input Format**

You will be given two positive integers, $a$ and $b$ ($a \le b$), separated by a newline.

**Constraints**

 

**Output Format**

For each integer $n$ in the inclusive interval $[a, b]$:

- If $1 \le n \le 9$, then print the English representation of it in lowercase. That is "one" for $1$, "two" for $2$, and so on.
- Else if $n > 9$ and it is an even number, then print "even".
- Else if $n > 9$ and it is an odd number, then print "odd".

**Note:** $[a, b] = \{x \in \mathbb{Z} \,|\, ~a \le x \le b\} = \{a, ~a+1, \dots, b\}$

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-15T06:30:32.398Z  

```cpp
#include <iostream>
#include <cstdio>
using namespace std;
void ans(int a){
    if(a>9 && a%2==0)
    cout<<"even";
    else if (a>9 && a%2!=0)
    cout<<"odd";
    else{
        switch(a){
            case 1:
            cout<<"one";
            break;
            case 2:
            cout<<"two";
            break;
            case 3:
            cout<<"three";
            break;
              case 4:
            cout<<"four";
            break;
            case 5:
            cout<<"five";
            break;
            case 6:
            cout<<"six";
            break;
              case 7:
            cout<<"seven";
            break;
            case 8:
            cout<<"eight";
            break;
            case 9:
            cout<<"nine";   
        }
    }cout<<endl;
}
int main() {
    // Complete the code.
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++)
    ans(i);
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem)