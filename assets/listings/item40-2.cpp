class IPerson {
 public:
  virtual ~IPerson();
  virtual std::string Name() const = 0;
  vitual std::string BirthData() const = 0;
};

class PersonInfo {
 public:
  PersonInfo();
  virtual ~PersonInfo();
  virtual const char* TheName() const;
  virtual const char* TheBirthDate() const;
};