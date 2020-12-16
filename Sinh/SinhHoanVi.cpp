#include<bits/stdc++.h>
using namespace std;
int a[100],t,n;
bool ok[100];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!ok[j]){
		a[i]=j;
		ok[j]=true;
		if(i==n){
			for(int k=1;k<=n;k++){
				cout<<a[k];
			}
			cout<<" ";
		}
		else
			Try(i+1);
		ok[j]=false;
	}
}	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		memset(a,0,sizeof(a));
		Try(1);
		cout<<'\n';
	}
	return 0;
}
