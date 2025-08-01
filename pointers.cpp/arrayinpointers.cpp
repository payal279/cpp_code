#include <iostream>
using namespace std;
int main()
{
    int arr[5]={5,4,3,2,1};
    int * ptr = arr;
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<" ";
    }

}