# cpp_practice
- This repository is going to be full of small projects aimed at bettering my C++ syntax and usage.

## Phase 1 — Fundamentals
- [ ] Types, variables, brace initialization, `auto`
- [ ] Operators, precedence, integer division, overflow
- [ ] Control flow: if/switch/loops, range-based for
- [ ] Functions, overloading, default arguments
- [ ] References vs pointers
- [ ] `const` and basic `constexpr`
- [ ] `std::string`, `std::vector`, `std::array`
- [ ] Scope, lifetime, storage duration (automatic vs static)
- [ ] Namespaces
- [ ] `enum class`, structs
- [ ] Headers vs source files, include guards / `#pragma once`
- [ ] I/O: streams, `std::format`, `std::print`

## Phase 2 — Classes
- [ ] Encapsulation, access specifiers
- [ ] Constructors, member initializer lists, destructors
- [ ] `this`, const member functions, `mutable`
- [ ] Static members
- [ ] Operator overloading
- [ ] `friend`
- [ ] `explicit`, conversion operators
- [ ] Composition vs inheritance

## Phase 3 — Memory & Resources
- [ ] Stack vs heap, `new`/`delete`
- [ ] Leaks, dangling pointers, double free
- [ ] RAII
- [ ] Copy constructor & copy assignment
- [ ] Rule of Three / Five / Zero
- [ ] `std::unique_ptr`
- [ ] `std::shared_ptr`, `std::weak_ptr`, `make_unique`/`make_shared`
- [ ] Move semantics, `std::move`
- [ ] Copy elision, RVO/NRVO

## Phase 4 — Inheritance & Polymorphism
- [ ] Inheritance, `protected`
- [ ] `virtual`, `override`, `final`
- [ ] Abstract classes, pure virtual functions
- [ ] Virtual destructors
- [ ] vtables & dynamic dispatch internals
- [ ] Object slicing
- [ ] Casts: `static_cast`, `dynamic_cast`, `const_cast`, `reinterpret_cast`
- [ ] Multiple inheritance, diamond problem, virtual inheritance

## Phase 5 — Errors, Testing, Debugging
- [ ] `assert`, `static_assert`
- [ ] Exceptions: throw/try/catch, stack unwinding
- [ ] `noexcept`
- [ ] `std::optional`, `std::expected`
- [ ] Catch2: sections, matchers, testing exceptions
- [ ] Debugger: gdb/lldb breakpoints, stepping, watch
- [ ] Undefined behavior: what it is, common causes
- [ ] Sanitizers: ASan, UBSan
- [ ] Exception safety guarantees (basic / strong / nothrow)

## Phase 6 — The Standard Library
- [ ] Sequence containers: vector, deque, list, forward_list
- [ ] Associative: map, set, multimap, multiset
- [ ] Unordered: unordered_map, unordered_set
- [ ] Adaptors: stack, queue, priority_queue
- [ ] pair, tuple, structured bindings
- [ ] Iterators, iterator categories, invalidation rules
- [ ] Lambdas & captures
- [ ] `<algorithm>`: sort, find, transform, accumulate, erase-remove
- [ ] Function objects, `std::function`
- [ ] `std::string_view`, `std::span`
- [ ] `std::variant`, `std::visit`, `std::any`
- [ ] Ranges & views (C++20)
- [ ] Complexity guarantees of each container/algorithm

## Phase 7 — Data Structures & Algorithms (implement)
- [ ] Big-O analysis
- [ ] Recursion
- [ ] Dynamic array, linked list, stack, queue
- [ ] Sorting: insertion, merge, quick, heap sort
- [ ] Binary search
- [ ] Hash table
- [ ] Binary heap
- [ ] BST, then AVL or red-black tree
- [ ] Trie
- [ ] Graphs: BFS, DFS, topological sort
- [ ] Shortest paths: Dijkstra, Bellman-Ford
- [ ] MST: Prim, Kruskal, union-find
- [ ] Backtracking
- [ ] Greedy, divide & conquer
- [ ] Dynamic programming
- [ ] STL-compatible iterator for your own container

## Phase 8 — Templates & Generic Programming
- [ ] Function templates, class templates
- [ ] Non-type template parameters
- [ ] Full & partial specialization
- [ ] Value categories: lvalue / prvalue / xvalue
- [ ] Forwarding references, `std::forward`, perfect forwarding
- [ ] Variadic templates, fold expressions
- [ ] `if constexpr`, `constexpr`/`consteval`/`constinit`
- [ ] Type traits
- [ ] SFINAE, `enable_if`
- [ ] Concepts & `requires`
- [ ] CRTP
- [ ] Type erasure (build your own mini `std::function`)

## Phase 9 — Build, Link, Tooling
- [ ] Compilation pipeline: preprocess → compile → assemble → link
- [ ] Linkage: internal/external, anonymous namespaces
- [ ] ODR & `inline` in depth
- [ ] Static vs dynamic libraries
- [ ] Name mangling, `extern "C"`, ABI
- [ ] CMake targets properly: PUBLIC / PRIVATE / INTERFACE
- [ ] CMake install & export
- [ ] clang-format, clang-tidy
- [ ] CI with GitHub Actions
- [ ] C++20 modules

## Phase 10 — Design
- [ ] Value vs reference semantics in API design
- [ ] SOLID
- [ ] Patterns: factory, observer, strategy, command, state, visitor
- [ ] PIMPL
- [ ] Data-oriented design
- [ ] Entity Component System (ECS)

## Phase 11 — Concurrency
- [ ] `std::thread`, join/detach, `std::jthread`
- [ ] Data races, `std::mutex`, `lock_guard`, `scoped_lock`, `unique_lock`
- [ ] Deadlocks & how to avoid them
- [ ] `std::condition_variable`
- [ ] `std::future`, `std::promise`, `std::async`
- [ ] Thread pool (build one)
- [ ] `std::atomic`
- [ ] Memory model & memory orders
- [ ] Coroutines
- [ ] Lock-free data structures

## Phase 12 — Performance & Low-Level
- [ ] Profiling: perf, Tracy
- [ ] Benchmarking: Google Benchmark
- [ ] Cache, locality, memory hierarchy
- [ ] Alignment, padding, object layout
- [ ] Reading compiler output (Compiler Explorer)
- [ ] Small buffer optimization
- [ ] Custom allocators, `std::pmr`
- [ ] SIMD
- [ ] Object lifetime rules, strict aliasing, `std::launder`
- [ ] Reading the C++ standard
