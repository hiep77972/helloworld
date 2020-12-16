#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		memset(a,0,sizeof(a));
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		int i=k;
		while(i>0 && a[i]==n-k+i) i--;
		if(i<=0){
			for(int i=1;i<=k;i++){
				cout<<i<<" ";
			}
		}
		else{
			a[i]+=1;
			for(int j=i+1;j<=k;j++){
				a[j]=a[j-1]+1;
			}
			for(int i=1;i<=k;i++)
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
