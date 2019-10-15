template<typename C>
void print2nd(const C& container) {
  if (container.size() > 2) {
    C::const_iterator iter(container.begin());
    ...
  }
}