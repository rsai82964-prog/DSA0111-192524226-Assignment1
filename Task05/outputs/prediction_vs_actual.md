# Task 5 — Prediction versus execution

Prediction was recorded in `prediction.txt` before execution.

| Line | Predicted | Actual | Explanation |
|---|---|---|---|
| 1 | `11 16` | `11 16` | `*` has higher precedence than `+`; parentheses force `(x+y)` first. |
| 2 | `9 6 5` | `9 6 4` | Prediction error: `x++` contributes old x=5 then increments x to 6. `++y` increments y from 3 to 4 and contributes 4. Thus z=9, x=6, y=4. |
| 3 | `6 4` | `6 4` | Conditional operator selects x=6; `%` is evaluated before `*`, so (6%4)*2=4. |
| 4 | `3 1 -3 -1` | `3 1 -3 -1` | Integer division truncates toward zero; remainder has the sign of the dividend. |
| 5 | `18` | `18` | Loop adds 0+3+6+9. |

The discrepancy is a prediction mistake, not a C++ execution anomaly.
