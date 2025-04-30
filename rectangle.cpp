#include "rectangle.h"

ostream &Rectangle::write(ostream &output) const {
  output << "      <rect x=\"" << xCoord << "\" y=\"" << yCoord << "\" width=\""
         << width << "\" height=\"" << height << "\" fill=\"" << fillColor
         << "\" />" << endl;
  return output;
}

istream &Rectangle::read(istream &input) {
  input >> xCoord >> yCoord >> width >> height >> fillColor;
  return input;
}
