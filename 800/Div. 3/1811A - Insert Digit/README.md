# A. Insert Digit

| Field | Value |
|---|---|
| **Contest** | [1811](https://codeforces.com/contest/1811) |
| **Problem** | [1811A — Insert Digit](https://codeforces.com/contest/1811/problem/A) |
| **Rating** | 800 |
| **Tags** | greedy, math, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

You have a **positive** number of length `n` and one additional digit.

You can insert this digit anywhere in the number, including at the beginning or at the end.

Your task is to make the result as large as possible.

For example, you have the number `76543`, and the additional digit is `4`. Then the maximum number you can get is `765443`, and it can be obtained in two ways — by inserting a digit after the `3`th or after the `4`th digit of the number.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 10^4`) — the number of test cases.

The descriptions of the test cases follow.

The first line of the description of each test case contains two integers `n` and `d` (`1 ≤ n ≤ 2 · 10^5`; `0 ≤ d ≤ 9`) — the length of the number and an additional digit, respectively.

The second line of the description of each test case contains a string consisting of `n` digits — the number that you have initially. It is guaranteed that the number does not contain leading zeros.

It is guaranteed that the sum of `n` for all test cases does not exceed `2 · 10^5`.

## Output

For each test case, output a string consisting of `n + 1` digits — the maximum possible number that can be obtained.

## Examples

**Example:**

```
11
5 4
76543
1 0
1
2 5
44
3 6
666
5 6
13579
5 8
97531
19 4
9876543210123456789
5 7
73737
8 1
20000000
7 0
7058959
12 1
828127127732
```

**Output:**

```
765443
10
544
6666
613579
987531
98765443210123456789
773737
210000000
70589590
8281271277321

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1811/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
