Derived d; int x;
...
d.mf1();   // Bien, llama aDerived::mf1.
d.mf1(x);  // Error, Derived::mf1() oculta Base::mf1.

d.mf2();   // Bien, llama a Base::mf2.
d.mf3();   // Bien, llama a Derived::mf3.
d.mf3(x);  // Error, Derived::mf3 oculta Base::mf3.