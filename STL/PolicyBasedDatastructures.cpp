#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>

using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

int main()
{
    indexed_set s;
    s.insert(2);
    s.insert(3);
    s.insert(7);
    s.insert(4);
    s.insert(9);

    /* The set elements in sorted order are : 2, 3, 4, 7, 9.

     find_by_order(0) returns iterator to 2
     find_by_order(1) returns iterator to 3
     find_by_order(2) returns iterator to 4
     The function find_by_order returns an iterator to the element at an given position :
                                                        */

    auto x = s.find_by_order(2);
    cout << *x << "\n";
}