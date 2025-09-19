#include <bits/stdc++.h>

using namespace std;

int main()
{
    // string :- The string structure is also like the dynamic array that can be used almost like a vector .
    // "+" :- Two strings can be concatenated/combined by the use of + symbol , string1 + string2 = string3.
    // function substr(k,x) :-  Returns  the  substring  that  begins  at  position  k  and  has  length x .
    // function find(t) :-   finds   the   position   of   the   first   occurence   of   a   substring  t .

    string difficult = "DFTFFT";
    difficult += "NTT";
    cout << difficult << "\n";

    string fft = difficult.substr(3, 3);
    cout << fft << "\n";

    int position = difficult.find("NTT");
    cout << position << "\n";
}