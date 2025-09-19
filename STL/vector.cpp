#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Dynamic array :-  A dynamic array is an array whose size can be changed during the execution of the program .
    // The  most popular  dynamic  array in  C++  is the vector structure which can be used like an ordinary array .
    // function push_back() :- function push_back  inserts  the  element  after  the  last  element  of  the  vector .
    vector<int> v;
    v.push_back(3); // [3]
    v.push_back(2); // [3,2]
    v.push_back(5); // [3,2,5]

    cout << v[0] << "\n"; // 3
    cout << v[1] << "\n"; // 2
    cout << v[2] << "\n"; // 5

    // function size() :- The function size returns number of elements in the vector .
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
    
    // A shorter way to iterate is 
    for(auto x : v){
        cout << x << "\n" ;
    }

    // function  back() :- function back returns the last element in the vector .
    // function  pop_back() :- function pop_back removes the last element from the vector .

    cout << v.back() << "\n" ; // 5
    v.pop_back() ;
    cout << v.back() << "\n" ; // 2

}