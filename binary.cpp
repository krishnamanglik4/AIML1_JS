#include<iostream>
using namespace std;
int main(){

    // dec to binary
    int dec,rem,ans=0,pow=1;
    cout<<"enter the number: "<<endl;
    cin>>dec;
    while(dec>0){
        rem=dec%2;
        dec/=2;
        ans+=rem*pow;
        pow*=10;
    }
    cout<<"binary number: "<<ans;
}