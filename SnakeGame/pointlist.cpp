#include "pointlist.h"

PointList::PointList(Point headPoint) : head(Item(headPoint)), tail(head)
{
  this->lenght = 1;
}
