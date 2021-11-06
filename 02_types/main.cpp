#include <iostream>

using namespace std;

int main(void)
{
    // Integer 4 bytes
    int a = 5;
    int b = a + 5;

    cout << "int (a) " << a << endl;
    cout << "int (b) " << b << endl;

    // float 4 bytes, 7 decimal digits
    float c = 0.1234567;
    cout << "float (c) " << c << endl;

    // double 8 bytes, 15 decimal digits
    double d = 0.1234567891234;
    cout << "double (d) " << d << endl;

    // bool 1 byte
    bool e = false;
    cout << "bool (e) " << e << endl;

    // char 1 byte
    char f = 'a';
    cout << "char (f) " << f << endl;

    string g = "Hello";
    cout << "string (g)" << g << endl;
    return 0;
}