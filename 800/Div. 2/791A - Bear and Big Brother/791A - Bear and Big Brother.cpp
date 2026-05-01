#include<iostream>
#include<string>
using namespace std;

int main(){
    int a,b,yr;
    cin>> a>>b;
    yr=0;

    while(a<=b){

        a*=3;
        b*=2;
        yr++;
    }
    cout<<yr;

}
