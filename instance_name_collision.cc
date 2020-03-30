class MyClass {};
void func1() {
  MyClass* my_class = new MyClass;
  delete my_class;
}
void func2() {
  MyClass* my_class = new MyClass;
  delete my_class;
}

int main() {
  func1();
  func2();
  return 0;
}