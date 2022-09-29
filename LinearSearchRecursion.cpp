#include<iostream>
using namespace std;
bool linearSearch(int arr[], int size,int k){
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1, size - 1,k);
        return remainingPart;
    }
    
    
}
int main(){
    int arr[5]={10,12,13,45,80};
    int size = 5;
    int key = 80;
    bool ans = linearSearch(arr,5,key);
    if(ans){
        cout<<"Key is Present "<<endl;
    }else{
        cout<<"Key is Absent"<<endl;
    }
    return 0;
}
