#include<bits/stdc++.h>
using namespace std;
int a[100],n,t;
int main(){
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int i=n-1;
		while(i>0 && a[i]>a[i+1]) i--;
		if(i<=0){
			for(int i=1;i<=n;i++){
				cout<<i<<" ";
			}
		}
		else{
			int k=n;
			while(a[k]<a[i]) k--;
			swap(a[k],a[i]);
			int left=i+1,right=n;
			while(left<right){
				swap(a[left],a[right]);
				left++;
				right--;
			}
			for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		}
		cout<<'\n';
	}
	
	return 0;
}
