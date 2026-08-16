#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if(age<12){
        cout<<"you are child"<<endl;
    }
    else if(age<18)
    {
        cout<<"you are teenager"<<endl;
    }
    else
    {
        cout<<"you are adult"<<endl;
    }
    return 0;
}