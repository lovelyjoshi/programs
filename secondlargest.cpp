//find second largest element in array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,5,7,9,8,6,6,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx=INT_MIN;
    int smx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(mx<arr[i])
        {
            mx=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(smx<arr[i]&&arr[i]!=mx)
        {
            smx=arr[i];
        }
    }
    cout<<mx<<" "<<smx<<endl;
    return 0;
}