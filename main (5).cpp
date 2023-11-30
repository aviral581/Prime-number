/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int tracingzero(int num){
    int count=0;
    while(num>=5){                    
        count+=num/5;                          // num is divided by 5 and will get  count last zeros
        num=num/5;                              
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans=tracingzero(n);
    cout<<"<<---tracing_zeros--->>   "<<ans;

    return 0;
}