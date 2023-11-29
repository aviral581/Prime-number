
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
