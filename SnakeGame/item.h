#ifndef ITEM_H
#define ITEM_H

#include "point.h"

class Item
{
public:
  Item(Point point);
  Item* Previous;
  Point CurrentPoint;
};

#endif  // ITEM_H
