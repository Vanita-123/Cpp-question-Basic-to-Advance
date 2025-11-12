
// Simple Array   
#include <iostream>
using namespace std ;
int main(){
    int arr[5] ={1,2,3,4,5};
    
    for (int i = 0; i <= arr[i]-1; i++)
    {
        cout << arr[i] << " ";
    }
    
}


// sim[le code basic
#include <iostream>
using namespace std ;
int main(){
    int arr[5] ={1,2,3,4,5};
    cout << arr[0] << " ";
    cout << arr[1] << " ";
    cout << arr[2] << " ";
    cout << arr[3] << " ";
    cout << arr[4] << " ";
    
}




// size of array check
#include <iostream>
using namespace std ;
int main(){
    int arr[] ={1,2,3,4,5,56,3,3,35,5,6,2,2,1,23,4,556,6,6,65,5432,1,23,2,4,54,7,8,999,76,5,43,2,11,};
        // All are size of Array 
    int n = sizeof(arr);
        cout << n << " ";

    // check to single array size
    int m = sizeof(arr[0]);
    cout << m << " ";  
    // total size of array

      int j = sizeof(arr)/sizeof(arr[0]);
        cout << j << " ";
    
}


// function

#include <iostream>
using namespace std ;
int main(){
    int arr[20] ;
    int x =10;
    for (int i = 0; i <= arr[x]; i++)
    {
        cout << x << " ";
        int x =8;
        cout << x << "  ";
    }    
}  
// output is : 10, 




// function

#include <iostream>
using namespace std;

void function(){
    int arr[10];
    int x= 8;

}
int main(){
    int arr[20] ;
    int x =10;

        // cout << x << " ";
function();
    cout <<  x << " " <<x;  

}  



// change function`
#include <iostream>
using namespace std;

void change(int x){
x= 8;

}
int main(){
    int x =10;

        cout << x << " ";
change(x);
    cout <<  x << " " ;  

}  

// ouput is 10 10 because its do not change in value of x
