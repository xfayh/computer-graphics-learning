#include <cassert>
#include <cmath>
#include "cg/vec3.hpp"

static bool near(float a, float b, float eps = 1.0e-5f) {
    return std::fabs(a-b) <= eps;
}
int main() {
    using cg::Vec3;
    const Vec3 x{1,0,0}, y{0,1,0};
    const Vec3 z = x.cross(y);
    assert(near(x.dot(y), 0.0f));
    assert(near(z.x,0) && near(z.y,0) && near(z.z,1));
    assert(near(y.cross(x).z,-1));
    Vec3 v{3,4,0};
    assert(near(v.length(),5));
    assert(v.normalize());
    assert(near(v.length(),1));
    Vec3 zero{};
    assert(!zero.normalize());
    return 0;
}
