//Find the largest element in an array
#include<iostream>
using namespace std;

int findMax(int arr[], int n){
    int maxElements = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > maxElements){
            maxElements = arr[i];
        }

    }
    return maxElements;

}

int main(){
    int arr[] = {1,2,3,25,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxElements = findMax(arr, n);
    cout<<maxElements<<endl;
    return 0;

}