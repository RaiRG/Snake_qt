#include "listexensions.h"

void SlideFromStartElement(std::list<Point>& list, Point newElement)
{
  list.push_front(newElement);
  list.pop_back();
}
