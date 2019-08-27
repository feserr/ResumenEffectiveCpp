class EvilBadGuy: public GameCharacter {
public:
  explicit EvilBadGuy(
    HealthCalcFunc hcf = defaultHealthCalc) :
    GameCharacter(hcf ) { ... }
  ...
};

int loseHealthQuickly(const GameCharacter&);
int loseHealthSlowly(const GameCharacter&);

EvilBadGuy ebg1(loseHealthQuickly);
EvilBadGuy ebg2(loseHealthSlowly);