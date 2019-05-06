class Widget {
...
void swap(Widget& rhs); // intercambia los datos de *this y rhs
...
};
Widget& Widget::operator=(const Widget& rhs) {
  Widget temp(rhs);     // hace una copia del data de rhs
  swap(temp);           // intercambia los datos de *this con
                        // el de la copia
  return *this;
}

// ó

Widget& Widget::operator=(Widget rhs) { // rhs es una copia del 
  swap(rhs);                            // objecto pasado
                                        // intercambia los datos de
  return *this;                         // *this por el de la copia
}
