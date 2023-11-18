/*
Write a in C++ program to check the upper and lower limits of integers.
*/

#include <iostream>
#include <climits>

using namespace std;

int main() {

    cout << "Maximum limit of int " << INT_MAX << endl;
    cout << "Minimum limit of int " << INT_MIN << endl;
    cout << "Maximum limit of unsigned int " << UINT_MAX << endl;
    cout << "Maximum limit of long long " << LONG_LONG_MAX << endl;
    cout << "Minimum limit of long long " << LONG_LONG_MIN << endl;
    cout << "Maximum limit of unsigned long long " << ULONG_LONG_MAX << endl;
    cout << "Bits in char " << CHAR_BIT << endl;
    cout << "Maximum limit of char " << CHAR_MAX << endl;
    cout << "Minimum limit of char " << CHAR_MIN << endl;
    cout << "Maximum limit of signed char " << SCHAR_MAX << endl;
    cout << "Minimum limit of signed char " << SCHAR_MIN << endl;
    cout << "Maximum limit of unsigned char " << UCHAR_MAX << endl;
    cout << "Maximum limit of short data type " << SHRT_MAX << endl;
    cout << "Minimum limit of short data type " << SHRT_MIN << endl;
    cout << "Maximum limit of unsigned short data type " << USHRT_MAX << endl;
    return 0;
}