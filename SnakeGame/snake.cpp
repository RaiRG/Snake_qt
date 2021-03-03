#include "snake.h"

Snake::Snake(Point headLocation) : BodyWithHead(headLocation), HeadLocation(headLocation)
{
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

void Snake::MoveUp()
{
  this->HeadLocation = Point(HeadLocation.X, HeadLocation.Y - Step);
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

  Direction = Direction::Up;
}

void Snake::MoveRight()
{
  HeadLocation = Point(HeadLocation.X + Step, HeadLocation.Y);
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

  Direction = Direction::Right;
}
void Snake::MoveLeft()
{
  HeadLocation = Point(HeadLocation.X - Step, HeadLocation.Y);
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

  Direction = Direction::Left;
}

bool Snake::Contains(Point& point)
{
  int length = 1;
  // TODO: итерация по списку точек
  foreach (auto bodyItem : BodyWithHead)
  {
    if ((Point)bodyItem == point && length != BodyWithHead.Lenght)
      return true;
    length++;
  }

  return false;
}
