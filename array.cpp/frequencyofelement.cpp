#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if (arr[j]>arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                count=count+1;
            }
        }
        cout<<arr[i]<<":"<<count;
        cout<<endl;
    }
}