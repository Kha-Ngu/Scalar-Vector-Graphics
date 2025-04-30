#include "ellipse.h"

ostream &Ellipse::write(ostream &out) const {
  out << "      <ellipse cx=\"" << cx << "\" cy=\"" << cy << "\" rx=\"" << rx
      << "\" ry=\"" << ry << "\" fill=\"" << color << "\" />" << endl;
  return out;
}

istream &Ellipse::read(istream &inStream) {
  inStream >> cx >> cy >> rx >> ry >> color;
  return inStream;
}