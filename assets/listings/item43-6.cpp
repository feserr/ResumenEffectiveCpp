template<typename Company>
class LoggingMsgSender: public MsgSender<Company> {
 public:
  void sendClearMsg(const MsgInfo& info) {
    write "before sending" info to the log;
    MsgSender<Company>::sendClear(info);
    write "after sending" info to the log;
  }
};