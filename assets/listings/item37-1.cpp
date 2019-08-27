class Shape {
public:
  enum ShapeColor { Red, Green, Blue };
  virtual void draw(ShapeColor color = Red) const = 0;
};
class Rectangle: public Shape { public:
  virtual void draw(ShapeColor color = Green) const;
};

Shape *ps;
Shape *pr = new Rectangle;

ps = pr; // El tipo dinamica de ps es Rectangle.
pr->draw(Shape::Red); // Llama a Rectangle::draw(Shape::Red)