
// This code for check -->>  Rectangle or not 

#include <iostream>
using namespace std;

bool rectangle(int a,int b,int c,int d){
    
    if((a==b && c==d)||(a==c && b==d)||(a==d && b==c)){
        return 1;
    }
    return 0;
}

int main()
{
   int a,b,c,d;
   cout<<"enter the number "<<endl;
   cin>>a>>b>>c>>d;
   
//   int rec = rectangle(a,b,c,d);
   if( rectangle(a,b,c,d))
   cout<<"yes";
   else
   cout<<"NO";
   return 0;
}