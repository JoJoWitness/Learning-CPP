#include <iostream>
using namespace std;

int main(){
  int age = 20;
  age = 21;
  int *pAge = &age;

  cout << "Age: " << age << endl;
  cout << &age << endl;
}