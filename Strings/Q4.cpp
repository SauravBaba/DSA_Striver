//Find no. of unique elements in the sorted array and modified the array
#include<bits/stdc++.h>
using namespace std;

//Brute force TC->O(NlogN + N )  SC->O(N)
int modified1(int arr[] , int n){
   set<int>s;
   for(int i=0;i<n;i++)
       s.insert(arr[i]);
    
    int index=0;
    for(auto it : s){
        arr[index]=it;
        index++; 
    }   

    return index;
}

//Optimise TC-> O(n), SC->O(1)

int modified2(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[j]!=arr[i]){
            arr[j+1]=arr[i];
            j++;
        }
    } return j+1;

}


int main(){
 int n; cin>>n;
 int arr[n];for(int i=0;i<n;i++) cin>>arr[i];    

 //int size = modified1(arr,n);
 int size = modified2(arr,n);
 
 cout<<size<<endl;
 for(int i=0;i<size;i++) cout<<arr[i]<<" ";
 
 return 0;
}