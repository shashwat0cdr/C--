#include <iostream>
using namespace std;
/*
int main()
{
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Good" << endl;
        break;
    case 'C':
        cout << "Fair" << endl;
        break;
    case 'D':
        cout << "Poor" << endl;
        break;
    case 'F':
        cout << "Fail" << endl;
        break;
    }
    return 0;
}
*/

int main()
{
    int x = 10;
    int y = 20;
    int result = (x > y) ? x : y;
    cout << "The greater value is: " << result << endl;
    return 0;
}
