#include <iostream>
using namespace std;
int main()
{
    char color;
    cout<<"Enter Current light:"; 
    cin>>color;
    int time;
    cout<<"Enter Remaining time:";
    cin>>time;
    cout<<"Countdown:";
    for(int i=time;i>=0;i--){
        cout<<i<<" ";
    }
    cout<<endl;
    if(color=='G'||color=='g'){
        cout<<"GREEN light"<<endl;
        cout<<"YELLOW light activated for 5 seconds"<<endl;
        cout<<"RED light will activate after 5 seconds"<<endl;

        
    }
    else if(color=='Y'||color=='y'){
        cout<<"YELLOW light"<<endl;
        cout<<"RED light activated for 30 seconds"<<endl;
        cout<<"GREEN light activated for 30 seconds"<<endl;
    }
    else if(color=='R'||color=='r'){
        cout<<"RED light"<<endl;
        cout<<"GREEN light will activated for 45 seconds"<<endl;
        cout<<"Yellow light will activate after 45 seconds"<<endl;
    }
    else{
        cout<<"ENTER A VALID COLOR FOR TRAFFIC LIGHT";
    }





}