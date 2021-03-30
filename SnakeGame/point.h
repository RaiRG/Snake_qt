#ifndef POINT_H
#define POINT_H

class Point
{
public:
  Point();
  Point(int x, int y);
  int X;
  int Y;
  friend bool operator==(const Point& c1, const Point& c2);
  friend bool operator!=(const Point& c1, const Point& c2);
};

#endif  // POINT_H
