class CPerson: public IPerson, private PersonInfo {
 public:
  CPerson(): PersonInfo() {}
  virtual std::string Name() const {
    return PersonInfo::TheName();
  }
  virtual std::string BirthDate() const {
    return PersonInfo::TheBirthDate();
  }
};