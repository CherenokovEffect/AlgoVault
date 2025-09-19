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
    for (auto x : v)
    {
        cout << x << "\n";
    }

    // function  back() :- function back returns the last element in the vector .
    // function  pop_back() :- function pop_back removes the last element from the vector .

    cout << v.back() << "\n"; // 5
    v.pop_back();
    cout << v.back() << "\n"; // 2

    // Declaring a vector of five elements

    vector<int> funf = {1, 2, 3, 4, 5};

    for (auto it : funf)
    {
        cout << it << "\n";
    }


    // Initializing a vector of certain size .
    vector<int> primes(5);

    primes[0] = 2;
    primes[1] = 3;
    primes[2] = 5;
    primes[3] = 7;
    primes[4] = 11;

    for (int i = 0; i < primes.size(); i++)
    {
        cout << primes[i] << "\n";
    }
    // Initializing a vector of certain size along with the initial values for each element .

    vector<int> redundant(10, 5);

    for (int i = 0; i < redundant.size(); i++)
    {
        cout << redundant[i] << "\n";
    }

    // The internal implementation of vector uses an ordinary array . If the size of the vector increases and 
    // becomes too small , a new array is allocated and all the elements are moved to the new array . However
    // this does not happen often and average time complexity of push_back is O(1) .
}