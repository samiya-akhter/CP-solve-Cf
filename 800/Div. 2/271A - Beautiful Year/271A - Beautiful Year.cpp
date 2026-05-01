#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c,d,nxt;
    while(1){
    n+=1;
    a= n%10;
    b= (n/10)%10;
    c= (n/100)%10;
    d= (n/1000)%10;

    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
        n=d*1000+c*100+b*10+a;
        break;
    }
}
    cout<<n;
}
