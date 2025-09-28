#include <iostream>
using namespace std;
int main(){
    int n1,n2,d1,d2;
    char choice;
    int numer,denom;
    cout<<"Enter the numerator and denominator of the first fraction: ";
    cin>>n1>>d1;
    cout<<"Enter the numerator and denominator of the second fraction: ";
    cin>>n2>>d2;
    cout<<"Choose operation (+, -, *, /): ";
    cin>>choice;
    switch (choice){
    case '+':{
        denom=d1*d2;
        numer=(n1*d2)+(n2*d1);
        break;}
    case '-':{
        denom=(d1*d2);
        numer=(n1*d2)-(n2*d1);
        break;}
    case '*':{
        numer=n1*n1;
        denom=d1*d2;
        break;}
    case '/':{
        numer=n1*d2;
        denom=d1*n2;
        break;}
    default:{
    cout<<"Invalid choice";
    return 0;}}
    int a = numer,b=denom;
    while(b!=0){
        int temp = b;
        b=a%b;
        a=temp;}
    if((numer%denom)==0)
    cout<<"Result: "<<(numer/denom);
    else
    cout<<"Result: "<<(numer/a)<<"/"<<(denom/a);
    return 0;
}