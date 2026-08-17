#include<iostream>
using namespace std;
int main()
{
    int x;
    int n;
    int arr[]={3,45,67,5,6,-2,8,6};
    cout<<"enter the element you want to search";
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x){
            flag=true;
            break;
        }
    }
        if(flag==true)
        {
            cout<<x<<"is present";
        }
        else{
            cout<<x<<"is not present";
        }
    
    return 0;
     
}
