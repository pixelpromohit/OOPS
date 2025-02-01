#include <bits/stdc++.h>

using namespace std;

class Employee {
    int id;
    static int count;
    public:
        void setData() {
            cout << "Enter the id: ";
            cin >> id;
            count++;
        }
        
        void getData() {
            cout << "The id of the employee is " << id << " and this is employee number " << count << endl;
        }

        static void getCount() {
            // cout << id << endl; static functions can only access static variables
            cout << "The value of count is " << count << endl;
        }
};

int Employee :: count; // Default value is zero

int main() {
    Employee John, Alice, Bob;
    John.setData();
    Employee :: getCount();
    John.getData();

    Alice.setData();
    Employee :: getCount();
    Alice.getData();

    Bob.setData();
    Employee :: getCount();
    Bob.getData();
    return 0;
}