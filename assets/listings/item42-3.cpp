template<typename C>
void print2nd(const C& container) {
  if (container.size() > 2) {
    typename C::const_iterator iter(container.begin());
    ...
  }
}