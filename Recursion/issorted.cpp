#include<iostream>
#include<algorithm>
using namespace std;
bool isSorted(int*a,int n){
    if(n==0 or n==1){
        return true;
    }
    if(a[0]<=a[1] and isSorted(a+1,n-1)){
        return true;
    }
    return false;
}
int main() {
	int n;
    cin>>n;
    int a[1000000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(isSorted(a,n)){
        cout<<"true";
    }else{
        cout<<"false";
    }
	return 0;
}