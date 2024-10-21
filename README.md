# IN202_1103520
## Data Structure Assignments
**Name:** Henry 蔡達德
https://github.com/henrytsai45/IN202_1103520
---

## Stacks:

### Question 1:
Write a C++ program to reverse a stack using recursion, without using any loop.

**Example:**
- Input: Elements present in stack from top to bottom: `28 29 30 31`
- Output: `31 30 29 28`

### Question 2:
Given an array, print the Next Greater Element (NGE) for every element.

**Example:**
- Input: `arr[] = [4, 5, 2, 25]`
- Output:
  - `4  ->  5`
  - `5  ->  25`
  - `2  ->  25`
  - `25 -> -1`

**Explanation:**
- Every element except 25 has a greater element on its right.
- `4` is compared with `5`, and since `5` is greater, `5` is the NGE for `4`.
- For `5`, the next element `2` is smaller, so it jumps to `25`, which is greater.
- Similarly, `25` is the largest, so its NGE is `-1`.

---

## Queues:

### Question 3:
Given an array and a positive integer `k`, find the first negative integer for each window (contiguous subarray) of size `k`. If a window does not contain a negative integer, print `0` for that window.

**Example:**
- Input: `arr[] = {-8, 2, 3, -6, 10}`, `k = 2`
- Output: `-8 0 -6 -6`

**First negative integer for each window of size `k`:**
- `{-8, 2}` → `-8`
- `{2, 3}` → `0` (does not contain a negative integer)
- `{3, -6}` → `-6`
- `{-6, 10}` → `-6`

### Question 4:
Given a queue of integers of even length, rearrange the elements by interleaving the first half of the queue with the second half.

**Example:**
- Input: `1 2 3 4`
- Output: `1 3 2 4`
