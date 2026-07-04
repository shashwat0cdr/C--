// Strings :- strings are used for storing text. A string variable contains a collection of characters surrounded by double quotes

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{

    // declaration
    // string name;
    // name.push_back('a');
    // name.push_back('n');
    // name.push_back('c');
    // cout << name << endl;

    // // intialisation
    // string surname = "Gujrati";

    // // update
    // surname = "Ojha";

    // string str = "shashwat";
    // string temp = " gujrati";
    // str.insert(8, temp);
    // cout << str << endl;

    // cout << "length: " << str.length() << endl;
    string str = "statement";
    cout << str.substr(3, 5) << endl;
    string t = "Noise";
    if (str.compare(t) == 0)
    {
        cout << "strings are equal" << endl;
    }
    else
    {
        cout << "strings are not equal" << endl;
    }

    return 0;
}