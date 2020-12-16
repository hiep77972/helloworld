#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			if(count(a+1,a+n+1,1)==k){
			for(int l=1;l<=n;l++){
				cout<<a[l];
			}
			cout<<'\n';
			}
		}
		else Try(i+1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		memset(a,0,sizeof(a));
		Try(1);
		cout<<'\n';
	}
	return 0;
}
