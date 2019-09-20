#include<iostream> 
#include<cstring> 
using namespace std;
int main() 
{  
    // b has less ASCII value than g 
    char leftStr[] = "bfb"; 
    char rightStr[] ="bAb"; 
      
    int res = strcmp(leftStr, rightStr); /* When the strings are not same, you will find that the value returned by the strcmp() function is the difference between the ASCII values of first unmatched character in leftStr and rightStr in both the cases.*/
      
    if (res==0) 
        cout<<"Strings are equal"; 
    else 
        cout<<"Strings are unequal"; 
          
    cout<<"\nValue returned by strcmp() is: "<< res; 
      
      
    return 0; 
}
