#include<iostream>
#include<algorithm>
using namespace std;
bool ispossible(int stalls[],int size,int k,int mid){
    int cowcount=1;
    int lastpos=stalls[0];
    for(int i=0;i<size;i++){
        if(stalls[i]-lastpos>=mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            lastpos=stalls[i];
        }
    }
    return false;
}
int main(){

    int stalls[1000];
    int k;
    int size;

    cin>>size>>k;

    for(int i=0;i<size;i++){
        cin>>stalls[i];
    }
    sort(stalls,stalls+size);
    int s=0;
    int maxi=-1;
    for(int i=0;i<size;i++){
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(ispossible(stalls,size,k,mid)){
            ans =mid;
            s=mid+1;
        
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
cout<<ans<<endl;
return 0;
}