#include <iostream>
using namespace std;

/**
 * Not the best insertion sort algo. but it works.
 * 
 * 
 */
int main() {
    const int SIZE = 10;
    int intArr[SIZE] = {87, 28, 100, 78, 84, 98, 77, 70, 81, 68};

    int start = 0;
    int end = SIZE - 1;

    for (int i = start + 1; i <= end; i++){ // Goes through all the elements inside the array.
        for (int j = i; j > start && intArr[j-1] > intArr[j]; j--){ // Checks if the loop has reached the start of the array AND that the previous array element isn't smaller than the current array element.
            int temp = intArr[j-1]; // Replace the previous one with the current one.
            intArr[j-1] = intArr[j];
            intArr[j] = temp;
        }
    }
    for (int i = 0; i<10; i++){
        cout<<intArr[i]<<", ";
    }
}