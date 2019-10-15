template<typename T>
class Derived: public Base<T>::Nested {
 public:
  explicit Derived(int x) : Base<T>::Nested(x) {
    typename Base<T>::Nested temp;
    ...
  }
...
};