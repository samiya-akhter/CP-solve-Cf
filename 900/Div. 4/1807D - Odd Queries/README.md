# D. Odd Queries

| Field | Value |
|---|---|
| **Contest** | [1807](https://codeforces.com/contest/1807) |
| **Problem** | [1807D — Odd Queries](https://codeforces.com/contest/1807/problem/D) |
| **Rating** | 900 |
| **Tags** | data structures, implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 187 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

You have an array `a_1, a_2, …, a_n`. Answer `q` queries of the following form: 

 - If we change all elements in the range `a_l, a_l+1, …, a_r` of the array to `k`, will the sum of the entire array be odd?

 Note that queries are **independent** and do not affect future queries.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10^4`). The description of the test cases follows.

The first line of each test case consists of `2` integers `n` and `q` (`1 ≤ n ≤ 2 · 10^5`; `1 ≤ q ≤ 2 · 10^5`) — the length of the array and the number of queries.

The second line of each test case consists of `n` integers `a_i` (`1 ≤ a_i ≤ 10^9`) — the array `a`.

The next `q` lines of each test case consists of `3` integers `l,r,k` (`1 ≤ l ≤ r ≤ n`; `1 ≤ k ≤ 10^9`) — the queries.

It is guaranteed that the sum of `n` over all test cases doesn't exceed `2 · 10^5`, and the sum of `q` doesn't exceed `2 · 10^5`.

## Output

For each query, output "`YES`" if the sum of the entire array becomes odd, and "`NO`" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be recognized as positive responses.

## Examples

**Example:**

```
2
5 5
2 2 1 3 2
2 3 3
2 3 4
1 5 5
1 4 9
2 4 3
10 5
1 1 1 1 1 1 1 1 1 1
3 8 13
2 5 10
3 8 10
1 10 2
1 9 100
```

**Output:**

```
YES
YES
YES
NO
YES
NO
NO
NO
NO
YES

```

## Note

For the first test case: 

 - If the elements in the range `(2, 3)` would get set to `3` the array would become `{2, 3, 3, 3, 2}`, the sum would be `2+3+3+3+2 = 13` which is odd, so the answer is "`YES`".
- If the elements in the range `(2, 3)` would get set to `4` the array would become `{2, 4, 4, 3, 2}`, the sum would be `2+4+4+3+2 = 15` which is odd, so the answer is "`YES`".
- If the elements in the range `(1, 5)` would get set to `5` the array would become `{5, 5, 5, 5, 5}`, the sum would be `5+5+5+5+5 = 25` which is odd, so the answer is "`YES`".
- If the elements in the range `(1, 4)` would get set to `9` the array would become `{9, 9, 9, 9, 2}`, the sum would be `9+9+9+9+2 = 38` which is even, so the answer is "`NO`".
- If the elements in the range `(2, 4)` would get set to `3` the array would become `{2, 3, 3, 3, 2}`, the sum would be `2+3+3+3+2 = 13` which is odd, so the answer is "`YES`".

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1807/problem/D)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
