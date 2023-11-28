
#include <iostream>

using namespace std;

void swap(int &x, int &y){     // pass by reference 
    int z=x;
        x=y;
        y=z;
}

int main()
{
    int a,b; 
    cout<<"Enter the number"<<endl;
    cin>>a>>b;
    cout<<"before swap number "<<a<<" and "<<b<<endl;
    swap(a,b);
    cout<<"after swap number "<<a<<" and "<<b<<endl;
    return 0;
}
