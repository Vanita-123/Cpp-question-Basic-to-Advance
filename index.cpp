


// write a program in Hello world 
#include <iostream>
using namespace std;
int main()
{
cout << "Hello World ";
return 0;
}

// Q2. Write a `Program to Read and Print Number Input from the User.


#include <iostream>
using namespace std;
int main()
{
    int i ;
    cin >> i;
    cout << i;
return 0;
}




// Q3. Write a Program to Print the ASCII Value of a Character.


#include <iostream>
using namespace std;
int main()
{
    char c ='a';
    cout << c ;
    cout << " "  <<"ASSCII value is" <<" "  <<int(c);
return 0;
}

// Below is the C++ program to implement multiple inputs from the user:

#include <iostream>
using namespace std;
int main()
{
    string name;
    string age;
   cin >> name ;
   cin >> age ;
   cout << "name  : " << name  << " " <<endl;
   cout << "age" << age;
return 0;
}

// C++ Program To Print ASCII Value of a Character
//  This is type conversion 
#include <iostream>
using namespace std;
int main()
{
    // char c ='a';
    char c ;
    cin >> c;
    cout << c ;
    cout << " "  <<"ASSCII value is" <<" "  <<int(c);
return 0;
}






//  C++ program to print the ASCII value of each character in a string:
#include <iostream>
using namespace std;
int main()
{
    char ch, string[200] ="Vanita";
    int i =0, val; 
    while (string[i]){
        ch =string[i];
        val =ch;
        cout << ch << val <<endl;
        i++;
    }
return 0;
}



// Below is the C++ program to print the ASCII value of all the characters:
#include <iostream>
using namespace std;
int main()
{
    char ch;
   for ( ch = 'A'; ch <= 'Z'; ch++)
   {
 cout <<ch  <<int(ch) <<" ";
}
// small alphabate
  for ( ch = 'a'; ch <= 'z'; ch++)
   {
 cout <<ch   <<int(ch) <<" ";
}
   
return 0;
}



//Q4. Write a Program to Swap Two Numbers.

#include <iostream>
using namespace std;
int main()
{
   
    int a =10;
    int b= 20;
    cout << "before swapping" <<endl <<"a = " << a   <<endl <<"b = " <<b <<endl ;
    int temp;
    temp =a;
    a=b;
    b=temp;
    cout << "After swapping" <<endl ; 
    cout <<"b = " << " " <<b << endl;
    cout  << "a = " << " " <<a;
return 0;
}

// C++ Program to Swap Two Numbers Without Using a Temporary Variable.


#include <iostream>
using namespace std;
int main()
{
    int a =10;
    int b= 20;
    cout << "before swapping" <<endl <<"a = " << a   <<endl <<"b = " <<b <<endl ;
    b = a+b;
    cout << "b :=" <<b <<endl;
    a =b-a;
    cout << "a final :=" <<a <<endl;
    b=b-a;
    cout << "b final :=" <<b <<endl;
    cout << "After swapping" <<endl ; 
    cout  << "a = " << " " <<a  <<endl;
    cout <<"b = " << " " <<b << endl;
return 0;
}



// Swap Two Numbers Using Inbuilt Function


#include <iostream>
using namespace std;
int main()
{
    int a =10;
    int b= 20;
    cout << "before swapping" <<endl <<"a = " << a   <<endl <<"b = " <<b <<endl ;
  swap(a,b);
    cout  << "a = " << " " <<a  <<endl;
    cout <<"b = " << " " <<b << endl;
return 0;
} 






