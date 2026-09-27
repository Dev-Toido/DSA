# DSA Library — A Self-Made Project

> A from-scratch Java implementation of Data Structures and Algorithms, built to understand how they work internally rather than simply using ready-made implementations.

## About

This repository is my personal **DSA learning laboratory**.

The goal is not just to collect solutions to coding problems. The goal is to build core data structures and algorithms from the ground up, organize them into a clean library, test them, analyze their complexity, and continuously improve the implementation.

The project is intentionally built as a **self-made library** so that the focus stays on understanding:

- how data structures store and manage data
- how algorithms process that data
- why an implementation has a particular time and space complexity
- how different implementations compare
- how to organize a growing software project
- how to write reusable, testable code

---

## Goals

### Core DSA
Implement major data structures and algorithms from scratch.

### Strong Fundamentals
Understand the logic behind every implementation instead of treating DSA as a collection of patterns to memorize.

### Clean Architecture
Maintain a predictable package and file structure with clear responsibilities and controlled dependencies.

### Testing
Write tests for normal cases, edge cases, invalid inputs, and boundary conditions.

### Complexity Analysis
Document the expected **time complexity** and **space complexity** of important operations.

### Continuous Practice
Use the library as a base for solving DSA problems and experimenting with alternative approaches.

---

## Planned Structure

The project will grow gradually. A planned high-level structure is:

```text
DSA-Library-A_self_made_project/
│
├── src/
│   ├── main/
│   │   └── java/
│   │       └── ...
│   │
│   └── test/
│       └── java/
│           └── ...
│
├── README.md
└── ...
```

The Java packages will be organized by responsibility, for example:

```text
com.<project>.dsa
│
├── arrays
├── linkedlist
├── stack
├── queue
├── deque
├── hashing
├── heap
├── tree
├── graph
├── sorting
├── searching
├── recursion
├── backtracking
├── greedy
├── dynamicprogramming
├── string
├── math
└── utils
```

The exact package structure may evolve as the library grows.

---

## Development Philosophy

This project follows a few simple rules:

1. **Understand before implementing.**
2. **Implement core structures instead of hiding them behind library classes.**
3. **Prefer readable code over clever code.**
4. **Analyze complexity instead of guessing it.**
5. **Test edge cases deliberately.**
6. **Keep modules focused and dependencies explicit.**
7. **Refactor when a better design becomes clear.**
8. **Document what was learned, not just what was written.**

For example, while learning a stack, the objective is not merely to make `push()` and `pop()` work. The objective is to understand the underlying representation, invariants, failure cases, complexity, and design trade-offs.

---

## Topics

The library is intended to cover the following areas progressively.

### Data Structures

- Arrays / Dynamic Arrays
- Singly Linked Lists
- Doubly Linked Lists
- Circular Linked Lists
- Stacks
- Queues
- Deques
- Hash Tables / Hash Maps
- Heaps / Priority Queues
- Binary Trees
- Binary Search Trees
- AVL Trees
- Tries
- Graphs
- Disjoint Set Union (Union-Find)
- Segment Trees
- Fenwick Trees
- and other advanced structures

### Algorithms

- Linear Search
- Binary Search
- Sorting Algorithms
- Recursion
- Backtracking
- Two Pointers
- Sliding Window
- Divide and Conquer
- Greedy Algorithms
- Graph Traversal
- Shortest Path Algorithms
- Minimum Spanning Tree
- Topological Sorting
- Dynamic Programming
- String Algorithms
- Mathematical / Number-Theoretic Algorithms
- and more

---

## Complexity

Where appropriate, implementations will document their expected complexity.

Example:

```text
Dynamic Array

Access      : O(1)
Search      : O(n)
Append      : O(1) amortized
Insert      : O(n)
Delete      : O(n)
Space       : O(n)
```

The purpose is to connect the implementation directly with its theoretical analysis.

---

## Testing

Testing is part of the learning process.

Tests will cover:

- normal inputs
- empty structures
- single-element cases
- duplicate values
- boundary conditions
- invalid operations
- large inputs where useful
- regression cases for previously discovered bugs

The test suite is intended to become more comprehensive as the project grows.

---

## Learning Workflow

For each new topic, the intended workflow is:

```text
Concept
   ↓
Understand the operations
   ↓
Design the data representation
   ↓
Implement from scratch
   ↓
Analyze time & space complexity
   ↓
Write tests
   ↓
Find edge cases
   ↓
Refactor
   ↓
Use it to solve problems
   ↓
Document lessons learned
```

This repository is therefore both a **library** and a **long-term learning record**.

---

## Roadmap

### Phase 1 — Foundations
- Arrays
- Dynamic Arrays
- Linked Lists
- Stacks
- Queues
- Recursion
- Searching
- Basic Sorting

### Phase 2 — Core Structures
- Hash Tables
- Heaps
- Binary Trees
- Binary Search Trees
- Priority Queues
- Advanced Sorting

### Phase 3 — Graphs & Advanced Trees
- Graph representations
- BFS / DFS
- Shortest paths
- Minimum spanning trees
- Topological sorting
- AVL Trees
- Tries
- Disjoint Set Union

### Phase 4 — Advanced Algorithms
- Greedy
- Divide and Conquer
- Backtracking
- Dynamic Programming
- String algorithms
- Range-query structures

### Phase 5 — Engineering
- Stronger test coverage
- Benchmarks
- Better documentation
- API cleanup
- Performance comparisons
- Package/dependency refinement

---

## Project Status

**Status:** Active learning project 🚧

The library is being built incrementally. Structure, APIs, implementations, tests, and documentation will evolve as new topics are studied.

---

## Why This Repository Exists

Most of the value of DSA comes from understanding the reasoning behind the implementation.

This project is an attempt to turn that learning process into something tangible:

> **Learn → Build → Test → Analyze → Improve → Repeat**

The end goal is not simply to have a large collection of code. It is to develop a strong understanding of **data structures, algorithms, problem-solving, and software design** through implementation.

---

## Author

**Vivek Garai**

B.Tech CSE (AI & ML)

This repository is maintained as a personal learning and practice project.
