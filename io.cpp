#include <iostream>
using namespace std;

int main(){

  string dog;
  cout << "Enter your dog name: ";
  getline(cin, dog);
  cout << "Your dog's name is " << dog << "." << endl;
  cout << "And it's stinky." << endl;
  return 0;
}