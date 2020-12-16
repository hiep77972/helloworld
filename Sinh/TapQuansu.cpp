#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
int ok[100];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int dem=0;
		cin>>n>>k;
		memset(a,0,sizeof(a));
		memset(ok,0,sizeof(ok));
		for(int i=1;i<=k;i++){
				cin>>a[i];
				ok[a[i]]=1;
		}
	
		int i=k;
		while(i>0 && a[i]==n-k+i) i--;
		if(i<=0) cout<<k;
		else{
			a[i]+=1;
		
			for(int j=i+1;j<=k;j++)
				a[j]=a[j-1]+1;
			for(int j=1;j<=k;j++)
			ok[a[j]]=0;
		cout<<count(ok,ok+100,1)<<'\n';
	} 
}
	return 0;
}
