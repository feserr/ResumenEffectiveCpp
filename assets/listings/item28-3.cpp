class GUIObject { ... };

// Devuelve un rectangulo por valor constante.
const Rectangle BoundingBox(const GUIObject& obj);

GUIObject *pGUIobj;  // pGUIobj apunta a algún GUIObject.

const Point *pUpperLeft =                // coger el puntero al
  &(BoundingBox(*pGUIobj).UpperLeft());  // punto superior
                                         // izquierdo de su
                                         //bounding box.