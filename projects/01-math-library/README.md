# Project 01: CG Math Library

## Goal
Build a small, tested C++20 math library for later renderer stages.

## Milestones
1. Vec2/Vec3/Vec4 and scalar operations.
2. Mat3/Mat4, determinant, inverse, transpose.
3. Quaternion and transform composition.
4. Ray, Plane, AABB, Sphere and intersection routines.
5. Camera and projection matrices with explicitly documented API conventions.
6. Unit tests, numerical edge cases and microbenchmarks.

## Current status
- [x] Vec3 arithmetic, dot, cross, length and normalization
- [x] Initial unit tests
- [ ] Vec2/Vec4
- [ ] Mat3/Mat4
- [ ] Quaternion
- [ ] Geometry primitives
- [ ] Camera and projection
- [ ] Benchmarks

## Build
Run from repository root:
```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```
