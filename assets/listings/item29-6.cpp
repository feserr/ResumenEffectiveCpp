void PrettyMenu::changeBackground(std::istream& imgSrc) {
  using std::swap;
  Lock ml(&mutex);
  // Copiamos el objeto actual.
  std::shared_ptr<PMImpl> pNew(new PMImpl(*pImpl));
  // Cambiamos el puntero por el objeto nuevo.
  pNew->bgImage.reset(new Image(imgSrc));
  ++pNew->imageChanges;  // Incrementamos.
  swap(pImpl, pNew);  // Intercambiamos los objetos.
}