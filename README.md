# IN202_1103520
For data structure <br>
name henry 蔡達德 <br>
# Stacks: <br>
Question: 1<br>
Write a C++ program to reverse a stack using recursion, without using any loop.<br>
Example:<br>
Input: elements present in stack from top to bottom 28 29 30 31<br>
Output: 31 30 29 28 <br>
Question: 2<br>
Given an array, print the Next Greater Element (NGE) for every element.<br>
Example:<br>
Input: arr[] =  [ 4, 5 , 2 , 25 ]<br>
Output:  4   –>  5<br>
         5   –>  25<br>
         2   –>  25<br>
         25  –>  -1<br>
Explanation: <br>
•	Except 25 every element has an element greater than them present on the right side.<br>
•	4 is the 1st element and the next element 5 is greater than 4.<br>
•	Now, 5 is the next element, then it compares with the nearby element 2. 2 is lower than 5. <br>
•	So, it jumps to 25. 25 is greater than 5.<br>
•	Accordingly, 2 < 25. Then, 25 is the last and greater than all elements. So, we give -1.<br>
<br>
#Queue:<br>
Question: 1<br>
Given an array and a positive integer k, find the first negative integer for each window (contiguous subarray) of size k. If a window does not contain a negative integer, then print 0 for that window.<br>
Example: <br>
	Input: arr[] = {-8, 2, 3, -6, 10}, k = 2<br>
Output: -8 0 -6 -6<br>
First negative integer for each window of size k<br>
{-8, 2} = -8<br>
{2, 3} = 0 (does not contain a negative integer)<br>
{3, -6} = -6<br>
{-6, 10} = -6<br>
<br>
Question: 2<br>
	Given a queue of integers of even length, rearrange the elements by interleaving the first half of the queue with the second half of the queue.<br>
Example:<br>
	Input:  1 2 3 4<br>
Output: 1 3 2 4<br>
