class GameCharacter;
class HealthCalcFunc {
public:
  ...
  virtual int calc(const GameCharacter& gc) const {...}
  ...
};
HealthCalcFunc defaultHealthCalc;

class GameCharacter {
public:
  explicit GameCharacter(
    HealthCalcFunc *phcf = &defaultHealthCalc)
    : pHealthCalc(phcf ) {}
int healthValue() const {
  return pHealthCalc->calc(*this);
}
private:
  HealthCalcFunc *pHealthCalc;
};