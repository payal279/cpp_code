// nXn pattern

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// }

//OUTPUT= * * 
//        * *

//nXn-1 pattern

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// }
//OUTPUT- * * 
//        * *
//        * *
//n-1Xn pattern


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//OUTPUT- * * *
//        * * *
