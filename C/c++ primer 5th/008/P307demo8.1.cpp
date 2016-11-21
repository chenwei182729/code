#include <iostream>
#include <string>
#include <vector>

using namespace std;

istream& is_input(istream& in)
{
    string s;
    while (in >> s)
       cout << s << " ";
    return in;
 } 

 int main()
 {
    is_input(cin);
    return 0;
 }
