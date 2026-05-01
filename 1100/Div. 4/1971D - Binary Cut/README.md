# D. Binary Cut

| Field | Value |
|---|---|
| **Contest** | [1971](https://codeforces.com/contest/1971) |
| **Problem** | [1971D — Binary Cut](https://codeforces.com/contest/1971/problem/D) |
| **Rating** | 1100 |
| **Tags** | dp, greedy, implementation, sortings, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

You are given a binary string`^dagger`. Please find the minimum number of pieces you need to cut it into, so that the resulting pieces can be rearranged into a sorted binary string.

 ![](https://espresso.codeforces.com/d5649738d6458ef48c0f2a5c9984ece694ec3277.png) Note that: 

 - each character must lie in exactly one of the pieces;
- the pieces must be contiguous substrings of the original string;
- you must use all the pieces in the rearrangement.

`^dagger` A *binary string* is a string consisting of characters `0` and `1`. A *sorted binary string* is a binary string such that all characters `0` come before all characters `1`.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 500`) — the number of test cases.

The only line of each test case contains a single string `s` (`1 ≤ |s| ≤ 500`) consisting of characters `0` and `1`, where `|s|` denotes the length of the string `s`.

## Output

For each test case, output a single integer — the minimum number of pieces needed to be able to rearrange the string into a sorted binary string.

## Examples

**Example:**

```
6
11010
00000000
1
10
0001111
0110
```

**Output:**

```
3
1
1
2
1
2

```

## Note

The first test case is pictured in the statement. It can be proven that you can't use fewer than `3` pieces.

In the second and third test cases, the binary string is already sorted, so only `1` piece is needed.

In the fourth test case, you need to make a single cut between the two characters and rearrange them to make the string `01`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1971/problem/D)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
