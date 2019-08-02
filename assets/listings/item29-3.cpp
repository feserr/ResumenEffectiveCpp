void PrettyMenu::changeBackground(std::istream& imgSrc) {
  Lock ml(&mutex);
  delete bgImage;
  ++imageChanges;
  bgImage = new Image(imgSrc);
}