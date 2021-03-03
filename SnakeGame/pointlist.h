#ifndef POINTLIST_H
#define POINTLIST_H

#include "point.h"
#include "pointlistitem.h"

class PointList
{
  PointListItem* head;
  PointListItem* tail;
  void DeleteTail();

public:
  PointList(Point headPoint);
  int Length();
  void AddInTop(Point newHead);
  void UpdatePoints(Point newHeadLocation);
};

#endif  // POINTLIST_H
