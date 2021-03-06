template<typename Company>
class LoggingMsgSender: public MsgSender<Company> {
  using MsgSender<Company>::sendClear;

 public:
  void sendClearMsg(const MsgInfo& info) {
    write "before sending" info to the log;
    sendClear(info);
    write "after sending" info to the log;
  }
};