#include<iostream>
using namespace std;

int getpivot(int arr[], int n){

    int s=0;
    int e=n-1;
    int mid=s=(e-s)/2;

    while(s<e){

        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int binarysearch(int a[],int s,int e, int key){

    int start=s;
    int end=e;
    int mid=start+(end-start)/2;

    while(start<=end){

        if(a[mid]==key){
            return mid;
    }
     if(key>a[mid]){
        start=mid+1;
    }
     else{
        end=mid-1;
    }

    mid=start+(end-start)/2;
}
return -1;
}


int main(){

    int k=3;
    int n=5;
    int arr[5]={7,8,1,3,5};
    int pivot=getpivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
     cout<<binarysearch(arr,pivot,n-1,k);
}   

    else{
      cout<< binarysearch(arr,0,pivot-1,k);
    }
}