# A. Sieve of Erato67henes

| Field | Value |
|---|---|
| **Contest** | [2195](https://codeforces.com/contest/2195) |
| **Problem** | [2195A — Sieve of Erato67henes](https://codeforces.com/contest/2195/problem/A) |
| **Rating** | 800 |
| **Tags** | math, number theory |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given `n` **positive** integers `a_1,a_2,…,a_n`.

Please determine if it is possible to select any number of elements in `a`, so that their product is `67`.

Note that you may not select zero elements, as the product of zero elements is not defined in this problem.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10^4`). The description of the test cases follows. 

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 5`).

The second line of each test case contains `n` positive integers `a_1,a_2,…,a_n` (`1 ≤ a_i ≤ 67`).

## Output

If it is possible to select elements so that their product is `67`, output "`YES`" on one line. Otherwise, output "`NO`" on one line.

You can output the answer in any case. For example, the strings "`yEs`", "`yes`", and "`Yes`" will also be recognized as positive responses.

## Examples

**Example:**

```
2
5
1 7 6 7 67
5
1 3 5 7 8
```

**Output:**

```
YES
NO
```

## Note

In the first test case, you can select `a_1` and `a_5` to get `a_1· a_5 = 1 · 67 = 67`.

In the second test case, it is impossible to select any number of elements so that their product is `67`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2195/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
