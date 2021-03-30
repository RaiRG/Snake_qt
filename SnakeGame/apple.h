#ifndef APPLE_H
#define APPLE_H

#include "point.h"
#include "map.h"
class Apple
{
public:
  Apple();
  Point Location;
  void GenerateLocation(Map map);
};

#endif  // APPLE_H
