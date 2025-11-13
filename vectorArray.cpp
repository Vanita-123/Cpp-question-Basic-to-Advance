#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout <<"enter the array" << " "; 
    cin >> n ;
    vector<int> arr(n);
    for (int i = 0; i <n ; i++)
    {
cin >>arr[i];
    };
     for (int i = 0; i <n ; i++)
    {
cout<< arr[i] << "  ";
    };
}





// reverse order

#include <iostream>
using namespace std;
int main(){  
    int arr[] ={10,20,30,40,50};
    int n =sizeof(arr)/sizeof(n);
    for(int i=0 ; i<n; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
    int rev[n];
    for(int i=0 ; i< n; i++){
        rev[i] = arr[n-1-i];
    }
    for(int i =0 ; i< n; i++){
        cout << rev[i] << " ";
    }
    cout <<endl;
}