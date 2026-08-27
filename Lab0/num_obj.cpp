//** */
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int int_example = 1;
    float float_example = 2.0;
    double double_example = 2.0;

    //non-numerical
    char char_example = '1';
    bool bool_example = true;

    //arry example
    const int SIZE = 10;
    int arr[SIZE];

    //8 Bits = 1 Byte
    cout << "int_example: " << sizeof(int_example) << endl;
    cout << "float_example: " << sizeof(float_example) << endl;
    cout << "double_example: " << sizeof(double_example) << endl;
    cout << "char_example: " << sizeof(char_example) << endl;
    cout << "bool_example: " << sizeof(bool_example) << endl;
    cout << "arr_int_example: " << sizeof(arr) << endl;
    cout << "arr(0): " << arr[0] << endl;
    cout << "arr(1): " << arr[1] << endl;
    return 0;
}