#include<iostream>
#include<stack>
using namespace std;
void transfer(stack<int>&s1,stack<int>&s2,int n){
	for(int i=0;i<n;i++){
		s2.push(s1.top());
		s1.pop();
	}
}
void reverse(stack<int>&s1){
stack<int> s2;
int n=s1.size();
for(int i=0;i<n;i++){
	int x=s1.top();
	s1.pop();
	transfer(s1,s2,n-i-1);

	s1.push(x);

	transfer(s2,s1,n-i-1);
}
}
int main(){
	stack<int> s1;
	
	for(int i=0;i<5;i++){
		s1.push(i);
	}
	
	// while(!s1.empty()){
	// 	cout<<s1.top()<<endl;
	// 	s1.pop();
	// }
	reverse(s1);
	while(!s1.empty()){
		cout<<s1.top()<<endl;
		s1.pop();
	}
	return 0;
}