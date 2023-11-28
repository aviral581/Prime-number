
#include <iostream>

using namespace std;

bool prime(int a){
    if(a<2){
        return 0;
    }
    for (int i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
    }
     return 1;
}



int main()
{
    int n; 
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(prime(n)){
    cout<<"prime number is "<<n;
    }
    else{
        cout<< "number is not prime "<<n;
    }
    return 0;
}
