#include <iostream>
#include <string>
using namespace std;
int main(){
int n,i;
string a[]={" ","one","two","three","four","five","six","seven","eight","nine"};
cout<<"enter n";
cin>>n;
for(i=1;i<=9;i++){
    switch(n){
        case i:
        cout<<a[i];
        break;
        default:
        cout<<"greater than 9";
        break;
    }
}
    return 0;
}
