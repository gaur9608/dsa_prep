#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter marks";
    cin>>m;
    if (m>=90)
    {
        cout<<"A";
    }else if (m>=80 && m<90)
    {
        cout<<"B";
    }else if (m<80)
    {
        /* code */
        cout<<"C";
    }
    else
    {
        /* code */
        cout<<"Fail";
    }
    
    
return 0;
}
