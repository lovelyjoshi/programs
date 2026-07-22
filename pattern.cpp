#include<iostream>
using namespace std;
int main(){
    char alpha='A';
    int num=2;
    for(int i=0;i<5;i++)
    {
       for(int j=0;j<=i;j++)
       {
        if(i%2==0){
         cout << alpha++;
        }
         else{
          cout << num;
          num+=2;
         }
       }
       cout <<endl;
    }
      return 0; 
}