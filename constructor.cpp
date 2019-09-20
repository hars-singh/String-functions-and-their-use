#include<iostream>
using namespace std;

class book{

  public:
  string author ;
  string book_name ;
  int age ;
  book(string aauthor,string abook_name,int aage)
  {cout<<"My constructor"<<endl;
  author =aauthor;
  book_name =abook_name;
  age =aage;
  }
};
int main()
{
 book book1("Harsh Singh","Shipwreck",20);
 book book2("Arpit Singh","Horro_movie",17);

cout<<book2.age;
return 0;


}
