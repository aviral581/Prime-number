/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;

//  This is for count number.
int count(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}
 
//   This is for armstrong 
bool armstrong(int num, int power){
    
     int digit = num,ans=0;
    
    while(digit>0){
        int rem = digit%10;
        digit = digit/10;
        ans=ans+pow(rem,power);
    }
    if(num == ans)
    // cout<<"This is armstrong"<<endl;                //  commented code can use when we use void armstrong()
    return 1;
    return 0;
    //  else{
    // cout<<"This is not armstrong"<<endl;
    // }
}


int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int c=count(num);
    // armstrong(num,c);
    cout<<armstrong(num,c);

    return 0;
}
