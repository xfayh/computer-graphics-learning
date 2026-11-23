# Computer Graphics Learning

Expert-level computer graphics curriculum: mathematical foundations, rendering algorithms, GPU architecture, graphics APIs, ray tracing, and renderer engineering.

- Depth: Expert
- APIs: OpenGL, Direct3D 11/12, Vulkan, Metal, WebGPU
- Weekly effort: 10–15 hours
- Language baseline: C++20

## 12-stage curriculum
1. Mathematics and graphics foundations
2. Computer graphics fundamentals
3. 3D geometry and transformations
4. Rasterization
5. Lighting, materials and textures
6. GPU architecture and shader programming
7. OpenGL
8. DirectX 11 and DirectX 12
9. Vulkan, Metal and WebGPU
10. Advanced real-time rendering
11. Ray tracing and path tracing
12. Rendering-engine architecture

## Build and test
```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

Start with [the documentation index](docs/index.md) and [Stage 01: Mathematics](docs/01-mathematics/index.md).
