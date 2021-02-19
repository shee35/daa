#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int a[n+1];
	 srand(time(0));
	  priority_queue<long long int>mx;
	  priority_queue<long long int,vector<long long int>,greater<long long int> > mn;
	 for(long long int i=0; i<n; i++){
	 	long long int k=(rand() % 10000000000) + 1;
	 	cout<<k<<" ";
	 	a[i]=k;
	 	mn.push(k);
	 	mx.push(k);
	 }
	 cout<<endl;
	 cout<<"Maximum element is "<<mx.top()<<endl<<"Minimum element is "<<mn.top()<<endl;
	 return 0;
}