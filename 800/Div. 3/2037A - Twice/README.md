# A. Twice

| Field | Value |
|---|---|
| **Contest** | [2037](https://codeforces.com/contest/2037) |
| **Problem** | [2037A — Twice](https://codeforces.com/contest/2037/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

*Kinich wakes up to the start of a new day. He turns on his phone, checks his mailbox, and finds a mysterious present. He decides to unbox the present.*

Kinich unboxes an array `a` with `n` integers. Initially, Kinich's score is `0`. He will perform the following operation any number of times:

 - Select two indices `i` and `j` `(1 ≤ i < j ≤ n)` such that neither `i` nor `j` has been chosen in any previous operation and `a_i = a_j`. Then, add `1` to his score.

Output the maximum score Kinich can achieve after performing the aforementioned operation any number of times.

## Input

The first line contains an integer `t` (`1 ≤ t ≤ 500`) — the number of test cases.

The first line of each test case contains an integer `n` (`1 ≤ n ≤ 20`) — the length of `a`.

The following line of each test case contains `n` space-separated integers `a_1, a_2, …, a_n` (`1 ≤ a_i ≤ n`).

## Output

For each test case, output the maximum score achievable on a new line.

## Examples

**Example:**

```
5
1
1
2
2 2
2
1 2
4
1 2 3 1
6
1 2 3 1 2 3
```

**Output:**

```
0
1
0
1
3

```

## Note

In the first and third testcases, Kinich cannot perform any operations.

In the second testcase, Kinich can perform one operation with `i=1` and `j=2`.

In the fourth testcase, Kinich can perform one operation with `i=1` and `j=4`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2037/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
