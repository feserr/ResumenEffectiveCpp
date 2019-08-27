short calcHealth(const GameCharacter&);
struct HealthCalculator {
  int operator()(const GameCharacter&) const { ... }
};

class GameLevel {
public:
  float health(const GameCharacter&) const;
  ...
};

class EvilBadGuy: public GameCharacter { ... };
class EyeCandyCharacter: public GameCharacter { ... };