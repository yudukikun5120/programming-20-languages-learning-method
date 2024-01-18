#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() 
{
    srand((unsigned)time(0));
    int x = rand() % 3;
    if (x == 0) {
        cout << "大吉です" << endl;
    } else if (x == 1) {
        cout << "普通です" << endl;
    } else {
        cout << "凶です" << endl;
    }
}
