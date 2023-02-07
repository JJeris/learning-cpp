#include <iostream>
using namespace std;


int compareFunc(const void * voidA, const void * voidB){
    int * intA = (int *)(voidA);
    int * intB = (int *)(voidB);
    return *intA - *intB;
}

int main() {
    const int SIZE = 10;
    int intArr[SIZE] = {87, 28, 100, 78, 84, 98, 77, 70, 81, 68};

    qsort(intArr, SIZE, sizeof(int), compareFunc);
    for (int i = 0; i<10; i++){
        cout<<intArr[i]<<", ";
    }
    
}