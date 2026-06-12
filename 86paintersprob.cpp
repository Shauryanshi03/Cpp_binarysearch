#include<iostream>
using namespace std;
bool ispossible(int arr[],int n, int k,int mid){
    int paintercount=1;
    int boardsum=0;
    for(int i=0;i<n;i++){
        if(boardsum+arr[i]<=mid){
            boardsum+=arr[i];
        }
        else{
            paintercount++;
            if(paintercount>k || arr[i]>mid){
                return false;
            }
            boardsum=arr[i];
        }
    }
    return true;
}

int main(){
    int n,k;
    int arr[1000];

    cin>>n>>k;

    int sum=0;
    int maxi=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    int s=maxi;
    int e=sum;
    int ans=-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(ispossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
