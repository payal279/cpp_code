//unique_ptr
// #include <iostream>
// #include <memory>
// using namespace std;
// int main() {
//     unique_ptr<int> p1(new int(42));
//     cout << "Number: " << *p1 << endl;
// return 0;
// }



//shared_ptr
#include <iostream>
#include <memory>
using namespace std;
int main() {
shared_ptr<int> p1(new int(99));
shared_ptr<int> p2 = p1;
cout << "p1: " << *p1 << ", p2: " << *p2 << endl;
cout << "Count: " << p1.use_count() <<endl; // total count of shared pointers owners
return 0;
}


