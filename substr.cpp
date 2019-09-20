#include <iostream>

 using namespace std;
 
 int main(){
   string my ="On this machine, the steady_clock and high_resolution_clock have the same characteristics, both are non-adjustable clocks with nanosecond precision. On the other hand, the system_clock is adjustable and it has only microsecond precision.For comparison, this is the output of the program, compiled with Visual Studio 2012, on a Windows 7 machine:";
    cout<<my.substr(327,7);//substr(index from where it should start string, length of string)
 }
