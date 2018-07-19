/*
 * ray.h
 *
 *  Created on: 5 Jul 2018
 *      Author: linstead
 */

#ifndef RAYH
#define RAYH
#include "vec3.h"

class ray
{
public:

	ray() {}
	ray(const vec3& a, const vec3& b) { A = a; B = b; } // ray(origin, direction);
	vec3 origin() const { return A; }
	vec3 direction() const { return B; }
	vec3 point_at_parameter(float t) const {return A + t*B; }

	vec3 A; // ray origin
	vec3 B; // ray direction
};

#endif /* RAYH */
