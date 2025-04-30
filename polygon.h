#ifndef POLYGON_H
#define POLYGON_H

#include "svg.h"
#include <string>
#include <vector>

using namespace std;

class Polygon : public SVG {
public:
  // Constructor
  Polygon() = default;

  // operator<< equivalent to write the object out
  ostream &write(ostream &output) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &input) override;

private:
  vector<pair<int, int>> vertices; // List of vertices defining the polygon
  string fillColor{"black"};       // Fill color of the polygon
};

#endif
