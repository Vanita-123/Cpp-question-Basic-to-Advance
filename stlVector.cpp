
// Vector
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.pop_back();
    vec.push_back(5);
// vec.emplace used to same purpose  push_back
vec.emplace_back(6);
vec.pop_back();
// index.size
cout <<"endl";
    cout <<"size of vector " <<vec.size();
    cout <<"size of capacity " <<vec.capacity();
    cout << endl;
    cout <<endl;
    for (int val : vec)
    {
        cout <<val <<" ";
    }
cout <<endl;
cout << " val at index " <<vec[0] <<vec.at(1) ;
    cout <<endl;

    cout << "front " <<vec.front();
    cout <<endl;
    cout <<"back" <<vec.back();
    return 0;
}



#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec ={1, 2 , 3 , 4 , 5};
    for (int val : vec)
    {
        cout <<val <<" ";
    }

    return 0;
}
//  output is 1, 2,3 ,4, 5



#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec (10, -1);
    for (int val : vec)
    {
        cout <<val <<" ";
    }

    return 0;
 }

// intialize of vector

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec1{1,2,3,4,5,6};
    vector<int>vec2(vec1);
    for (int val : vec2)
    {
        cout <<val <<" ";
    }

    return 0;
}





// vector function


#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec{1,2,3,4,5,6};
    // vec.erase(vec.begin());  // 0 index value removed
    // vec.erase(vec.begin() +2);  //  index value removed  in this case  before is removed any start with to again 0 index
     vec.erase(vec.begin() +1 , vec.begin()+3);
    for (int val : vec)
    {
        cout <<val <<" ";
    }

    return 0;
}