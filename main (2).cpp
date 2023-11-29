/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

//  This swap function is  function overloading 

void Swap(int &x, int &y){     // pass by reference 
    
    int temp = x;
         x=y;
         y=temp;
}


void Swap(float &x, float &y){
    
       float t=x;
        x=y;
        y=t;
}

int main()
{
    float a;
    float b;
    
    cout<<"Enter the number"<<endl;
    cin>>a>>b;
   
    
    cout<<"before swap "<<a<<" "<<b<<endl;
    Swap(a,b);
    cout<<"After  swap "<<a<<" "<<b<<endl;

    return 0;
}