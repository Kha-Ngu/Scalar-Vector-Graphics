#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "svg.h"
#include <string>

using namespace std;

class Ellipse : public SVG {
public:
  // Constructor
  Ellipse() = default;

  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &inStream) override;

private:
  int cx{0}, cy{0};      // Center coordinates
  int rx{0}, ry{0};      // Radii along x and y axes
  string color{"black"}; // Fill color
};

#endif