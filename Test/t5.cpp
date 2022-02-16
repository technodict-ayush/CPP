#include <iostream>
#include <cstring>
class Line {
private:
  char line[128];
public:
  const char *get_line() const {return line;}
  void set_line(const char *s) {strncpy(line, s, sizeof(line));}
};

Line *read_line() {
  std::string input_line;
  if (!std::cin)
    return 0;
  std::getline(std::cin, input_line);
  Line line;
  line.set_line(input_line.c_str());
  return &line;
}

int main() {
  Line *line;
  while(line=read_line())
    std::cout << line->get_line();
}