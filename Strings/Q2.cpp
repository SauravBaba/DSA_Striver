#include<bits/stdc++.h>
using namespace std;

//Bruteforce ,TC->O(NlogN),SC->O(1)
void secondLargestElement1(int arr[],int n){
     sort(arr,arr+n);
     cout<<arr[n-2];

}

//Better, TC->O(2N),SC->O(1)
void secondLargestElement2(int arr[],int n){
    int firstlargest=arr[0];
    for(int i=1;i<n;i++){
        if(firstlargest<arr[i])
             firstlargest=arr[i];
    }
    int seclargest=INT_MIN;
    for (int i=0;i<n;i++)
    {
        if(firstlargest!=arr[i] && arr[i]>seclargest )
            seclargest=arr[i];
    }

    cout<<seclargest;   
}


//Optimal TC->o(N),SC->O(1)
void secondLargestElement3(int arr[],int n){
    int firstlargest=arr[0];
    int seclargest=INT_MIN;
    for(int i=1;i<n;i++){
        if(firstlargest<arr[i]){
             seclargest=firstlargest;
             firstlargest=arr[i];
             }else{
                if(firstlargest>arr[i] && seclargest<arr[i])
                    seclargest=arr[i];
             }
    }
    
    cout<<seclargest;   
}

int main(){
 int n; cin>>n;
 int arr[n];for(int i=0;i<n;i++) cin>>arr[i];
 //secondLargestElement1(arr,n);//Bruteforce
 //secondLargestElement2(arr,n);//Better
  secondLargestElement3(arr,n); 
 return 0;
}