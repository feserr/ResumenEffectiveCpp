EvilBadGuy ebg1(calcHealth); // Usando la función.
EyeCandyCharacter ecc1(
  HealthCalculator()); // Usando la función del objeto

GameLevel currentLevel;
...
EvilBadGuy ebg2(
  std::bind(&GameLevel::health,
                 currentLevel,
                 _1));