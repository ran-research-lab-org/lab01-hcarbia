// (Your name and github username)
// A program to practice modifications and compilation

#include <iostream>
#include <vector>
using namespace std;

int main() {
  //arrays
  string words[] = {"World!", "Solar System!", "Galaxy!", "Universe!", "... ?"};
  int numbers[] = {1, 2, 3, 4, 5};
  //
  //Part 1 - Cycling through an array of words
  //std::cout << "Hello World!" << std::endl;
  for (const string& s : words)
    std::cout << "Hello " << s << endl;
  //
  //Part 2 - Cycling through a numbers array
  //std::cout << "This is a 1!" << std::endl;
  for (const int& i : numbers)
    std::cout << "This is a " << i << "!" << endl;
  //
  return 0;
}
