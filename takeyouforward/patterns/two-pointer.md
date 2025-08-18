### 📝 Two Pointers – Interview Revision Notes (Top 1% Style)

#### 🔑 Core Variants (Always Ask Yourself)

1. **Opposite Ends (Sorted / Palindrome / Pair-Sum style)**

   * Condition: Input is sorted or can be sorted
   * Example: 2Sum II, Container With Most Water, Trapping Rain Water

2. **Sliding Window (Substring / Subarray)**

   * Condition: Need “longest/shortest substring/subarray with property”
   * Example: Longest Substring Without Repeating Characters, Minimum Window Substring

3. **Fast & Slow (Linked List / Stream problems)**

   * Condition: Detect cycle, middle node, meeting point
   * Example: Linked List Cycle, Happy Number

👉 **If brute force has nested loops → ask: “Can I slide or shrink one loop with a second pointer?”**

---

#### 🔑 What is the Two Pointer Technique?

A pattern where you use two indices (pointers) to traverse an array/string/list in a smart way.

Instead of brute force O(n²), two pointers often bring the solution to O(n) or O(n log n).

---

#### ⚠️ Pitfalls Interviewers Test

* Forgetting to **move the right pointer first** in sliding window (causes infinite loop).
* Handling **duplicates** in sorted array problems.
* **Off-by-one** errors (while `i < j` vs `i <= j`).
* Confusing **subarray sum = target** (prefix sums needed) vs **subarray ≤ target** (sliding window works).
* Forgetting that **window can shrink & expand dynamically**.

---

### 🎯 Must-Solve Problems (Ranked for Recall)

#### 🔹 Easy (Warm-up, build muscle memory)

1. **Remove Duplicates from Sorted Array** – LC 26
2. **Reverse String** – LC 344
3. **Valid Palindrome** – LC 125
4. **Squares of a Sorted Array** – LC 977
5. **Merge Sorted Array** – LC 88

---

#### 🔸 Medium (The Real FAANG Core)

1. **Two Sum II - Sorted Input** – LC 167
2. **3Sum** – LC 15 *(super common)*
3. **Container With Most Water** – LC 11 *(Amazon, Meta)*
4. **Longest Substring Without Repeating Characters** – LC 3 *(all-time classic)*
5. **Minimum Size Subarray Sum** – LC 209
6. **Longest Repeating Character Replacement** – LC 424 *(Google/Amazon)*
7. **Partition Labels** – LC 763

---

#### 🔺 Hard (Differentiators / Top 1% Filter)

1. **Trapping Rain Water** – LC 42 *(must know two solutions: stack + 2-ptr)*
2. **Sliding Window Maximum** – LC 239 *(Amazon, Google, Meta)*
3. **Median of Two Sorted Arrays** – LC 4 *(Uber, Meta)*
4. **Minimum Window Substring** – LC 76 *(classic sliding window hard)*
5. **Subarrays with K Different Integers** – LC 992 *(Google, Uber)*
6. **Longest Substring with At Most K Distinct Characters** – LC 340
7. **Shortest Subarray with Sum at Least K** – LC 862 *(Deque + window hybrid)*

---

### 🧩 Mental Framework (Decision Tree Before an Interview)

* **Sorted array / pair-sum / water problem?** → **Opposite Ends**.
* **Subarray/substring optimization?** → **Sliding Window**.
* **Linked list / cycle detection / stream?** → **Fast & Slow**.
* **Can I remove one nested loop by moving a second pointer?** → Yes → Two Pointers.

