
#include "point.hpp"

#ifndef WEEK11_POINT_EXERCISE_LINE_HPP
#define WEEK11_POINT_EXERCISE_LINE_HPP

struct line {
    point start = {0,0};
    point end = {0,0};

    line(const point& start={0,0}, const point& end={0,0});
};

bool operator==(const line& lhs, const line& rhs);
bool operator!=(const line& lhs, const line& rhs);

line operator-(const line& lhs, const line& rhs);

std::ostream& operator<<(std::ostream& output, const line& l);

#endif //WEEK11_POINT_EXERCISE_LINE_HPP
