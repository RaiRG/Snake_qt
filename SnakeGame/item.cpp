#include "item.h"

Item::Item(Point point) : CurrentPoint(point)
{
  CurrentPoint = point;
  Previous = nullptr;
}
