#include <bits/stdc++.h>

using namespace std;

class binary{
    string s;
    void chk_bin(void);
    public:
        void read(void);
        void ones_compliment(void);
};

void binary :: read(void) {
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary :: chk_bin(void) {
    bool flag = true;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != '0' && s[i] != '1') flag = false;
    }

    if (!flag) cout << "Incorrect binary number" << endl;
    else cout << "Correct binary number" << endl;
}

void binary :: ones_compliment(void) {
    chk_bin();
    for (int i = 0; i < s.size(); ++i) {
        s[i] = (s[i] == '0') ? '1' : '0';
    }
    
    cout << "Ones compliment of a number: " << s << endl;
}

int main() {
    binary b;
    b.read();
    // b.chk_bin(); inaccessible
    b.ones_compliment();
    return 0;
}