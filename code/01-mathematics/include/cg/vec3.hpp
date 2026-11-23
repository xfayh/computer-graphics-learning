#pragma once
#include <cmath>
#include <stdexcept>

namespace cg {

// Minimal educational Vec3. Public components keep introductory examples clear.
struct Vec3 {
    float x{0.0f}, y{0.0f}, z{0.0f};

    constexpr Vec3() = default;
    constexpr Vec3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}

    constexpr Vec3 operator+(const Vec3& r) const { return {x+r.x, y+r.y, z+r.z}; }
    constexpr Vec3 operator-(const Vec3& r) const { return {x-r.x, y-r.y, z-r.z}; }
    constexpr Vec3 operator*(float s) const { return {x*s, y*s, z*s}; }
    constexpr Vec3 operator/(float s) const {
        if (s == 0.0f) throw std::domain_error("Vec3 division by zero");
        return {x/s, y/s, z/s};
    }
    constexpr float dot(const Vec3& r) const { return x*r.x + y*r.y + z*r.z; }
    constexpr Vec3 cross(const Vec3& r) const {
        return {y*r.z-z*r.y, z*r.x-x*r.z, x*r.y-y*r.x};
    }
    constexpr float length_squared() const { return dot(*this); }
    float length() const { return std::sqrt(length_squared()); }

    // Returns false for zero/near-zero vectors and leaves the value unchanged.
    bool normalize(float epsilon = 1.0e-8f) {
        const float len = length();
        if (len <= epsilon) return false;
        *this = *this / len;
        return true;
    }
    Vec3 normalized(float epsilon = 1.0e-8f) const {
        Vec3 out = *this;
        if (!out.normalize(epsilon)) throw std::domain_error("Cannot normalize zero Vec3");
        return out;
    }
};
constexpr Vec3 operator*(float s, const Vec3& v) { return v*s; }

} // namespace cg
