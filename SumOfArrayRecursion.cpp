#include<iostream>
using namespace std;
int getSum(int arr[], int size){
    if(size==0){
        return 0;
    }
    if(arr[0]==1){
        return arr[0];
    }
    else{
        int remainingPart = getSum(arr+1, size - 1);
        int sum = arr[0]+ remainingPart;
        return sum;
    }
    
    
}
int main(){
    int arr[5]={10,12,13,45,80};
    int size = 5;
   int sum = getSum(arr,5);
   cout<<"The sum of  an  array is :"<<sum<<endl;
   
    return 0;
}
