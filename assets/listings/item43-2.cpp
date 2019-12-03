template<typename Company> class MsgSender {
 public:
  ...
  void sendClear(const MsgInfo& info) {
    std::string msg; create msg from info;
    Company c;
    c.sendCleartext(msg);
  }
  void sendSecret(const MsgInfo& info) { ... }
};