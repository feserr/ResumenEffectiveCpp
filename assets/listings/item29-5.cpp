struct PMImpl {
  std::shared_ptr<Image> bgImage;
  int imageChanges;
};
class PrettyMenu {
  ...
 private:
  Mutex mutex;
  std::shared_ptr<PMImpl> pImpl;
};