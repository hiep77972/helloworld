#include<bits/stdc++.h>
using namespace std;
int t,n,a[100];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		string s="";
		cin>>n;
		cin>>s;
		for(int i=0;i<s.size();i++)
			a[i+1]=(int)(s[i]-'0');
		int i=s.size()-1;
		while(i>0 && a[i]>=a[i+1]) i--;
		cout<<n<<" ";
		if(i<=0) cout<<"BIGGEST";
		else{
			int k=s.size();
			while(a[k]<=a[i]) k--;
			swap(a[k],a[i]);
			int left=i+1,right=s.size();
			while(left<right){
				swap(a[left],a[right]);
				left++;
				right--;
			}
			for(int j=1;j<=s.size();j++){
				cout<<a[j];
			}
		}
		cout<<'\n';
	}
	return 0;
}
