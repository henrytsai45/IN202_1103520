# IN202_1103520 - Data Structures

**Name:** Henry 蔡達德

---

# Stacks

### Question 1: Reverse a Stack using Recursion

**Problem:**  
Write a C++ program to reverse a stack using recursion, without using any loop.

**Example:**  
*Input:*  
Elements in stack from top to bottom: `28 29 30 31`  
*Output:*  
`31 30 29 28`

---

### Question 2: Next Greater Element (NGE)

**Problem:**  
Given an array, print the Next Greater Element (NGE) for every element.

**Example:**  
*Input:*  
`arr[] = [4, 5, 2, 25]`  
*Output:*  
- 4 → 5  
- 5 → 25  
- 2 → 25  
- 25 → -1  

**Explanation:**  
- Every element has an element greater than it on the right side except 25.
- For 4, the next element 5 is greater than 4.
- For 5, the next element 2 is smaller, so it jumps to 25 which is greater than 5.
- For 2, the next greater element is 25.
- Since 25 is the last element and no element is greater than 25, it returns -1.

---

# Queue

### Question 3: First Negative Integer in Every Window of Size K

**Problem:**  
Given an array and a positive integer `k`, find the first negative integer for each window (contiguous subarray) of size `k`. If a window does not contain a negative integer, print `0` for that window.

**Example:**  
*Input:*  
`arr[] = {-8, 2, 3, -6, 10}`, `k = 2`  
*Output:*  
`-8 0 -6 -6`

**Explanation:**  
- Window `{-8, 2}` → First negative: `-8`
- Window `{2, 3}` → No negative, so `0`
- Window `{3, -6}` → First negative: `-6`
- Window `{-6, 10}` → First negative: `-6`

---

### Question 4: Interleave Queue Elements

**Problem:**  
Given a queue of integers of even length, rearrange the elements by interleaving the first half of the queue with the second half.

**Example:**  
*Input:*  
`1 2 3 4`  
*Output:*  
`1 3 2 4`
