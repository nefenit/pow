# pow

## Formal specification
Power is a function x<sup>n</sup>:&#8477;&#10799;&#8469;<sub>0</sub>&map;&#8477; which for an input pair of (x, n) outputs y equal to n products of x or 1 if n = 0

### Input
X: &#8477;&#10799;&#8469;<sub>0</sub>

### Output
Y: &#8477;

## Versions

| File    | Solution  | Algorithmic Paradigm | Time Complexity | Space Complexity | Comments  |
|:--------|:----------|:---------------------|:----------------|:-----------------|:----------|
| powi.c  | Iterative | Naive                | O(n)            | O(1)             |           |
| powi2.c | Iterative | Divide & Conquer     | O(log n)        | O(1)             |           |
| powr.c  | Recursive | Naive                | O(n)            | O(1)             |           |
| powr2.c | Recursive | Divide & Conquer     | O(n)            | O(1)             |           |
| powr3.c | Recursive | Divide & Conquer     | O(log n)        | O(1)             | Optimized |
