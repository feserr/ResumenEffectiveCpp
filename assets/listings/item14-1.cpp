class Lock {
public:
  explicit Lock(Mutex *pm) : mutexPtr(pm) { 
    lock(mutexPtr); }  // adquirimos el recurso
    
    ~Lock() { unlock(mutexPtr); }  // liberamos el recurso
private:
  Mutex *mutexPtr;
};
