#include<iostream>
using namespace std;
int main()
{
    int x = 45;
    float y = 3.3;
    int *ptr= &x;
    cout<< ptr <<"\n";
    float *ptrx= &y;
    cout<< ptrx <<"\n";
    return 0;
}