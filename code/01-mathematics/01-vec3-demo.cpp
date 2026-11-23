#include <iomanip>
#include <iostream>
#include "cg/vec3.hpp"

int main() {
    using cg::Vec3;
    const Vec3 edge1{1.0f, 0.0f, 0.0f};
    const Vec3 edge2{0.0f, 1.0f, 0.0f};
    const Vec3 normal = edge1.cross(edge2).normalized();

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "edge1 dot edge2 = " << edge1.dot(edge2) << '\\n';
    std::cout << "normal = (" << normal.x << ", " << normal.y << ", " << normal.z << ")\\n";
    return 0;
}
