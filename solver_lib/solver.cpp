#include "solver.h"

#include <stdexcept>
#ifdef _WIN32
	#include <cmath>
#else
	#include <math.h>
#endif

void solve(float a, float b, float c, float& x1, float& x2)
{
    float d = (b * b) - (4.0f * a * c);

    if (d < 0.0f)
    {
        throw std::logic_error{"error: discriminant < 0"};
    }

    x1 = (-b - std::sqrt(d)) / (2.0f * a);
    x2 = (-b + std::sqrt(d)) / (2.0f * a);
}
