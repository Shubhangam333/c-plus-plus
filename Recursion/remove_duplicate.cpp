#include<iostream>
using namespace std;
void remove(char *a,char *b,int i,int j)
{
	if(a[i]=='\0'){
        b[j]='\0';
        cout<<b<<endl;
        return;
    }
    if(a[i]==a[i+1]){
        while(a[i]==a[i+1])
        {
            b[j]=a[i];
            i++;
        }
        remove(a,b,i+1,j+1);
    }
	else
	{
		b[j]=a[i];
		remove(a,b,i+1,j+1);
	}
}
int main() {
	char a[1000];
	cin>>a;
	char b[1000]="";
	remove(a,b,0,0);
	return 0;
}