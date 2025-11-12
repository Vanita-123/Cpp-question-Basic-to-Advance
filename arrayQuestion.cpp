// 1. Largest Element in Array



#include <iostream>
using namespace std;

int sum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i <n; i++)
    {
        sum +=arr[i];
        }
        return sum;
    
}
int main(){
    
    int arr[] ={2,4,5,6,7,2,33,44,13,67,49};
    int n = sizeof(arr)/sizeof(arr[0]);

    // int x = sizeof(arr);
    cout << sum(arr,n);


}

