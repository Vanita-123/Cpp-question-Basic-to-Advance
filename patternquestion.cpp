

// Square pattern in number form

#include <iostream>
using namespace std;
int main()
{
    int n =4;

   for ( int i = 1  ; i <=n; i++)
   {
    //    cout << i << "";
       for ( int j = 1; j <=n; j++)
       {
        //    cout  << j  << " ";
           cout <<"*"  << " ";
           
        }
cout <<endl; 
}
   
return 0;
} 



// Square pattern in character form

#include <iostream>
using namespace std;
int main(){
int n = 4 ;

   for(int i =0 ; i <n  ; i++)
   {
    char ch ='A';
    for (int j =0 ; j<n; j++){
        cout << ch;
        ch = ch +1;
    }
    cout << endl;
}
return 0;
}


//  Square pattern in countinues no . for example 123 456 789
#include <iostream>
using namespace std;
int main(){
int n = 4 ;

int num =1; 
   for(int i =0; i < n; i++)
   {
    
        for (int j= 0; j < n; j++){

            cout << num <<" ";
            num++;
            
        }
        
        cout << endl;
    }
return 0;
}



// triangle pattern



#include <iostream>
using namespace std;
int main(){
int n = 4 ;

   for(int i =0; i < n; i++)
   {
    
        for (int j= 0; j < i+1; j++){

            cout << j <<" ";

            
            
        }
        
        cout << endl;
    }
return 0;
}




// Triangle star pattern
#include <iostream>
using namespace std;
int main(){
int n  ;
cin >>  n;

   for(int i =0; i < n; i++)
   {
    
        for (int j= 0; j < i+1; j++){

            cout << "*" <<" ";

            
            
        }
        
        cout << endl;
    }
return 0;
}






// pattern in  output is 1 22 333 444

#include <iostream>
using namespace std;

int main (){
  int n =4;
  for (int i = 0; i < n; i++)
  {
for (int j = 0; j < i+1; j++)
{
cout << i+1;
}
cout <<endl;
  }
    return 0;
}



// pattern in character output is A , BB, CCC, DDDD

#include <iostream>
using namespace std;

int main (){
    int n =4;
    char ch ='A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
                        
        }
        cout<<endl;
        ch = ch +1;
        
    
    }
    return 0;
}


// patern question 1, 12 , 123, 1234
#include <iostream>
using namespace std;

int main (){
    int n =4;
    
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
                        
        }
        cout <<endl;       
    
    }
    return 0;
}




// reverse triangle
#include <iostream>
using namespace std;

int main (){
    int n =4;
    
    for (int i = 0; i <= n; i++)
    {
        for (int j = i+1; j >0; j--)
        {
            cout << j;
                        
        }
        // cout<< i;
        cout <<endl;       
    
    }
    return 0;
}



// Floyd's Triangle

#include <iostream>
using namespace std;

int main (){
    int n =4;
    int num =1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = i+1; j >0; j--)
        {
            cout << num  << " ";
             num++;
                        
        }
        // cout<< i;
        cout <<endl;       
    
    }
    return 0;
}



// Floyd's Triangle character A BC DEF 

#include <iostream>
using namespace std;

int main (){
    int n =4;
    char ch ='A';
    for (int i = 0; i <= n; i++)
    {
        for (int j = i+1; j >0; j--)
        {
            cout << ch  << " ";
             ch++;
                        
        }
        // cout<< i;
        cout <<endl;       
    
    }
    return 0;
}



// Floyd's reverse Triangle character A BA CBA

#include <iostream>
using namespace std;
int main (){
    int n =4;
    for (int i = 1; i <= n; i++)
    {
        char ch ='A'+ i-1;
        for (int j = i; j >=1; j--)
        {
            cout << ch  << " ";
            
            ch--;
        }
        // cout<< i;
        cout <<endl;  
    }
    return 0;
}



// Inverted pattern
#include <iostream>
using namespace std;
int main (){
    int n =4;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <i; j++)

        {
        cout <<" ";
        }
        for (int j = 0; j <n -i; j++)
        {
        cout << (i+1);
        }
        
        // cout<< i;
        cout <<endl;  
    }
    return 0;
}


// Inverted reverse triangle
#include <iostream>
using namespace std;
int main (){
    int n =4;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <i; j++)

        {
        cout <<" ";
        }
        for (int j = 0; j <n -i; j++)
        {
        cout << (i+1)  << " ";
        }
        
        // cout<< i;
        cout <<endl;  
    }
    return 0;
}



// Pyramid Pattern

#include <iostream>
using namespace std;
int main (){
    int n =4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n-i; j++)

        {
        cout <<" ";
        }
        for (int j = 1; j <=i; j++)
        {
        cout << j  << " ";
        }
        for (int j = i-1; j >=1; j--)
        {
            cout  <<j << " ";
                }
        
        
        cout <<endl;  
    }
    return 0;
}





// Hollow Diamond Pattern

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Top half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        cout << "*";
        if (i != 1) {
            for (int j = 1; j <= 2*i - 3; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        cout << "*";
        if (i != 1) {
            for (int j = 1; j <= 2*i - 3; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
