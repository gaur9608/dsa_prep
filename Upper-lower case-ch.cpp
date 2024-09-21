#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch>='a' && ch<='z')// OR by ASCII value (97 to 122  ~ for samll letters ) OR (65 to 90 ~ for uppercase letter)
    {
        cout<<"Character is  of lower case";
    }else{
        cout<<"Character is of upper case";
    }
    
}
