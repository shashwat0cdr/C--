#include <iostream>
using namespace std;

// char array :- is a squence of characters stored in a continous memory location, terminated by a null character '\0'.

// in this file we have seen declaration of char array, how to get length of char array, concatenation of char array, copying of char array and comparison of char array.

// int get_length(char arr[]){
//     int count = 0;
//     int index = 0;
//     for(int i=0; arr[i] != '\0'; i++){
//         count++;
//         index++;
//     }
//     return count;
//     return index;
// }

// void concatArray(char a[], char b[])
// {
//     int i = 0;
//     int j = 0;
//     while (a[i] != '\0')
//     {
//         i++;
//     }
//     while (b[j] != '\0')
//     {
//         a[i] = b[j];
//         i++;
//         j++;
//     }
//     a[i] = '\0';
// }

// void copyArray(char a[], char b[]){
//     int i = 0;
//     int j = 0;
//     while(a[i] != '\0'){
//         b[j] = a[i];
//         i++;
//         j++;
//     }
//     b[j] = '\0'; // Null terminate the copied string
// }

// void comparisonArray(char a[], char b[])
// {
//     int i = 0;
//     int j = 0;
//     while (a[i] != '\0' && b[j] != '\0')
//     {
//         if (a[i] != b[j])
//         {
//             cout << "Strings are not equal." << endl;
//             return;
//         }
//         i++;
//         j++;
//     }
//     if (a[i] == '\0' && b[j] == '\0')
//     {
//         cout << "Strings are equal." << endl;
//     }
//     else
//     {
//         cout << "Strings are not equal." << endl;
//     }
// }

int main()
{

    // declaration
    // char arr[10];
    // cout << arr[3] << endl; // garbage value
    // char arr[10] = "shashwat";
    // cout << arr[8] << endl;
    // int asciiValue = arr[8];
    // cout << "ASCII value of null character is: " << asciiValue << endl;

    // cout behaviour
    // int arr[10] = {1, 2, 3, 4, 5};
    // cout << arr << endl; // address of first element of array
    // char brr[10] = "shashwat";
    // cout << brr << endl; // prints the string till null character is encountered

    // commom operations
    // get length
    // char arr[10] = "shashwat";
    // cout << "Length of the string is: " << get_length(arr) << endl;

    // concatenation
    // char a[20] = "Shashwat";
    // char b[20] = " Gujrati";
    // concatArray(a,b);
    // cout << "After concatenation: " << a << endl;

    // copying
    // char a[20] = "Shashwat";
    // char b[20];
    // copyArray(a,b);
    // cout << "After copying: " << b << endl;

    // comparison
    // char a[20] = "Shashwat";
    // char b[20] = "Shashwat";
    // comparisonArray(a, b);

    return 0;
}