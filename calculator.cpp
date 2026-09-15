#include<iostream>
using namespace std;
int main(){
    double a,b;
    cin>> a,b;
    cout<<"what do u wanna do:"<<endl;
    cout<<"1 - add"<<endl<<"2 - substract\n"<<" 3 - multiply\n"<<" 4- division\n ";
    int option;
    cin>>option;
    switch(option){
        case 1: add(a,b);
        case 2: sub(a,b);
        case 3: mul(a,b);
        case 4: div(a,b);
    }
}