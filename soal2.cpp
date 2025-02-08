#include <iostream>
#include <string>

class Docx {
private:
  std::string filename;
  std::string content;

public:
  Docx(std::string filename) { this->filename = filename + ".docx"; }
  void setContent(std::string content) { this->content = content; }
  std::string getFilename() { return this->filename; }
  std::string getContent() { return this->content; }
};

class Printer {
public:
  void print(Docx file) {
    std::cout << "mencetak " << file.getFilename() << " ...\n"
              << file.getContent() << "\n";
  }
};

/**
 * Misal kita ingin menambahkan jenis file pdf
 * class Pdf {
 * private:
 *   std::string filename;
 *   std::string content;
 *
 * public:
 *   Pdf(std::string filename) { this->filename = filename + ".pdf"; }
 *   void setContent(std::string content) { this->content = content; }
 *   std::string getFilename() { return this->filename; }
 *   std::string getContent() { return this->content; }
 * };
 * Bagaimana cara menambahkan jenis file ini ke printer?
 */

int main() {
  Docx sourceCodePemroUnit2 = Docx("source code pemro unit 2");
  sourceCodePemroUnit2.setContent(
      "=diskon.c=\n=diskon.py=\n=nilai.c=\n=nilai.py=");
  Printer printer = Printer();
  printer.print(sourceCodePemroUnit2);
  return 0;
}
