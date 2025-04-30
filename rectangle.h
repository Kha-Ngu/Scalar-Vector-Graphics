#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "svg.h"
#include <string>

class Rectangle : public SVG {
public:
  Rectangle() = default;

  // operator<< equivalent to write the object out
  ostream &write(ostream &output) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &input) override;

private:
  int xCoord{0}, yCoord{0}, width{0}, height{0};
  string fillColor{"black"};
};

#endif
