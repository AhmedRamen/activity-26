#include "header.h"

int main()
{
    Point a = {10,10};
    Point b = {10,10};
    Point c = { 12,10 };
    Point d = { 1,3 };
    //simple hack
    bool res = a == b;
    cout << "Point A: " << a << endl;
    cout << "Point B: " << b << endl;
    cout << "Matching: " << res << endl;
    
    cout << endl;
    cout << "Point C: " << c << endl;
    cout << "Point D: " << d << endl;
    res = c == d;
    cout << "Matching: " << res << endl;
}

