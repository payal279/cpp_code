#include<iostream>
using namespace std;
int main(){
    int n,var=0;
    cin>>n;
    int arr1[n][n],sum=0,sum2=0;
    cout<<"elements of array 1: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=arr1[i][j];
            }
            if(i+j==n-1){
                sum2+=arr1[i][j];
            }
        }
    }
 
    cout<<"Sum of 1st diagonal : "<<sum<<endl;
    cout<<"Sum of 2nd diagonal : "<<sum2<<endl;
}