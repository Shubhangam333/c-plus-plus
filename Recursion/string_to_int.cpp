#include<iostream>
#include<cstring>
using namespace std;
int string_to_int(char*a,int n){
	if(n==0){
		return 0;
	}
	int digit=a[n-1]-'0';
	int small_ans=string_to_int(a,n-1);
	return small_ans*10+digit;
}
int main(){
	char a[]="1234";
	int n=strlen(a);
	cout<<string_to_int(a,n)<<endl;
	return 0;
}