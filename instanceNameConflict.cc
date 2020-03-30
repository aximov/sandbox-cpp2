class IAmAClass {
 private:
  int x;
};

int main() {
  IAmAClass* obj = new IAmAClass;
  delete obj;
  return 0;
}