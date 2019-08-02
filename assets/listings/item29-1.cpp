class PrettyMenu {
 public:
  ...
  void changeBackground(std::istream& imgSrc); // Cambia la
  ...                                          // imagen.
 private:
  Mutex mutex;  // Mutex de este objeto.
  Image *bgImage;  // Imagen de fondo actual.
  int imageChanges;  // Número de cambios.
};