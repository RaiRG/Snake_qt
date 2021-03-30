#include "snake.h"
#include "listexensions.h"
Snake::Snake(Point headLocation) : HeadLocation(headLocation)
{
  this->BodyWithHead.push_front(headLocation);
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
    BodyWithHead.push_front(HeadLocation);
    IsFed = false;
  }
  else
  {
    SlideFromStartElement(BodyWithHead, HeadLocation);
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
    BodyWithHead.push_front(HeadLocation);
    IsFed = false;
  }
  else
  {
    SlideFromStartElement(BodyWithHead, HeadLocation);
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
    BodyWithHead.push_front(HeadLocation);
    IsFed = false;
  }
  else
  {
    SlideFromStartElement(BodyWithHead, HeadLocation);
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
    BodyWithHead.push_front(HeadLocation);
    IsFed = false;
  }
  else
  {
    SlideFromStartElement(BodyWithHead, HeadLocation);
  }

  Direction = Direction::Left;
}

bool Snake::Contains(Point& point)
{
  if (HeadLocation == point)
    return true;
  // TODO: итерация по списку точек
  for (auto p : BodyWithHead)
  {
    if (p == point)
      return true;
  }
  return false;
}
