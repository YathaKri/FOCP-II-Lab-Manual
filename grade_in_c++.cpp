#include <iostream>
using namespace std;

int main() {
    int per;
    cout << "Enter your percentage:> ";
    cin >> per;
    switch (per / 10) {
        case 10:
            cout << "Grade: S" << endl;
            break;
        case 9:
            cout << "Grade: A" << endl;
            break;
        case 8:
            cout << "Grade: B" << endl;
            break;
        case 7:
            cout << "Grade: C" << endl;
            break;
        case 6:
            cout << "Grade: D" << endl;
            break;
        case 5:
            cout << "Grade: E" << endl;
            break;
        default:
            cout << "Grade: F (Fail)" << endl;
            break;
    }
    return 0;
}