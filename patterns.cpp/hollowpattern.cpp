#include <iostream>
using namespace std;
int main()
{
    int n;//rows
    cin>>n;
    int m;//columns
    cin>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0||i==n-1||j==0||j==m-1){
            cout<<"*";}
            else{
                cout<< " ";
            }
        }
        cout<<endl;
    }
}