#ifndef SNAKE_H
#define SNAKE_H

#include "point.h"
#include <list>

enum class Direction
{
  Left,
  Right,
  Up,
  Down
};

class Snake
{
public:
  Snake(Point headLocation);
  std::list<Point> BodyWithHead;
  Point HeadLocation;
  bool IsFed;
  int Step;
  Direction Direction;
  void MoveDown();
  void MoveUp();
  void MoveRight();
  void MoveLeft();
  bool Contains(Point& point);
};

#endif  // SNAKE_H
