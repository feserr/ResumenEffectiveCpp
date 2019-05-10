class Rectangle {
  public:
  ...
  Point& UpperLeft() const { return pData->ulhc; }
  Point& LowerRight() const { return pData->lrhc; }
};

Point coord1(0, 0);
Point coord2(100, 100);

const Rectangle rec(coord1, coord2);  // Un rectangulo const.

rec.UpperLeft().setX(50;)  // ahora rec pasa de (100,0)
                           // a (50, 0).