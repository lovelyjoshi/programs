#include<iostream>
using namespace std;
int main(){
int i=1,fact=1,num1;
cout<<"enter a number";
cin>>num1;
for(i=1;i<=num1;i++){
    fact= fact * i;
}
cout<<"the factorial of a number is = "<<fact<<endl;
return 0;
}
