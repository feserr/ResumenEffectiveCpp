class Rectangle {
  public:
  ...
  const Point& UpperLeft() const { return pData->ulhc; }
  const Point& LowerRight() const { return pData->lrhc; }
};