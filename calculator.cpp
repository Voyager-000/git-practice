#include<iostream>
using namespace std;
double add(double a, double b){
    return a+b;
}
double sub( double a, double b){
    return a-b;
}
double mul( double a, double b){
    return a*b;
}
double div(double a, double b){
    return a/b;
}
int main(){
    double a,b;
    cin>> a>>b;
    cout<<"what do u wanna do:"<<endl;
    cout<<"1 - add"<<endl<<"2 - substract\n"<<" 3 - multiply\n"<<" 4- division\n ";
    int option;
    cin>>option;
    switch(option){
        case 1: cout<< add(a,b); break;
        case 2: cout<<sub(a,b); break;
        case 3: cout<<mul(a,b);break;
        case 4: cout<<div(a,b);break;
    }
}