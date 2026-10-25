#include <iostream>
#include <string>
using namespace std;
int bainary_search(int arr[], int low, int high, int target){
    if (low>high){
        return -1;
    }
    else{
       int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
           return bainary_search(arr,low,mid-1, target);
        }
        else{
            return bainary_search(arr,mid+1,high,target);
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of elments in the array"<<endl;
    cin>>n;
    int* arr = new int[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    
    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;
    int low=0;
    int high= n-1;
    int result=bainary_search(arr,low,high,target);
    if(result==-1){
        cout<<"Number not present in the array"<<endl;
    }
    else{
        cout<<"THE INDEX OF "<<target<<" is "<<result<<endl;
    }
    return 0;
}