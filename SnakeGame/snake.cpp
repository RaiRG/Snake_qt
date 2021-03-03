#include "snake.h"

Snake::Snake(Point headLocation) : BodyWithHead(headLocation), HeadLocation(headLocation)
{
  this->HeadLocation = headLocation;
  this->BodyWithHead = PointList(headLocation);
  this->IsFed = false;
  this->Direction = Direction::Up;
  this->Step = 1;
}

void Snake::MoveDown()
{
  this->HeadLocation = Point(HeadLocation.X, HeadLocation.Y + Step);
  // Если змея только что поела...
  if (IsFed)
  {
    // то она должна вырасти и снова быть голодной.
    BodyWithHead.AddInTop(HeadLocation);
    IsFed = false;
  }
  else
  {
    BodyWithHead.UpdatePoints(HeadLocation);
  }

  Direction = Direction::Down;
}
