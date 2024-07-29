#ifndef RAY_H
#define RAH_H
#include "vec3.h"
#include <cmath>
#include <iostream>

class ray {
public:
    vec3 orig;
    vec3 dir;

    ray() {}
    ray(const vec3& origin, const vec3& direction) : orig(origin), dir(direction) {}

    vec3 at(double t) const {
        return orig + t* dir;
    }
};


#endif