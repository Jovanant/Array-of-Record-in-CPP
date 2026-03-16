#include <iostream>

using namespace std;

int main() {
    int array[] = {2,4,6,8};

    for(int i = 0; i < 4; i++) {
        cout << array[i] << endl;
        cout << "id : " << &array[i] << endl;
    }

    return 0;
}