#include<iostream>
using namespace std;

int peakindex(int a[],int n){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;

while(s<e){
    if(a[mid]<a[mid+1]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=s+(e-s)/2;
}
    return s;
}

int main(){

    int arr[4]={0,10,5,2};

    cout<<"peak index is "<<peakindex(arr,4);
}