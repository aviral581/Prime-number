
#include <iostream>

using namespace std;

// convert small char to large char

char character_convert(char name){
    char ans = name - 'a'+'A';
    return ans;
}


int main()
{
   
   char name;
   cout<<"Enter the character"<<endl;
   cin>>name;
//   character_convert(name);
   
   cout<<"convert small character into capital character  "<<character_convert(name);
    return 0;
}