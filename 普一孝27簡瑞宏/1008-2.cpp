#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string snt;
    getline(cin,snt);
    for (int i = 0; i < snt.length(); i++) {
        if (i % 2 == 1) {
            cout << (char)toupper(snt[i]);
        } else if (i % 2 == 0) {
            cout << (char)tolower(snt[i]);
        }
    }
}