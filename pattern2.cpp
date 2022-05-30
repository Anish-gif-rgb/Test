#include <iostream>
using namespace std;
int main(){
	int j,k,l;
	for(j=0;j<=3;j++){
		for(k=0;k<=j;k++){
			cout<<" ";
		}
		for(l=4;l>j;l--){
			cout<<"*";
		}cout<<endl;
	}
	return 0;
}
