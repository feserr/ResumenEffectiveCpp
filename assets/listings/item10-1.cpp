class Point {
public:
  ...
  Point& operator=(const Point& p)
  {
    ...
    return *this;
  }
};
