#pragma once
#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
    bool operator==(const Point& other) const {
        return (x == other.x && y == other.y);
    }
};

ostream& operator<<(ostream& os, const Point pt) {
    return os << "(" << pt.x << "," << pt.y << ")";
}
