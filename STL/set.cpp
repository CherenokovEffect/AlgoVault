#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
      set :- A set is a datastructure that contains the collection of distint elements . The   basic
      operations of sets are element insertion , search and removal .


      The C++ standard library contains two implementations :
      1) The structure (set) is based on a balanced binary tree and its operations works in   O(logn)
      time . (Maintains order of  elements  and  provides  functions  that  are  not  availaable  in
      unordered_set )

      2) The structure (unordered_set) uses hashing and its operations work in O(1) time .(Effecient)

    */

    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);

    cout << s.count(3) << "\n"; // 1
    cout << s.count(4) << "\n"; // 0

    s.erase(3);
    s.insert(4);

    cout << s.count(3) << "\n"; // 0
    cout << s.count(4) << "\n"; // 1

    // [] -> can't be used access elements with indexing .

    set<int> st = {2, 5, 6, 8};
    cout << st.size() << "\n"; // 4
    for (auto x : st)
    {
        cout << x << "\n";
    }

    st.erase(2);
    st.erase(5);
    st.erase(6);
    st.erase(8);

    /*
    An important property of a set is that all their elements are distinct . Thus the function count
    always return either 0 (the element is not in set ) or 1 (the element is in the set ) , and  the
    function insert never adds an element to the set if it is already there . The   following   code
    illustrates this
    */

    st.insert(5);
    st.insert(5);
    st.insert(5);
    st.insert(5);

    cout << st.count(5) << "\n";

    /*
    C++ also contains multiset the structure multiset and unordered_multiset  that otherwise work like set and
    unordered_set but they can contain multiple instances of an element .
    */

    multiset<int> ms;
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);

    cout << ms.count(5) << "\n"; // 3

    // erase() :- erase on multiset removes all instances of that element .
    ms.erase(5);
    cout << ms.count(5) << "\n"; // 0

    // only one instance can be removed by following procedure

    ms.insert(5);
    ms.insert(5);
    ms.insert(5);

    ms.erase(ms.find(5));
    cout << ms.count(5) << "\n";

    // unordered_set

    unordered_set<int> ust ;
}