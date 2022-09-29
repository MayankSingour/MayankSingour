#include<iostream>
using namespace std;

void print(int arr[],int s, int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binarySearch(int arr[], int s, int e, int k){
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
      if(arr[mid]==k){
        return true;
      }

      if(arr[mid]>k){
        return binarySearch(arr,s,mid-1,k);
      }else{
        return binarySearch(arr,mid+1,e,k);
      }

}
int main(){
    int arr[10]= {10,11,12,13,4,8,6,8,78,98};
    int size = 10;
    int key = 78;
   

    bool ans = binarySearch(arr, 0, size-1, key);
    cout<<"Present or Not :"<<ans<<endl;
    return 0;
}
