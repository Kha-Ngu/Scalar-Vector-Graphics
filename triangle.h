#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Triangle : public SVG {
public:
  ostream &write(ostream &out) const override;
  istream &read(istream &inStream) override;

private:
  int x1{0}, y1{0}; // Coordinates for the first point
  int x2{0}, y2{0}; // Coordinates for the second point
  int x3{0}, y3{0}; // Coordinates for the third point
  string color{"black"};
};

#endif
