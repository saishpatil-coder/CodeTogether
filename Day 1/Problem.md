### **Beginner-Level Problem: Two Sum**

#### **Problem Statement:**

Leetcode : PS 1
You are given an integer array `nums` and an integer `target`.  
Your task is to find two numbers in the array such that their sum equals the `target`.  
Return the indices of these two numbers in the array.

#### **Key Details:**

1. Each input will have **exactly one solution**.
2. You cannot use the same element twice.
3. Return the indices in **any order**.

#### **Example:**

Input:

nums = [2, 7, 11, 15], target = 9

```
Output:

[0, 1]
```

**Explanation:**  
The numbers `2` (index 0) and `7` (index 1) add up to the target `9`.

#### **Hints to Solve:**

- Use a **hashmap** to store the numbers and their indices as you iterate through the array.
- For each number, check if `target - current_number` exists in the hashmap.

---

### **Medium-Level Problem: Longest Substring Without Repeating Characters**

#### **Problem Statement:**

Leetcode : PS 3
You are given a string `s`.  
Find the **length of the longest substring** in `s` that does not contain any repeating characters.

#### **Key Details:**

1. A **substring** is a contiguous sequence of characters within a string.
2. Focus on the **length** of the substring, not the substring itself.

#### **Example:**

Input:

s = "abcabcbb"

```
Output:

3
```

**Explanation:**  
The longest substring without repeating characters is `"abc"`, with a length of `3`.

Input:

s = "bbbbb"

```
Output:

1
```

**Explanation:**  
The longest substring without repeating characters is `"b"`, with a length of `1`.

#### **Hints to Solve:**

- Use the **sliding window** technique:
  - Maintain a window of unique characters as you iterate through the string.
  - Use a **set** or **map** to keep track of characters in the current window.
  - Expand the window by adding characters, and shrink it by removing characters if a duplicate is found.

---
