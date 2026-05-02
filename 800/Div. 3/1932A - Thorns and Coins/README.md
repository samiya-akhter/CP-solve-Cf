# A. Thorns and Coins

| Field | Value |
|---|---|
| **Contest** | [1932](https://codeforces.com/contest/1932) |
| **Problem** | [1932A — Thorns and Coins](https://codeforces.com/contest/1932/problem/A) |
| **Rating** | 800 |
| **Tags** | dp, greedy, implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 512 megabytes |

---

During your journey through computer universes, you stumbled upon a very interesting world. It is a path with `n` consecutive cells, each of which can either be empty, contain thorns, or a coin. In one move, you can move one or two cells along the path, provided that the destination cell does not contain thorns (and belongs to the path). If you move to the cell with a coin, you pick it up.

 ![](https://espresso.codeforces.com/94c827d7bc11f57a36105c602401b8e32d35e22c.png)   Here, green arrows correspond to legal moves, and the red arrow corresponds to an illegal move. You want to collect as many coins as possible. Find the maximum number of coins you can collect in the discovered world if you start in the leftmost cell of the path.

## Input

The first line of input contains a single integer `t` (`1 ≤ t ≤ 1000`) — the number of test cases. Then the descriptions of the test cases follow.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 50`) — the length of the path.

The second line of each test case contains a string of `n` characters, the description of the path. The character `'.'` denotes an empty cell, `'@'` denotes a cell with a coin, and `'*'` denotes a cell with thorns. It is guaranteed that the first cell is empty.

## Output

For each test case, output a single integer, the maximum number of coins you can collect.

## Examples

**Example:**

```
3
10
.@@*@.**@@
5
.@@@@
15
.@@..@***..@@@*
```

**Output:**

```
3
4
3

```

## Note

The picture for the first example is in the problem statement.

Here is the picture for the second example:

 ![](https://espresso.codeforces.com/34179d1a8abef16d22489436bcc7cdd85c03ad44.png) And here is the picture for the third example:

 ![](https://espresso.codeforces.com/32c460a1046acdc56b58d9c16d48f3d3208253fd.png)

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1932/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
