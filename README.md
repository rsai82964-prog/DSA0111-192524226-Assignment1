# DSA01-RegisterNumber-Assignment1

**Student name:** [Enter your full name]  
**Register number:** [Enter your register number]  
**Assignment:** CO1 — Design, Implement and Validate the Fare Logic of a City Metro Smart-Card System  
**Compiler:** GNU g++ 14.2.0 (Debian 14.2.0-19)  
**Language standard:** C++17

> Before submission, replace the placeholders above and rename this folder/repository to `DSA01-YOURREGISTERNUMBER-Assignment1`.

## Build and run

Compile an individual task from the repository root:

```bash
g++ -std=c++17 -Wall -Wextra -Wconversion Task06/src/task06.cpp -o Task06/program
./Task06/program
```

On Windows with MinGW, use the same compile command and run `Task06\\program.exe`. The input/output evidence is in each task's `outputs/` folder. `Task08` is interactive; example input is `9` followed by `100`. Its invalid-input example is also recorded.

## Task map

| Folder | Contents / result |
|---|---|
| `Task01` | Object model: SmartCard, Journey and FareTable demonstration. |
| `Task02` | Named fare constants and scoped zone enumeration. |
| `Task03` | `sizeof`, integer ranges and paise-versus-double demonstration. |
| `Task04` | Implicit conversions; pre-execution prediction and actual comparison. |
| `Task05` | Operator precedence; pre-execution prediction and actual comparison. |
| `Task06` | Completed switch-based fare and minimum-balance program, with pseudocode. |
| `Task07` | Procedural and encapsulated SmartCard alternatives. |
| `Task08` | Checked input and formatted output, including invalid input. |
| `Task09` | Fare validation test table, including boundary hours and unknown zone. |
| `Task10` | Scale totals, `int` overflow analysis and repeated decimal accumulation experiment. |
| `Task11` | Recommended encapsulated design and fare-table implementation. |
| `Task12` | Adapted four-zone, weekend-discount and monthly-pass design. |

## Test and evidence policy

The included outputs were produced by compiling and executing the source files in this repository using the compiler listed above. Terminal-style output images are provided in each task's `outputs/` folder where generated. Prediction records are kept separately from actual output; the two prediction mistakes are explicitly explained in `prediction_vs_actual.md`.

## Git workflow for submission

This local working copy is intended to be pushed to a GitHub repository with the exact required name. Use one commit per task, for example:

```bash
git add Task01 && git commit -m "Complete Task 1 object analysis"
# Repeat for Task02 through Task12
git remote add origin https://github.com/YOUR-USERNAME/DSA01-YOURREGISTERNUMBER-Assignment1.git
git branch -M main
git push -u origin main
```

Create the remote repository on GitHub first, invite the course faculty (if private), and submit the resulting live repository URL and report through Google Classroom. Those external account actions must be completed by the student.
