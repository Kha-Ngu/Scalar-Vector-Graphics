#include "polygon.h"

ostream &Polygon::write(ostream &output) const {
  output << "      <polygon points=\"";
  for (const auto &vertex : vertices) {
    output << vertex.first << "," << vertex.second << " ";
  }
  output << "\" fill=\"" << fillColor << "\" />" << endl;
  return output;
}

istream &Polygon::read(istream &input) {
  int numberOfPoints;
  input >> numberOfPoints >> fillColor;
  vertices.clear();

  for (int i = 0; i < numberOfPoints; ++i) {
    int xCoord;
    int yCoord;
    input >> xCoord >> yCoord;
    vertices.emplace_back(xCoord, yCoord);
  }
  return input;
}
