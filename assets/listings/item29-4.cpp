class PrettyMenu {
  ...
  std::shared_ptr<Image> bgImage;  // usamos shared_ptr.
  ...
};

void PrettyMenu::changeBackground(std::istream& imgSrc) {
  Lock ml(&mutex);
  bgImage.reset(new Image(imgSrc));  // Cambiamos el
                                     // punteor por el
                                     // nuevo.
  ++imageChanges;
}