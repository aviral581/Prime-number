
//  Bishop problem in chess 8*8 and bishop moves to diagonally....

#include <iostream>

using namespace std;

 int bishop(int a, int b){
    
    int right = min(8-a,8-b);
    int left  = min(8-a,b-1);
    int right_top = min(a-1,8-b);
    int left_top  = min(a-1,b-1);
    
    int ans = (right+left+right_top+left_top);
    return ans;
}


int main()
{
   int  n,m;
   cout<<"Enter the number";
   cin>>n>>m;
   int bis = bishop(n,m);
   cout<<"Total moves of bishop "<<bis;

    return 0;
}