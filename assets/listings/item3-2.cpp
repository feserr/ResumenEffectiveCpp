class TextBlock {
public:
...
const char& operator[](std::size_t position) const {
  ...
  return text[position];
}

char& operator[](std::size_t position) {
  return
    const_cast<char&>(                   // quitamos const en
                                         // el tipo de retorno
    static_cast<const TextBlock&>(*this) // ponemos const al
    [position]                           // tipo de *this
                                         // llamamos a la 
                                         // version
                                         // const de op[]
    );
  }
  ...
};
