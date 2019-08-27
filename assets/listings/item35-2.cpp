class GameCharacter {
public:
  int healthValue() const {
    ...
    int retVal = doHealthValue();
    ...
    return retVal;
  }
...
private:
  virtual int doHealthValue() const { ... }
};