# A. Primary Task

| Field | Value |
|---|---|
| **Contest** | [2000](https://codeforces.com/contest/2000) |
| **Problem** | [2000A — Primary Task](https://codeforces.com/contest/2000/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation, math, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Dmitry wrote down `t` integers on the board, and that is good. He is sure that he lost an *important* integer `n` among them, and that is bad.

The integer `n` had the form `10^x` (`x ≥ 2`), where the symbol '`^`' denotes exponentiation.. Something went wrong, and Dmitry missed the symbol '`^`' when writing the *important* integer. For example, instead of the integer `10^5`, he would have written `105`, and instead of `10^19`, he would have written `1019`.

Dmitry wants to understand which of the integers on the board could have been the *important* integer and which could not.

## Input

The first line of the input contains one integer `t` (`1 ≤ t ≤ 10^4`) — the number of integers on the board.

The next `t` lines each contain an integer `a` (`1 ≤ a ≤ 10000`) — the next integer from the board.

## Output

For each integer on the board, output "`YES`" if it could have been the *important* integer and "`NO`" otherwise.

You may output each letter in any case (lowercase or uppercase). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be accepted as a positive answer.

## Examples

**Example:**

```
7
100
1010
101
105
2033
1019
1002
```

**Output:**

```
NO
YES
NO
YES
NO
YES
NO

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2000/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
