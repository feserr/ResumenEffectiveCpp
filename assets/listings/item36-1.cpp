class B {
public:
  void mf();
};

class D: public B {
public:
  void mf();
};

D x;
B* pB = &x;
D* pD = &x;

pB->mf();  // Llama a B:mf
pD->mf();  // Llama a D:mf