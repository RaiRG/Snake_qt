#ifndef POINTLIST_H
#define POINTLIST_H

#include "point.h"
#include "item.h"

class PointList
{
  Item head;
  Item tail;
  void DeleteTail();
  int lenght;

public:
  PointList(Point headPoint);
  int Length();
  void AddInTop(Point newHead);
  void UpdatePoints(Point newHeadLocation);
  int getLength();
};

#endif  // POINTLIST_H
