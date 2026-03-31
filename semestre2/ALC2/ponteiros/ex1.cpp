#include <iostream>

using namespace std;

int main(){
    int y, *p, x;

    y = 0;
    cout << y << endl;

    p =&y;
    cout << y << endl;

    x = *p;
    cout << y << endl;

    x = 4;
    cout << y << endl;

    (*p)++;
    cout << y << endl;

    x--;
    cout << y << endl;

    (*p) += x;
    cout << y << endl;

}
