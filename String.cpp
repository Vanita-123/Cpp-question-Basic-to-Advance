#include <iostream>
#include <cstring>
using namespace std ;


int main(){
    char str[] ="hello";
    // char str[]= {'a', 'b' ,'c' ,'\0'};
    cout << strlen(str) <<endl;
    cout << str[3] <<endl;



    // getline
    char str1[100];
    cout << "Enter the array :" ;
    cin.getline(str1 ,100 ,'$');
    cout <<"output  : " <<str1;




    char str2[12];
    cout <<"enter the char array" ;
    cin.getline(str,12);
    cout << "string" << endl;
    for (char ch :str){
        cout  <<ch << " ";
    }



    // opertors in string
    string str3 = "hello";
    string str4 = "world";
    cout << str3 + str4 << endl;
   cout << str3 + str4 << endl;
cout << (str3 != str4) << endl;
cout << (str3 < str4) << endl;

    return 0;
}