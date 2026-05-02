#include<iostream>
using namespace std;

int binarysearch(int a[],int n, int key){

    int start=0;
    int end=n-1;
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
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int evenindex=binarysearch(even,6,12);
    cout<<"index of 12 is "<<evenindex<<endl;
    int oddindex=binarysearch(odd,5,8);
    cout<<"index of 8 is "<<oddindex<<endl;

    return 0;
}