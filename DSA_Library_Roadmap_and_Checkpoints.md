# DSA Library — Roadmap & Checkpoints

A practical roadmap for building the DSA Library from scratch while using the project itself as the main learning system.

---

# 0. Project Rules

Before starting, follow these rules throughout the project.

- Learn the concept before writing the implementation.
- Implement the core structure yourself instead of using an equivalent Java collection for the main logic.
- Every major implementation must have tests.
- Record time and space complexity.
- Test edge cases intentionally.
- Commit after each meaningful checkpoint.
- Do not move to the next phase only because the code compiles.
- A phase is complete only when its checkpoint criteria are satisfied.

Recommended cycle:

```text
Learn
  ↓
Design
  ↓
Implement
  ↓
Test
  ↓
Analyze
  ↓
Solve Problems
  ↓
Refactor
  ↓
Checkpoint
```

---

# 1. Master Project Setup

## Tasks

- [ ] Create the GitHub repository.
- [ ] Decide the Java version.
- [ ] Set up the project structure.
- [ ] Set up `src/main` and `src/test`.
- [ ] Establish package naming conventions.
- [ ] Add `.gitignore`.
- [ ] Create the initial README.
- [ ] Decide how tests will be organized.
- [ ] Create a basic build configuration.
- [ ] Create the first example class.
- [ ] Create the first test.

## Checkpoint 1 — Environment Ready

You should be able to answer:

- Where does production code go?
- Where do tests go?
- What package contains each data structure?
- How is a class imported?
- How is a test executed?
- How is a change committed?

### Exit Criteria

- [ ] Project builds successfully.
- [ ] Test suite runs successfully.
- [ ] Package structure is documented.
- [ ] First Git commit is complete.

---

# 2. Java Fundamentals Needed for DSA

Do not spend months relearning Java. Learn only what the project requires.

## Topics

- [ ] Classes and objects
- [ ] Constructors
- [ ] Access modifiers
- [ ] `static`
- [ ] `final`
- [ ] Interfaces
- [ ] Abstract classes
- [ ] Generics
- [ ] Exceptions
- [ ] Comparable / Comparator
- [ ] Iterators
- [ ] Arrays
- [ ] References
- [ ] Basic memory model
- [ ] Packages and imports
- [ ] Maven/Gradle basics
- [ ] Unit testing

## Checkpoint 2 — Java Ready

### You can:

- [ ] Write a generic class.
- [ ] Design an interface.
- [ ] Separate implementation from API.
- [ ] Create and import classes across packages.
- [ ] Write basic unit tests.
- [ ] Explain why a class or method should be `private`, `public`, `static`, etc.

---

# 3. Complexity & Problem-Solving Foundation

Before building many structures, develop the ability to analyze them.

## Learn

- [ ] Big-O
- [ ] Big-Theta
- [ ] Big-Omega
- [ ] Best / average / worst case
- [ ] Auxiliary space
- [ ] Amortized analysis
- [ ] Recurrence basics
- [ ] Recursion-tree intuition

## Practice

Analyze:

- [ ] Array access
- [ ] Array search
- [ ] Nested loops
- [ ] Binary search
- [ ] Recursive factorial
- [ ] Merge sort
- [ ] Dynamic-array append

## Checkpoint 3 — Complexity Gate

Given an unfamiliar piece of code, you should be able to:

- [ ] Estimate time complexity.
- [ ] Estimate auxiliary space.
- [ ] Identify the dominant operation.
- [ ] Explain why the complexity occurs.

Do not proceed until complexity analysis feels natural.

---

# 4. Arrays & Dynamic Arrays

## Learn

- [ ] Static arrays
- [ ] Dynamic arrays
- [ ] Contiguous memory
- [ ] Capacity vs size
- [ ] Resizing
- [ ] Amortized insertion
- [ ] Copying elements

## Implement

### `DynamicArray<T>`

- [ ] `size()`
- [ ] `capacity()`
- [ ] `isEmpty()`
- [ ] `get(index)`
- [ ] `set(index, value)`
- [ ] `add(value)`
- [ ] `add(index, value)`
- [ ] `remove(index)`
- [ ] `clear()`
- [ ] `contains(value)`
- [ ] `indexOf(value)`

## Tests

- [ ] Empty array
- [ ] One element
- [ ] Many elements
- [ ] Automatic resizing
- [ ] Insert at beginning
- [ ] Insert at middle
- [ ] Insert at end
- [ ] Remove first/middle/last
- [ ] Invalid indexes
- [ ] Duplicate values

## Checkpoint 4 — Dynamic Array

Required understanding:

- [ ] Why random access is O(1)
- [ ] Why insertion can be O(n)
- [ ] Why append is amortized O(1)
- [ ] Why capacity exists
- [ ] What happens during resizing

---

# 5. Linked Lists

## Learn

- [ ] Nodes
- [ ] References
- [ ] Singly linked lists
- [ ] Doubly linked lists
- [ ] Circular lists
- [ ] Head/tail management

## Implement

### `SinglyLinkedList<T>`

- [ ] `addFirst()`
- [ ] `addLast()`
- [ ] `add(index, value)`
- [ ] `removeFirst()`
- [ ] `removeLast()`
- [ ] `remove(index)`
- [ ] `get(index)`
- [ ] `contains(value)`
- [ ] `reverse()`

### `DoublyLinkedList<T>`

- [ ] Forward links
- [ ] Backward links
- [ ] Efficient end operations

## Practice Algorithms

- [ ] Reverse a linked list
- [ ] Find middle node
- [ ] Detect cycle
- [ ] Find cycle start
- [ ] Merge two sorted lists
- [ ] Remove duplicates

## Checkpoint 5 — Linked List

You should be able to draw the node/reference changes for every major operation before coding it.

---

# 6. Stacks, Queues & Deques

## Implement

- [ ] `Stack<T>`
- [ ] `Queue<T>`
- [ ] `Deque<T>`

Use your own underlying structures where appropriate.

## Understand

- [ ] LIFO
- [ ] FIFO
- [ ] Circular buffering
- [ ] Overflow/underflow
- [ ] Trade-offs between array and linked implementations

## Practice

- [ ] Balanced parentheses
- [ ] Expression evaluation
- [ ] Min stack
- [ ] Queue using stacks
- [ ] Stack using queues
- [ ] Sliding-window maximum

## Checkpoint 6

You can choose an appropriate stack/queue implementation for a problem and explain the trade-off.

---

# 7. Recursion & Searching

## Learn

- [ ] Base cases
- [ ] Recursive state
- [ ] Call stack
- [ ] Divide and conquer
- [ ] Binary search

## Implement

- [ ] Linear search
- [ ] Binary search
- [ ] Recursive binary search
- [ ] Lower bound
- [ ] Upper bound
- [ ] First/last occurrence

## Checkpoint 7

For a recursive solution, you can explain:

```text
State
Base Case
Recursive Transition
Progress Toward Base Case
Complexity
```

---

# 8. Sorting

Implement each algorithm yourself.

## Basic

- [ ] Bubble sort
- [ ] Selection sort
- [ ] Insertion sort

## Intermediate

- [ ] Merge sort
- [ ] Quick sort
- [ ] Heap sort

## Later

- [ ] Counting sort
- [ ] Radix sort
- [ ] Bucket sort

## Benchmark

Compare algorithms on:

- [ ] Small random input
- [ ] Large random input
- [ ] Already sorted input
- [ ] Reverse-sorted input
- [ ] Many duplicate values

## Checkpoint 8 — Sorting Gate

You should be able to explain:

- [ ] Stability
- [ ] In-place vs out-of-place
- [ ] Worst-case complexity
- [ ] Average-case complexity
- [ ] When each algorithm is useful

---

# 9. Hashing

## Learn

- [ ] Hash functions
- [ ] Collisions
- [ ] Load factor
- [ ] Resizing
- [ ] Separate chaining
- [ ] Open addressing
- [ ] Linear probing
- [ ] Quadratic probing

## Implement

### `HashMap<K,V>`

- [ ] `put()`
- [ ] `get()`
- [ ] `remove()`
- [ ] `containsKey()`
- [ ] `size()`
- [ ] Resize
- [ ] Collision handling

## Checkpoint 9 — Hash Table

You should be able to explain why a hash table is usually O(1) on average but not guaranteed O(1).

---

# 10. Trees

## Binary Tree

- [ ] Node representation
- [ ] Preorder
- [ ] Inorder
- [ ] Postorder
- [ ] Level-order

## Binary Search Tree

- [ ] Search
- [ ] Insert
- [ ] Delete
- [ ] Minimum
- [ ] Maximum
- [ ] Successor
- [ ] Predecessor

## Learn

- [ ] Height
- [ ] Depth
- [ ] Balanced vs unbalanced trees
- [ ] Tree invariants

## Checkpoint 10

You should be able to trace insertions and deletions by hand before implementing them.

---

# 11. Heaps & Priority Queues

## Learn

- [ ] Min heap
- [ ] Max heap
- [ ] Heap property
- [ ] Heapify
- [ ] Bottom-up construction

## Implement

- [ ] `Heap<T>`
- [ ] `PriorityQueue<T>`

## Practice

- [ ] K-th largest/smallest
- [ ] Top K elements
- [ ] Merge K sorted lists
- [ ] Running median

## Checkpoint 11

You can explain why:

```text
peek   = O(1)
insert = O(log n)
remove = O(log n)
build  = O(n)
```

---

# 12. Balanced Trees & Tries

## AVL Tree

- [ ] Balance factor
- [ ] Left rotation
- [ ] Right rotation
- [ ] Left-right rotation
- [ ] Right-left rotation
- [ ] Insertion
- [ ] Deletion

## Trie

- [ ] Insert word
- [ ] Search word
- [ ] Prefix search
- [ ] Delete word

## Checkpoint 12

You can identify an imbalance and choose the correct tree rotation without relying on trial and error.

---

# 13. Graphs

## Representations

- [ ] Adjacency matrix
- [ ] Adjacency list
- [ ] Edge list

## Traversals

- [ ] BFS
- [ ] DFS
- [ ] Recursive DFS
- [ ] Iterative DFS

## Algorithms

- [ ] Connected components
- [ ] Cycle detection
- [ ] Topological sort
- [ ] Bipartite checking
- [ ] Dijkstra
- [ ] Bellman-Ford
- [ ] Floyd-Warshall
- [ ] Prim
- [ ] Kruskal
- [ ] Disjoint Set Union

## Checkpoint 13 — Graph Gate

Given a graph problem, you should first identify:

```text
Graph type
Directed / Undirected
Weighted / Unweighted
Positive / Negative weights
Needed output
Traversal / Shortest path / Connectivity / Ordering / MST
```

Then select the algorithm.

---

# 14. Algorithmic Paradigms

## Divide and Conquer

- [ ] Merge sort
- [ ] Quick sort
- [ ] Binary search
- [ ] Recurrence reasoning

## Greedy

- [ ] Activity selection
- [ ] Interval scheduling
- [ ] Fractional knapsack
- [ ] MST algorithms

## Backtracking

- [ ] Subsets
- [ ] Permutations
- [ ] N-Queens
- [ ] Combination problems

## Dynamic Programming

Start with:

- [ ] Recursion
- [ ] Memoization
- [ ] Tabulation
- [ ] State definition
- [ ] Transition definition
- [ ] Base cases
- [ ] Space optimization

Then practice:

- [ ] 0/1 Knapsack
- [ ] Coin Change
- [ ] LIS
- [ ] LCS
- [ ] Edit Distance
- [ ] Grid DP
- [ ] Interval DP

## Checkpoint 14

For a new problem, you can explain why it fits a particular paradigm before writing code.

---

# 15. Advanced Data Structures

Build these only after the previous phases are comfortable.

- [ ] Disjoint Set Union
- [ ] Fenwick Tree
- [ ] Segment Tree
- [ ] Sparse Table
- [ ] Advanced Trie variants
- [ ] Ordered structures
- [ ] String-search structures

## Checkpoint 15

You should be able to identify the problem each structure solves and why a simpler structure is insufficient.

---

# 16. Library Engineering Phase

Now improve the project as software, not only as DSA practice.

## API Design

- [ ] Review naming consistency.
- [ ] Review method signatures.
- [ ] Review visibility modifiers.
- [ ] Separate public API from implementation details.
- [ ] Remove unnecessary duplication.

## Generics

- [ ] Generic data structures
- [ ] Generic algorithms
- [ ] Comparator-based ordering

## Testing

- [ ] Improve unit-test coverage.
- [ ] Add edge-case tests.
- [ ] Add regression tests.
- [ ] Add randomized tests where useful.

## Documentation

Every major structure should document:

```text
Purpose
Representation
Supported operations
Complexity
Invariants
Edge cases
Usage example
Known limitations
```

## Benchmarking

Compare alternative implementations.

Example:

```text
Array-backed stack
vs
Linked-list stack
```

Measure:

- [ ] Runtime
- [ ] Memory where practical
- [ ] Scaling with input size

## Checkpoint 16 — Library Quality Gate

The code should now look like a reusable library rather than a collection of classroom exercises.

---

# 17. Problem-Solving Integration

The library should now become a tool for solving problems.

For each major topic:

- [ ] Solve easy problems.
- [ ] Solve medium problems.
- [ ] Solve selected hard problems.
- [ ] Reimplement the required structure when useful.
- [ ] Record patterns discovered.

Recommended problem categories:

```text
Arrays
Strings
Linked Lists
Stack / Queue
Binary Search
Trees
Heap
Hashing
Graphs
Greedy
Backtracking
Dynamic Programming
```

## Problem Checkpoint

Before looking at an editorial/solution:

1. [ ] Understand the problem.
2. [ ] Identify constraints.
3. [ ] Derive a brute-force approach.
4. [ ] Analyze its complexity.
5. [ ] Find the bottleneck.
6. [ ] Improve the approach.
7. [ ] Implement.
8. [ ] Test.
9. [ ] Compare with a known solution afterward.

---

# 18. Mastery Checkpoints

These are more important than simply finishing every class.

## Checkpoint A — Build From Memory

Choose a structure you have not touched for several days.

Implement it without looking at your previous code.

- [ ] Dynamic Array
- [ ] Linked List
- [ ] Stack
- [ ] Queue
- [ ] Hash Map
- [ ] BST
- [ ] Heap
- [ ] Graph

If you cannot reconstruct it, revisit the concept.

---

## Checkpoint B — Whiteboard / Paper

Without an IDE:

- [ ] Draw a linked-list insertion.
- [ ] Trace BST deletion.
- [ ] Perform AVL rotations.
- [ ] Trace heapify.
- [ ] Execute BFS/DFS.
- [ ] Trace Dijkstra.
- [ ] Build a DP state table.

---

## Checkpoint C — Complexity

For a random implementation, identify:

```text
Time Complexity
Space Complexity
Bottleneck
Invariant
Possible Optimization
```

---

## Checkpoint D — Design

Given a new problem:

- [ ] Choose the data structure.
- [ ] Explain why.
- [ ] Define the API.
- [ ] Estimate complexity.
- [ ] Identify edge cases.
- [ ] Implement without copying an existing solution.

---

# 19. Git Checkpoints

Use Git as part of the learning process.

Suggested commit pattern:

```text
feat: add dynamic array
test: add dynamic array edge cases
docs: document dynamic array complexity
refactor: improve dynamic array resizing
feat: add singly linked list
```

Create a checkpoint after every major topic:

```text
checkpoint/arrays
checkpoint/linked-list
checkpoint/stacks-queues
checkpoint/sorting
checkpoint/hashing
checkpoint/trees
checkpoint/heaps
checkpoint/graphs
checkpoint/advanced-dsa
```

Avoid committing broken work directly as a completed checkpoint.

---

# 20. Final Project Checkpoint

The project can be considered a mature first version when:

- [ ] Major DSA categories are implemented.
- [ ] Implementations are generic where appropriate.
- [ ] Tests cover normal and edge cases.
- [ ] Complexity is documented.
- [ ] APIs are consistent.
- [ ] Package structure is clean.
- [ ] No unnecessary dependencies exist.
- [ ] README explains the project.
- [ ] Examples exist.
- [ ] Benchmarks exist for selected structures.
- [ ] Git history shows meaningful progression.
- [ ] You can rebuild several structures from memory.

---

# Personal Progress Tracker

Use this section as the main checklist.

## Foundations
- [ ] Project setup
- [ ] Java refresh
- [ ] Complexity analysis

## Linear Structures
- [ ] Dynamic Array
- [ ] Singly Linked List
- [ ] Doubly Linked List
- [ ] Stack
- [ ] Queue
- [ ] Deque

## Searching & Sorting
- [ ] Linear Search
- [ ] Binary Search
- [ ] Bubble Sort
- [ ] Selection Sort
- [ ] Insertion Sort
- [ ] Merge Sort
- [ ] Quick Sort
- [ ] Heap Sort

## Hashing
- [ ] Hash Map
- [ ] Collision handling
- [ ] Resizing

## Trees
- [ ] Binary Tree
- [ ] BST
- [ ] Heap
- [ ] AVL Tree
- [ ] Trie

## Graphs
- [ ] Graph representation
- [ ] BFS
- [ ] DFS
- [ ] Cycle detection
- [ ] Topological Sort
- [ ] Dijkstra
- [ ] Bellman-Ford
- [ ] Prim
- [ ] Kruskal
- [ ] DSU

## Advanced Algorithms
- [ ] Greedy
- [ ] Backtracking
- [ ] Dynamic Programming
- [ ] String Algorithms
- [ ] Range Queries

## Engineering
- [ ] Tests
- [ ] Documentation
- [ ] Benchmarks
- [ ] Refactoring
- [ ] API review
- [ ] Final project cleanup

---

# Final Rule

Do not measure progress only by the number of classes or algorithms completed.

Measure progress by whether you can:

```text
Understand
   ↓
Design
   ↓
Implement
   ↓
Test
   ↓
Analyze
   ↓
Explain
   ↓
Rebuild
```

The real checkpoint is reached when the implementation becomes a consequence of your understanding rather than something you have to memorize.
