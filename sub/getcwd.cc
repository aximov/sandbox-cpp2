#include <stdio.h>
#include <unistd.h>
#include <iostream>
std::string GetCurrentWorkingDir() {
  char buff[FILENAME_MAX];
  getcwd(buff, FILENAME_MAX);
  std::string current_working_directory(buff);
  return current_working_directory;
}
int main() {
  std::cout << GetCurrentWorkingDir() << std::endl;
  return 0;
}