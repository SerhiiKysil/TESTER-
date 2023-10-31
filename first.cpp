#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Введіть значення a та b :"<<endl;
    cin >> a >> b;
    if (a >= 0 && a <= 100 && b >= 0 && b <= 100) {
       int sum = a + b;
       cout <<"Сума значень a i b = " << sum << endl;
    } else {
        cout << "Недійсні вхідні дані" << endl;
    } 
    return 0;
}
