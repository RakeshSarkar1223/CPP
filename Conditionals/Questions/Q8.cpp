#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    char z;
    cout<<"Enter the second number : ";
    cin>>z;
    if (z =='+'){
        cout<<x+y;
    }
    else if(z == '-'){
        cout<<x-y;
    }
    else if(z == '*'){
        cout<<x*y;
    }
    else if (z == '/'){
        cout<<x/y;
    }
    else {
        cout<<"Invalid Syntax";
    }
}