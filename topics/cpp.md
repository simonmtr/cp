# C++ Concepts

## Language Fundamentals
- Value categories: lvalues, rvalues, glvalues
- Move semantics & copy elision
- Templates: basics + template metaprogramming (intro)
- RAII, smart pointers, and object lifetimes
- Const-correctness

## Performance & Systems
- Memory layout, alignment, padding
- Cache locality and false sharing
- Benchmarking: using `chrono`, `perf`, `valgrind`, `gprof`
- Low-latency tricks: memory pools, lock-free structures
- Custom allocators (basic)

## Concurrency & Multithreading
- Threads vs async vs futures
- std::mutex, condition_variable
- Atomics: memory_order, seq_cst, acquire/release
- Data races vs race conditions
- Thread-safe containers and lock-free queues

## STL Deep Dive
- Vectors, maps, unordered_map internals
- Iterator invalidation rules
- Allocator awareness
- std::sort and introsort details
- Emplace vs insert behavior

## Undefined Behavior (UB)
- Most common UB traps
- As-if rule, strict aliasing, ODR violations
- Tools: `-fsanitize=address`, `ubsan`, `valgrind`

## Build & Tooling
- Compiler flags: `-O2`, `-O3`, `-march=native`, `-flto`
- g++ vs clang++ differences in output
- Use of `constexpr`, `noexcept`, `[[nodiscard]]`

## Resources
- “Effective Modern C++” – Scott Meyers
- “C++ Concurrency in Action” – Anthony Williams
- Compiler Explorer (godbolt.org)
- Cppreference + Actual system benchmarks
