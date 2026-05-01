# A. Dr. TC

| Field | Value |
|---|---|
| **Contest** | [2106](https://codeforces.com/contest/2106) |
| **Problem** | [2106A — Dr. TC](https://codeforces.com/contest/2106/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

In order to test his patients' intelligence, Dr. TC created the following test.

First, he creates a binary string`^∗` `s` having `n` characters. Then, he creates `n` binary strings `a_1, a_2, …, a_n`. It is known that `a_i` is created by first copying `s`, then flipping the `i`'th character (`1` becomes `0` and vice versa). After creating all `n` strings, he arranges them into a grid where the `i`'th row is `a_i`. 

For example, 

 - If `s = 101`, `a = [001, 111, 100]`.
- If `s = 0000`, `a = [1000, 0100, 0010, 0001]`.

The patient needs to count the number of `1`s written on the board in less than a second. Can you pass the test?

`^∗`A binary string is a string that only consists of characters `1` and `0`.

## Input

The first line of the input consists of a single integer `t` (`1 ≤ t ≤ 1000`) — the number of test cases.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 10`) — the length of the binary string `s`.

The second line of each test case contains a single binary string `s` of size `n`.

## Output

For each test case, output a single integer, the number of `1`s on the board.

## Examples

**Example:**

```
5
3
101
1
1
5
00000
2
11
3
010
```

**Output:**

```
5
0
5
2
4

```

## Note

The first example is explained in the statement.

For the second example, the only string written on the board will be the string `0`; therefore, the answer is `0`.

In the third example, the following strings will be written on the board: `[10000, 01000, 00100, 00010, 00001]`; so there are five `1`s written on the board.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2106/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
