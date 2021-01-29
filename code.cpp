#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the size of matrix (length and breadth)\n";
    cin>>n>>m;
    int a[n+2][m+2];
     srand(time(0));
     
    cout<<"\nThe matrix generated is: \n";
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
        	int k = 10 + rand() % ((100) - 10);
            a[i][j] = k;
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    cout<<"\nTHE FREQUENCY DISTRIBUTION IS AS FOLLOWS:\n\n";
   vector<vector<pair<int,int> > >v(1004);
    int freq[10004];
   for(int i=0; i<10004; i++)
   freq[i]=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            freq[a[i][j]]++;
            v[a[i][j]].push_back(make_pair(i,j));
        }
    }
    for(int i=0; i<=1000; i++){
        if(freq[i]){
            cout<<"frequency of "<<i<<"->"<<freq[i]<<" "<<"and"<<" "<<"locations are"<<"->";
            for(int j=0; j<v[i].size(); j++){
                cout<<"("<<v[i][j].first<<","<<v[i][j].second<<")"<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
