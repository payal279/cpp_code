#include <iostream>
using namespace std;
int main(){
    int rows,column;
    cin>>rows;
    cin>>column;
    const int max=100; 
    int arr[max][max];
    int sum =0;
    //input and sum of elements of matrices
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
            sum=sum+arr[i][j];
        }
    }
    //print matrices
    cout<<"print matrices:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"sum of matrices:"<<sum;

}
