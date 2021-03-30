#include "apple.h"
#include <ctime>
#include <cstdlib>
Apple::Apple()
{
}

void Apple::GenerateLocation(Map map)
{
  std::srand(std::time(0));
  Location = Point(std::rand() % map.Weight, std::rand() % map.Height);
}
