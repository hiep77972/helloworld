#include<bits/stdc++.h>
using namespace std;
int a[100],n,k,t;
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			for(int m=1;m<=k;m++){
				cout<<a[m];
			}
			cout<<" ";
		}
		else Try(i+1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>k;
		memset(a,0,sizeof(a));
		Try(1);
		cout<<'\n';
	}
	return 0;
}
