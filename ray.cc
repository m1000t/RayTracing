#ifndef RAY_H
#define RAH_H
#include "vec3.h"
#include <cmath>
#include <iostream>

class ray {

  public:
    ray() {}
    using point3 = vec3;

    ray(const point3& origin, const vec3& direction) : orig(origin), dir(direction) {}

    const point3& origin() const  { return orig; }
    const vec3& direction() const { return dir; }

    point3 at(double t) const {
        return orig + t*dir;
    }

private:
    point3 orig;
    vec3 dir;
};


#endif