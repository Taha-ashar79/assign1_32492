#include <iostream>
using namespace std;
int main(){
    int Num;
    cout<<"Enter an amount in figures: ";
    cin>>Num;
    while((Num >999999)||(Num<-999999)){
        cout<<"Invalid Entry! Re-enter amount.";
        cin>>Num;}
    if(Num==0){
    cout<<"In words: zero";
    return 0;}
    if (Num < 0) {
        cout << "In words: negative ";
        Num = -Num;}
    else {cout << "In words: ";}

    int l_half = Num / 1000; 
    int r_half = Num % 1000;
    int a = l_half/ 100;
    int b = (l_half % 100) / 10;
    int c = l_half % 10;

    if (a > 0) {
        switch (a) {
            case 1: cout << "One hundred "; break;
            case 2: cout << "Two hundred "; break;
            case 3: cout << "Three hundred "; break;
            case 4: cout << "Four hundred "; break;
            case 5: cout << "Five hundred "; break;
            case 6: cout << "Six hundred "; break;
            case 7: cout << "Seven hundred "; break;
            case 8: cout << "Eight hundred "; break;
            case 9: cout << "Nine hundred "; break;}}
    if (b == 1) { //special case for 10-19
        switch (c) {
            case 0: cout << "Ten "; break;
            case 1: cout << "Eleven "; break;
            case 2: cout << "Twelve "; break;
            case 3: cout << "Thirteen "; break;
            case 4: cout << "Fourteen "; break;
            case 5: cout << "Fifteen "; break;
            case 6: cout << "Sixteen "; break;
            case 7: cout << "Seventeen "; break;
            case 8: cout << "Eighteen "; break;
            case 9: cout << "Nineteen "; break; }} 
    else {
        switch (b) { 
            case 2: cout << "twenty "; break;
            case 3: cout << "thirty "; break;
            case 4: cout << "forty "; break;
            case 5: cout << "fifty "; break;
            case 6: cout << "sixty "; break;
            case 7: cout << "seventy "; break;
            case 8: cout << "eighty "; break;
            case 9: cout << "ninety "; break;}
        switch (c) {
            case 1: cout << "one "; break;
            case 2: cout << "two "; break;
            case 3: cout << "three "; break;
            case 4: cout << "four "; break;
            case 5: cout << "five "; break;
            case 6: cout << "six "; break;
            case 7: cout << "seven "; break;
            case 8: cout << "eight "; break;
            case 9: cout << "nine "; break;}}
    if(l_half>0)
    cout << "thousand ";
    int d = r_half / 100;
    int e = ( r_half% 100) / 10;
    int f = r_half % 10;
    if (d > 0) {
        switch (d) {
            case 1: cout << "one hundred "; break;
            case 2: cout << "two hundred "; break;
            case 3: cout << "three hundred "; break;
            case 4: cout << "four hundred "; break;
            case 5: cout << "five hundred "; break;
            case 6: cout << "six hundred "; break;
            case 7: cout << "seven hundred "; break;
            case 8: cout << "eight hundred "; break;
            case 9: cout << "nine hundred "; break;
        }
    }
    if (e == 1){
        switch (f) {
            case 0: cout << "ten "; break;
            case 1: cout << "eleven "; break;
            case 2: cout << "twelve "; break;
            case 3: cout << "thirteen "; break;
            case 4: cout << "fourteen "; break;
            case 5: cout << "fifteen "; break;
            case 6: cout << "sixteen "; break;
            case 7: cout << "seventeen "; break;
            case 8: cout << "eighteen "; break;
            case 9: cout << "nineteen "; break; }}
    else {
        switch (e) {
            case 2: cout << "twenty "; break;
            case 3: cout << "thirty "; break;
            case 4: cout << "forty "; break;
            case 5: cout << "fifty "; break;
            case 6: cout << "sixty "; break;
            case 7: cout << "seventy "; break;
            case 8: cout << "eighty "; break;
            case 9: cout << "ninety "; break;}
        switch (f) {
            case 1: cout << "one "; break;
            case 2: cout << "two "; break;
            case 3: cout << "three "; break;
            case 4: cout << "four "; break;
            case 5: cout << "five "; break;
            case 6: cout << "six "; break;
            case 7: cout << "seven "; break;
            case 8: cout << "eight "; break;
            case 9: cout << "nine "; break;}}
    return 0;}
