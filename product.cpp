//calculate the product of all elements in the array
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={3,6,8,5,3};
    int product=1;
    for(int i=0; i<5; i++)
    {
        product*=arr[i];
    }
    cout<<product<<endl;
}