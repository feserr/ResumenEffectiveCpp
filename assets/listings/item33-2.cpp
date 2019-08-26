class Base {
private:
  int x;
public:
  virtual void mf1() = 0;
  virtual void mf2();
  void mf3();
  ...
};
class Derived: public Base {
public:
  virtual void mf1();
  void mf4() {
    ...
    mf2();
    ...
  }
  ...
};