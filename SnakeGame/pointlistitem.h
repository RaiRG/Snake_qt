#ifndef POINTLISTITEM_H
#define POINTLISTITEM_H

#include "point.h"

class PointListItem
{
public:
  PointListItem(Point point);
  PointListItem* Previous;
  Point Current;
};

#endif  // POINTLISTITEM_H
