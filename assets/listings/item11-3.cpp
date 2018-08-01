Widget&
Widget::operator=(const Widget& rhs) // unsafe impl. de operator=
{
  if (this == &rhs) return *this; // Si es el mismo no hace nada
  
  delete pb;
  pb = new Bitmap(*rhs.pb); 

  return *this;
}
