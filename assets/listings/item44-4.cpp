template<typename T>
class SquareMatrixBase {
 protected:
  SquareMatrixBase(std::size_t n, T *pMem)
      : size(n), pData(pMem) {}
  void setDataPtr(T *ptr) { pData = ptr; }
  ...
 private:
  std::size_t size;
  T *pData;
};