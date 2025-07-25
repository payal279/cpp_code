#include <iostream>
using namespace std;
double totalbankbalance = 50000;
static int transaction = 0;
void depositemoney(double& accountbalance, double amount) {
    accountbalance = accountbalance+amount;
    totalbankbalance += amount;
    transaction++;
    cout << "After deposit of:" << amount << endl;
    cout << "Account Balance:" << accountbalance << endl;
    cout << "Total Bank Balance:" << totalbankbalance << endl;
    cout << "Total Transactions:" << transaction << endl;
}
void withdrawmoney(double& accountbalance, double withdrawamount) {
    if(withdrawamount<=accountbalance){
    accountbalance -= withdrawamount;
    totalbankbalance -= withdrawamount;
    transaction++;
    cout << "After withdraw of:" << withdrawamount << endl;
    cout << "Account Balance:" << accountbalance << endl;
    cout << "Total Bank Balance:" << totalbankbalance << endl;
    cout << "Total Transactions:" << transaction << endl;}
    else{
        cout<<"insufficient balance to withdraw";
    }
}
void displayBalance(double accountbalance) {
    cout << "Current Account Balance:" << accountbalance << endl;
    cout << "Current Total Bank Balance:" << totalbankbalance << endl;
}
int main() {
    double accountbalance;
    cout << "Enter initial account balance:";
    cin >> accountbalance;
    double amount;
    cout << "Enter amount to deposit:";
    cin >> amount;
    depositemoney(accountbalance, amount);
    double withdrawamount;
    cout << "Enter amount to withdraw:";
    cin >> withdrawamount;
    withdrawmoney(accountbalance, withdrawamount);
    displayBalance(accountbalance);

    return 0;
}
