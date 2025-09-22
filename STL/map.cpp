#include <bits/stdc++.h>

using namespace std;

int main()
{
   /*
     Map structures
     A map is a generalized array that consists of kkey value pairs . While the keys in ordinary array are
     always  the consecutive integers  0,1,....,n-1 , where n is the size of the array , the keys of a map
     can be of any datatype and they do not have to be consecutive values .

     The C++  standard library contains two map implementations that corresponds to the set implementation
     : the structure map is based on a balanced binary tree and accessing elements takes O(logn) time ,while
     the structure unordered_map uses hashing and accessing elements takes O(1) time on average .

   */

   map<string, int> m;
   m["Monkey"] = 4;
   m["Banana"] = 3;
   m["Harpsichord"] = 9;

   cout << m["Banana"] << "\n"; // 3

   /*
   If the value of a key is requested but the map does not contain it , the key is automatically added to the
   map with the default value .
   */

   cout << m["JuniperBerries"] << "\n"; // 0

   // The function count check if the key exists in the map

   if (m.count("JuniperBerries"))
   {
      cout << "Key exists ." << "\n";
   }

   // Printing all the key value pairs

   for (auto x : m)
   {
      cout << x.first << " " << x.second << "\n";
   }
}