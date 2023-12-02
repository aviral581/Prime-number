
#include <iostream>
#include <limits.h>
using namespace std;

// for min element

int min(int arr[]){
    int ans = INT_MAX;                    // INT_MAX is predefined function , it store the maximum value of integer
    for(int i=0; i<10;i++){
        if(arr[i]<ans){
            ans = arr[i];
        }
    }
    return ans;
}

// for max element

int max(int arr[]){
     int ans = INT_MIN;                 // INT_MIN is predefined function , it store the minimum value of integer
     for(int i =0; i<=10;i++){
         if(arr[i]>ans){
             ans = arr[i];
         }
     }
     return ans;
}


int main()
{
    int arr[10]={6,10,50,666,0,67,4,1,9,5};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    int mini = min(arr);
    int maxi = max(arr);
    
    cout<< "Minimum value  "<< mini<<endl;
    cout<< "Maximum value  " << maxi<<endl;
    
    return 0;
}