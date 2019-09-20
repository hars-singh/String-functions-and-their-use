#include<iostream>
using namespace std;
#define newline "\n"
int main()
{ 
  
 cout<<"Enter your full name again. you will see your full name this time"<<endl;
 string str2;
 getline(cin,str2);
 cout<<str2<<endl;


 string str1;
 cout<<"Enter your full name. you will not see your full name this time"<<endl;
 cin>>str1;
 cout<<str1<<endl;
  return 0;

 


}
