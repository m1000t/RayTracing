#ifndef RAY_H
#define RAY_H

#include <cmath>
#include <iostream>

class vec3 {
public:
    double x, y, z;

    vec3() : x(0), y(0), z(0) {}
    vec3(double x, double y, double z) : x(x), y(y), z(z) {}

    vec3 operator+(const vec3& other) const {
        return vec3(x + other.x, y + other.y, z + other.z);
    }

    vec3 operator-(const vec3& other) const {
        return vec3(x - other.x, y - other.y, z - other.z);
    }

    vec3 operator*(double t) const {
        return vec3(x * t, y * t, z * t);
    }

    // Friend function for scalar multiplication on the left
    friend vec3 operator*(double t, const vec3& v) {
        return vec3(v.x * t, v.y * t, v.z * t);
    }

    // Member functions to access components
    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }
};

#endif // RAY_H