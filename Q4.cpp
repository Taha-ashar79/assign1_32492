#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double N;
    cout<<"Enter a number (N): ";
    cin>>N;
    double a=0,b,m,fa,fm;
    if (N==0){
         cout<<"Square root of N: 0";
         return 0;}
    if (N<1)
    b=1;
    else
    b=N;
    m=(a+b)/2;
    fm=(m*m)-N;
    fa=(a*a)-N;
    while(fabs(fm)>=0.01){
        if(((fm>0)&&(fa>0))||((fm<0)&&(fa<0)))
        a=m;
        else
        b=m;
        m=(a+b)/2;
        fm=(m*m)-N;
        fa=(a*a)-N;}
    cout<<"Square root of N: "<<m;
 return 0 ;
}