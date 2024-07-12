//largest element in array?

#include<bits/stdc++.h>
using namespace std;
//Bruteforce ,TC->(NlogN), SC->O(1)
void largestElement1(int arr[],int n){
  sort(arr,arr+n);
  cout<<arr[n-1];
}

//Optimal ,TC->O(N),SC->O(1)
void largestElement2(int arr[],int n){
    int res =arr[0];
    for(int i=1;i<n;i++){
        if(res<arr[i])
            res=arr[i];
    }
    cout<<res;
}

int main(){
 int n; cin>>n;
 int arr[n];for(int i=0;i<n;i++) cin>>arr[i];
 largestElement1(arr,n);//Bruteforce
 largestElement2(arr,n);//Optimal
   
 return 0;
}