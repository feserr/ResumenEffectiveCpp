class CompanyA {
 public:
  ...
  void sendCleartext(const std::string& msg);
  void sendEncrypted(const std::string& msg);
  ...
};
class CompanyB {
 public:
  ...
  void sendEncrypted(const std::string& msg);
  ...
};