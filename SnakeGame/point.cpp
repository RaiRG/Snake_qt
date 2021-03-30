#include "point.h"
#include <math.h>

Point::Point()
{
  X = nan("");
  Y = nan("");
}
Point::Point(int x, int y) : X(x), Y(y)
{
}

bool operator==(const Point& c1, const Point& c2)
{
  return (c1.X == c2.X && c1.Y == c2.Y);
}
bool operator!=(const Point& c1, const Point& c2)
{
  return !(c1 == c2);
}
