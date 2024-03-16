#include <iostream>
using namespace std;

class Book{
  public:
    string title;
    string author;
    int pages;
};

class BookConstructor{
  public:
    string title;
    string author;
    int pages;

    BookConstructor(string aTitle, string aAuthor, int aPages){
      title = aTitle;
      author = aAuthor;
      pages = aPages;

       cout << title << " by " << author << " have " << pages << " pages." << endl;
    }

   
};

class Student{
  public:
    string name;
    string major;
    double gpa;

    Student(string aName, string aMajor, double aGpa){
      name = aName;
      major = aMajor;
      gpa = aGpa;
    }

    bool hasHonors(){
      if(gpa >= 3.5){
        return true;
      }
      return false;
    }
};


int main()
{
  Book book1;
  book1.title = "Study in Scarlet";
  book1.author = "Arthur Conan Doyle";
  book1.pages = 188;

  

  cout << book1.title << " by " << book1.author << " have " << book1.pages << " pages." << endl;

  BookConstructor("Coraline", "Neil Gaiman", 300);

  Student student1("Jim", "Business", 2.4);
  Student student2("Pam", "Art", 3.6);

  cout << student1.hasHonors() << endl;
  cout << student2.hasHonors() << endl;
  return 0;
}