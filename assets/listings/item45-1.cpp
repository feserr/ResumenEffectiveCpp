template<class T>
class shared_ptr {
 public:
  shared_ptr(shared_ptr const& r);
  template<class Y>
  shared_ptr(shared_ptr<Y> const& r);

  shared_ptr& operator=(shared_ptr const& r);
  template<class Y>
  shared_ptr& operator=(shared_ptr<Y> const& r);
  ...
};