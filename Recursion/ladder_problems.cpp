#include<iostream>
using namespace std;
int steps_count(int n,int k){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	int ans=0;
	for(int i=1;i<=k;i++){
	  ans+=steps_count(n-i,k);
	}
	return ans;
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<steps_count(n,k);
	return 0;
}