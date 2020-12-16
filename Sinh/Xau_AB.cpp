#include<bits/stdc++.h>
using namespace std;
int a[100],n,t;
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			for(int k=1;k<=n;k++){
			if(a[k]) cout<<'B';
			else cout<<'A';}
			cout<<" ";
		}
		else{
			Try(i+1);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		memset(a,0,sizeof(0));
		Try(1);
		cout<<'\n';
	}
	return 0;
}
