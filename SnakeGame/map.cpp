#include "map.h"

Map::Map()
{
  Weight = trivialSize;
  Height = trivialSize;
}
Map::Map(int weight, int height) : Weight(weight), Height(height)
{
}
