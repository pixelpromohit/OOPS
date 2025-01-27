#include <bits/stdc++.h>

using namespace std; 

class Employee {
    
    private: 
    int a, b, c;
    public:
    int d, e;

    void setData(int a1, int b1, int c1);
    void getData() {
        cout << "Value of a is " << a << endl;
        cout << "Value of a is " << b << endl;
        cout << "Value of a is " << c << endl;
        cout << "Value of a is " << d << endl;
        cout << "Value of a is " << e << endl;
    }
};

void Employee :: setData(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

int main() {
    Employee John;
    // John.a  144 -> inaccessible
    John.d = 34;
    John.e = 69;
    John.setData(1, 2, 4);
    John.getData();
    return 0;
}