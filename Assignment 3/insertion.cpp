#include<bits/stdc++.h>
using namespace std;
void insertionSort(long long int arr[], long long int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
void answer(long long int A[], long long int size)
{
     cout<<"Maximum element is "<<A[size-1]<<endl<<"Minimum element is "<<A[0]<<endl;
}
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
	 insertionSort(a,n);
    answer(a,n);
    return 0;
	 
}