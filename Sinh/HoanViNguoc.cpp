#include<bits/stdc++.h>
using namespace std;
int a[100],t,n;
vector<vector<int> >b;
bool ok[100];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!ok[j]){
			a[i]=j;
			ok[j]=true;
		if(i==n){
			vector<int>c;
			for(int k=1;k<=n;k++){
				c.push_back(a[k]);
			}
			b.push_back(c);
		}
		else Try(i+1);
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
		for(int i=b.size()-1;i>=0;i--){
			for(int j=0;j<b[i].size();j++){
				cout<<b[i][j];
			}
			cout<<" ";
		}
		memset(ok,false,sizeof(ok));
		b.clear();
		cout<<endl;
	}
	return 0;
}
