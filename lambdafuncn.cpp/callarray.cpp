#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,2,3,4,5};
    auto fun=[](int arr[], int size) {
        for(int i=0;i<size; i++) {
            if (arr[i]%2==0) {
                cout<<arr[i]<<" ";
            }
        }
    };
    fun(arr,5);
    return 0;
}
