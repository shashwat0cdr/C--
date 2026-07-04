// library functions for char array are present in <cstring> header file.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[] = "Shagun";
    char b[100];

    strcpy(b, a); // copying a to b
    cout << "Copied string: " << b << endl;
    cout << "Length of string a: " << strlen(a) << endl;                     // getting length of string a
    cout << "String b after concatenation: " << strcat(b, " Gujrati") << endl; // concatenating " Gujrati" to string b
    cout << "Comparison of strings a and b: " << strcmp(a, b) << endl;       // comparing strings a and b
    cout << "Length of string b after concatenation: " << strlen(b) << endl; // getting length of string b after concatenation
    return 0;
}




// nature of strchamp 
// strcmp give -ve and 0 values when the char arrays are not same 
