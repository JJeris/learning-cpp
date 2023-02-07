#include <iostream>
using namespace std;

int main() {
    
    const int SIZE = 12;
    int surveyData[SIZE] = {4, 7, 3, 8, 9, 7, 3, 9, 9, 3, 3, 10};

    // Histogram solution //
    const int MAXIMUM_RESPONSE = 10;
    int histogram[MAXIMUM_RESPONSE];

    for (int i = 0; i<MAXIMUM_RESPONSE; i++){
        histogram[i] = 0;
    }

    for (int i = 0; i < SIZE; i++) {
        histogram[surveyData[i]-1]++;
    }


    // My version for fidning the highest value
    // int highestFrequency = 0;
    // int mode;
    // for (int i = 0; i < MAXIMUM_RESPONSE; i++) {
    //     int temp = histogram[0];
    //     for (int j = 0; j < MAXIMUM_RESPONSE; j++){
    //         if (histogram[j]>temp) {
    //             temp = histogram[j];
    //             highestFrequency = temp;
    //             mode = j+1;    
    //         }
    //     }
    // }
    // cout<<"Frequency: "<<highestFrequency<<endl;
    // cout<<"Mode: "<<mode<<endl;
    
    // Books version for fidning the highest value
    int mostFrequent = 0;
    for (int i = 1; i < MAXIMUM_RESPONSE; i++){
        if (histogram[i] > histogram[mostFrequent]){
            mostFrequent = i;
        }
    }
    mostFrequent++;
    cout<<mostFrequent<<endl;
    cout<<histogram[mostFrequent-1]<<endl;

    



    // Sorting solution //
    // int start = 0;
    // int end = SIZE - 1;
    // for (int i = start + 1; i <= end; i++){ // Goes through all the elements inside the array.
    //     for (int j = i; j > start && surveyData[j-1] > surveyData[j]; j--){ // Checks if the loop has reached the start of the array AND that the previous array element isn't smaller than the current array element.
    //         int temp = surveyData[j-1]; // Replace the previous one with the current one.
    //         surveyData[j-1] = surveyData[j];
    //         surveyData[j] = temp;
    //     }
    // }


    // int mostFrequent = 0;
    // int highestFrequency = 0;
    // int currentFrequency = 0;

    // for (int k = 0; k < SIZE; k++) {
    //     currentFrequency++;
    //     if (k == SIZE-1 || surveyData[k] != surveyData[k+1]){
    //         if(currentFrequency>highestFrequency){
    //             mostFrequent = surveyData[k];
    //             highestFrequency = currentFrequency;
    //         }
    //     currentFrequency = 0;
    //     }
    // }
    // cout<<"Survey data mode is: "<<mostFrequent<<".";
}


    // int temp = NULL;
    // int counter = 0;

    // for (int i = 0; i < SIZE; i++){
    //     temp = surveyData[i];
    //     for (int j = 0; j < SIZE; j++){
    //         if (temp == surveyData[j]){
    //             counter++;
                
    //         }
    //     }
    //     cout<<"Value: "<<temp<<endl;
    //     cout<<"Appeared: "<<counter<<endl;
    //     counter = 0;
    // }
    // cout<<"[";
    // for (int i = 0; i<10; i++){
    //     cout<<surveyData[i]<<", ";
    // }
    // cout<<"]";

