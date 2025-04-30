#include "triangle.h"
#include <fstream>
#include <iostream>

using namespace std;

ostream &Triangle::write(ostream &out) const {
  out << "      <polygon points=\"" << x1 << "," << y1 << " " << x2 << "," << y2
      << " " << x3 << "," << y3 << "\" "
      << "fill=\"" << color << "\" />" << endl;
  return out;
}

istream &Triangle::read(istream &inStream) {
  inStream >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> color;
  return inStream;
}
