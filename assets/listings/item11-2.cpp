Widget&
Widget::operator=(const Widget& rhs) // unsafe impl. de operator=
{
  delete pb;                // deja de usar el bitmap actual
  pb = new Bitmap(*rhs.pb); // empieza a usar una copia del bitmap 
                            // de rhs
  return *this;             // ver Item 10
}
