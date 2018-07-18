
#include "line.hpp"
#include "point.hpp"

line::line(const point& start, const point& end)
{
    this->start = start;
    this->end = end;
}

bool operator==(const line& lhs, const line& rhs)
{
    return lhs.start == rhs.start &&
            lhs.end == rhs.end;
}

bool operator!=(const line& lhs, const line& rhs)
{
    return !(lhs == rhs);
}

line operator-(const line& lhs, const line& rhs)
{
    return line{lhs.start - rhs.start, lhs.end - rhs.end};
}

std::ostream& operator<<(std::ostream& out, const line& l)
{
    out << "(" << l.start << " -> " << l.end << ")";
    return out;
}
