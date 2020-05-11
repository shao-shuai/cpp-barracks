#include <iostream>
using namespace std;

// Function template
template <typename T>
T square (T x) {
    return x*x;
}

// Class template
template<typename T>
class BoVector {
    T arr[1000];
    int size;
public:
    BoVector():size(0){}
        void push(T x) { arr[size] = x; size++;}
        void print() const {for (int i=0; i<size; i++) {cout << arr[i] << endl;}}
    
};

int main () { // Code bloat
    cout << square(5) << endl;
    cout << square(5.5) << endl;
    BoVector<int> vec;
    vec.push(2);
    vec.push(6);
    vec.push(7);
    vec.push(9);
    vec.push(10);
    vec.print();
}