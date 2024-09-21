#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch>='a' && ch<='z')
    {
        cout<<"Character is  of lower case";
    }else{
        cout<<"Character is of upper case";
    }
    
}
