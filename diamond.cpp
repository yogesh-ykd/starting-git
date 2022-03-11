#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int n1=(n+1)/2;
	int n2=n1-1;
	
	
	int i=1;
	while(i<=n1){
		int j=1;
		while(j<=n1-i){
			cout<<" ";
			j++;
		}
		int k=1;
		while(k<=i+i-1){
			cout<<"*";
			k++;
		}
		cout<<endl;
		i++;
	}
	
	int l=n2;
	while(l>=1){
		int m=1;
		while(m<=n2-l+1){
			cout<<" ";
			m++;
		}
		int o=1;
		while(o<=l+l-1){
			cout<<"*";
			o++;
		}
		cout<<endl;
		l--;
	}
	
	return 0;
}
