class Bird {
  ...  // No fly function is declared.
};
class FlyingAnimal: public Bird {
  virtual void fly();
  ...
}
class Penguin: public Bird {
  ... // No fly function is declared.
};