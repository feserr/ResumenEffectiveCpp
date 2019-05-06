// Ejemplo 1
class Widget { ... };
Widget w;
...
w = w; // asignación a si mismo

// Ejemplo 2
a[i] = a[j]; // asignación potencial a si mismo

// Ejemplo 3
class Base { ... };
class Derived: public Base { ... };
void doSomething(const Base& rb, // rb y *pd puedes ser
Derived* pd);                    // el mismo objecto
