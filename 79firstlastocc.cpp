#include<iostream>
using namespace std;

int firstocc(int a[],int n, int key){
    
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
    if(a[mid]==key){
        ans=mid;
        e=mid-1;
    }

    else if(a[mid]>key){
        e=mid-1;
    }

    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
}
    return ans;
}

int lastocc(int a[],int n, int key){
    
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
    if(a[mid]==key){
        ans=mid;
        s=mid+1;
    }

    else if(a[mid]>key){
        e=mid-1;
    }

    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
}
    return ans;
}

int main(){

    int even[5]={1,2,3,3,5};

    cout<<"first occurence of 3 is at index "<<firstocc(even,5,3)<<endl; 

     cout<<"last occurence of 3 is at index "<<lastocc(even,5,3); 

    return 0;

}