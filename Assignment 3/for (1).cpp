#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int a[n+1];
	 srand(time(0));
	 for(long long int i=0; i<n; i++){
	 	long long int k=(rand() % 10000000000) + 1;
	 	cout<<k<<" ";
	 	a[i]=k;
	 }
	 cout<<endl;
	long long int mx=LLONG_MIN,mn=LLONG_MAX;
	 for(int i=0; i<n; i++){
	 	if(a[i]>mx){
	 		mx=a[i];
	 	}
	 	if(a[i]<mn){
	 		mn=a[i];
	 	}
	 }
	 cout<<"Maximum element is "<<mx<<endl<<"Minimum element is "<<mn<<endl;
	 return 0;
}