#include<iostream>
using namespace std;

class book{

  public:
  string author ;
  string book_name ;
  int age ;
};
int main()
{
 book book1;
 book1.author="Harsh Singh";
 book1.book_name ="rasayan vigyaan";
 book1.age=17;
 book book2;
 book2.author="Arpit Singh";
 book2.book_name ="thyride glande";
 book2.age =19;

cout<<book2.age;
return 0;


}
