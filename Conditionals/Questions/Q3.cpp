#include <iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the cost price : ";
    cin>>cp;
    int sp;
    cout<<"Enter the selling price : ";
    cin>>sp;
    if (cp<sp){
        cout<<"You get profit";
        cout<<"Your profit is "<<(sp-cp);
    }
    else if(cp>sp){
        cout<<"You get loss";
        cout<<"Your loss is "<<(cp-sp);
    }
    else{
        cout<<"You get neither profit nor loss";
    }
    
}