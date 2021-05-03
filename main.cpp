#include <iostream>
#include <fstream>
class Box{
    int l, b, h;
  public:
    Box(): l(0), b(0), h(0){};
    Box(int l,int b,int h): l(l), b(b), h(h){};
    Box(Box &x): l(x.l), b(x.b), h(x.h){};
    int GetLength() { return l; }
    int GetBreadth(){ return b; }
    int GetHeight() { return h; }
    long long CalculateVolume(){ return (long long)l*b*h; }
    bool operator<(const Box& x) {
        if (l < x.l) return true;
        if (b < x.b && l == x.l) return true;
        if (h < x.h && l == x.l && b == x.b) return true;
        return false;
    }
    friend ostream& operator<< (ostream& o, const Box& x){
        o << x.l << " " << x.b << " " << x.h;
        return o;
    }
};
// test commit
// test commit
// test commit
// test commit
// BOX IT
