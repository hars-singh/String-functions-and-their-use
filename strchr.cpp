// CPP program to find position of a character 
// in a given string. 
#include <iostream> 
#include <cstring> 
using namespace std; 
  
int main() 
{ 
    char str[] = "My name is Ayush"; 
    char* ch = strchr(str, 'a'); 
    cout << ch - str + 1; 
    return 0; 
} 
