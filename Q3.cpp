#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive integer: ";
    cin>>num;
    while(num<0){
    cout<<"Invalid entry! enter a positive integer: ";
    cin>>num;}
    int div_sum=0;
    for(int i=1;i<=(num/2);i++){
        if ((num%i)==0)
        div_sum+=i;}
    if(num==div_sum)
    cout<<num<<" is a perfect number.";
    else
    cout<<num<<" is not a perfect number.";

    return 0;
}