void PrettyMenu::changeBackground(std::istream& imgSrc) {
  lock(&mutex);  // Obtener el mutex.
  delete bgImage;  // Borrar la imagen actual.
  ++imageChanges;  // Aumentar el número de cambios.
  bgImage = new Image(imgSrc);  // Poner la nueva imagen.
  unlock(&mutex);  // Liberar el mutex.
}