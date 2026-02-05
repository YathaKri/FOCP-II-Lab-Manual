#include <iostream>
using namespace std;

int main(){
    int x=0;
    int total=0;
    while(x==0){
        int temp;
        cout << "Enter number:>";
        cin >> temp;
        if (temp<0){
            cout << "Please enter positive number" << endl;

        }
        else{
            total=total+temp;
        }
        cout << "To continue press 0 , if not...press any number:>";
        cin >> x;
        
    }
    cout << "The sum of all provided number:>";
    cout <<total;
    return 0;
}
