#include<iostream>
using namespace std;
int main()
{
    int arr[] = {3,5,8,66,4,2,7,77};
    int n= sizeof(arr)/sizeof(arr[0]);
    int mx =  arr[0];
    for(int i=1;i<n;i++)
    {
      if(mx<arr[i]){
       mx=arr[i];
    }
    }
    cout<<"Maximum value = "<<mx;
    return 0;
}