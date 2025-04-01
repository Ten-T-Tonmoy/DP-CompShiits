# Advanced Recursion & Backtracking in C++

This repository contains a comprehensive collection of recursion and backtracking algorithms implemented in C++. It serves as both a learning resource and a reference for advanced problem-solving techniques.

## Introduction

Recursion and backtracking are powerful algorithmic paradigms used to solve complex problems by breaking them down into smaller subproblems. This repository demonstrates their implementation in C++ with detailed explanations, optimizations, and performance analyses.

## Table of Contents

- [Theoretical Foundations](#theoretical-foundations)
- [Fundamentals](#fundamentals)
- [Classic Problems](#classic-problems)
- [Advanced Techniques](#advanced-techniques)
- [Optimizations](#optimizations)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Theoretical Foundations

### Recursion Theory

- **Mathematical Basis**: Recursive definitions in discrete mathematics and their relation to programming
- **Principle of Mathematical Induction**: How it relates to recursive algorithm correctness
- **Recurrence Relations**: Formulating and solving recurrence equations (e.g., Master Theorem)
- **Recursion Trees**: Visualizing and analyzing recursive calls and their complexity
- **Structural vs. Generative Recursion**: Different paradigms of recursive thinking

### Computational Complexity

- **Time Complexity Analysis**: Analyzing recursive algorithms using recurrence relations
- **Space Complexity**: Stack space requirements and analytical approaches
- **Recursive Overhead**: Understanding the cost of function calls in recursive solutions
- **Amortized Analysis**: Techniques for more accurate complexity estimates of recursive structures

### Backtracking Theory

- **State Space Trees**: Formal representation of the search space
- **Constraint Satisfaction Problems (CSPs)**: Theoretical framework for backtracking
- **Decision Trees**: Modeling backtracking algorithms as traversals through decision trees
- **Pruning Strategies**: Mathematical foundations of branch elimination
- **Backtracking vs. Brute Force**: Theoretical efficiency comparisons

### Recursive Algorithm Design Paradigms

- **Decrease and Conquer**: Reducing problem size by a constant factor
- **Divide and Conquer**: Breaking problems into subproblems of similar structure
- **Transform and Conquer**: Reformulating problems to facilitate recursive solutions
- **Balancing Recursion**: Techniques for ensuring balanced recursive trees

## Fundamentals

### Core Concepts

- **Base Case**: The condition that stops the recursion
- **Recursive Case**: The condition that continues the recursion
- **Call Stack**: How recursive calls are managed in memory
- **State Space**: The set of all possible states in a backtracking problem
- **Pruning**: Techniques to eliminate unpromising branches early

### Implementation Best Practices

- Proper base case definition to prevent stack overflow
- Parameter passing optimization (using references and const)
- Stack management and recursive depth control
- Memoization integration for recursive functions

## Classic Problems

### Pure Recursion

- Factorial and Fibonacci implementations
- Binary search using recursion
- Tower of Hanoi
- Merge sort and quick sort
- Binary tree traversals (preorder, inorder, postorder)

### Backtracking

- N-Queens problem
- Sudoku solver
- Rat in a maze
- Knight's tour
- Hamiltonian path
- Subset sum
- Graph coloring
- Word search

## Advanced Techniques

### Memoization & Dynamic Programming with Recursion

- Top-down DP approach with memoization
- Bottom-up conversion from recursive solutions
- State compression techniques
- Space-optimized implementations

### Divide and Conquer

- Karatsuba multiplication
- Strassen's matrix multiplication
- Closest pair of points
- Convex hull algorithms

### Combinatorial Problems

- Generating all permutations and combinations
- Power set generation
- Generating all binary strings
- Partitioning problems

## Optimizations

### Tail Recursion

- Understanding compiler optimizations
- Manual tail call optimization
- Converting recursive solutions to iterative ones

### Branch Pruning

- Alpha-beta pruning in game trees
- Constraint satisfaction techniques
- Forward checking
- Minimum remaining values heuristic

### Memory Management

- Custom memory allocators for recursive structures
- Stack usage analysis and optimization
- Thread-safe recursive implementations

## Usage

Each algorithm is implemented in its own file with thorough documentation and example usage.

```cpp
// Example: N-Queens Problem
#include "backtracking/nqueens.hpp"

int main() {
    NQueensSolver solver(8); // 8x8 board
    solver.solve();
    solver.printAllSolutions();
    return 0;
}
```

### Build Instructions

```bash
mkdir build && cd build
cmake ..
make
```

### Running Tests

```bash
cd build
make test
```

## Performance Analysis

The repository includes benchmarking tools to analyze:

- Time complexity in practice
- Space complexity and stack usage
- Comparison between recursive and iterative implementations
- Impact of optimization techniques

## Contributing

Contributions are welcome! Please read the [CONTRIBUTING.md](CONTRIBUTING.md) file for details on our code of conduct and the process for submitting pull requests.

1. Fork the repository
2. Create your feature branch
3. Commit your changes
4. Push to the branch
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
