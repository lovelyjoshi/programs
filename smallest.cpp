#include<iostream>
#include<climits>
using namespace std;
int  main()
{
    int nums[]={2,-4,5,8,25};
    int size=5;
    int smallest= INT_MAX;
    for(int i=0; i<size; i++){
        if(nums[i]<smallest)
        {
            smallest=nums[i];
        }
    }
        cout<<"smallest="<<smallest<<endl;
        return 0;
}
