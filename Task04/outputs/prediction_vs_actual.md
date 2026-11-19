# Task 4 — Prediction versus execution

Prediction was recorded in `prediction.txt` before the program was executed.

| Line | Predicted | Actual | Explanation |
|---|---|---|---|
| 1 | `2 3.5` | `3 3.5` | Prediction error: `a / b` is integer division because both operands are `int`; 7/2 truncates to 3, then converts to `double` for assignment. The explicit cast in the second expression gives 3.5. |
| 2 | `C 68` | `C 68` | `'A' + 2` uses integral promotion and results in character C. Printing `ch + 1` promotes the character to int (67+1). |
| 3 | `1 true` | `1 true` | Nonzero integer 5 converts to `bool true`. Default bool formatting is 1; `boolalpha` prints `true`. |
| 4 | `s >= u` | `s >= u` | In the comparison, signed `-1` is converted to unsigned; its unsigned value is very large, so it is not less than 1. |

The discrepancy is a human prediction mistake, not a compiler/runtime difference.
