#include<iostream>
using namespace std;
int main(){//Calculating simple interest  
    float p,r,t,I;
    p = 1000;
    r = 2;
    t = 5;
    I = (p*r*t)/100;
    cout<<"The Interest of "<<p<<" in "<<t<<" years is "<<I;
}