#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[i]);{
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Largest element:"<<arr[0]<<endl;
    cout<<"smallest element:"<<arr[n-1];

    
}