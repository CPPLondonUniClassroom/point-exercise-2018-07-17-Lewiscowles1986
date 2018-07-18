#include <iostream>

#ifndef WEEK11_POINT_EXERCISE_POINT_HPP
#define WEEK11_POINT_EXERCISE_POINT_HPP

struct point {
    int x = 0;
    int y = 0;

    point& operator+=(const point& other);
    point& operator-=(const point& other);
};

bool operator==(const point& lhs, const point& rhs);
bool operator!=(const point& lhs, const point& rhs);

point operator+(const point& lhs, const point& rhs);
point operator-(const point& lhs, const point& rhs);

std::ostream& operator<<(std::ostream& output, const point& p);

#endif //WEEK11_POINT_EXERCISE_POINT_HPP
