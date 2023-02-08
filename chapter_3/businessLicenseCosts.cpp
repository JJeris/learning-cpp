#include <iostream>
using namespace std;

int main() {
    
    const int NUM_CATEGORIES = 4;
    const double categoryThresholds[NUM_CATEGORIES] = {0.0, 50000.0, 150000.0, 500000.0};
    const double licenseCost[NUM_CATEGORIES] = {25.0, 200.0, 1000.0, 5000};

    double grossSales = 0;
    
    cout<<"Enter your businesses gross sales:";
    cin>>grossSales;

    int category = 0;
    while (category < NUM_CATEGORIES && categoryThresholds[category] <= grossSales ){
        category++;
    }
    cout<<"Your business category is "<<category<<", and your license cost is "<<licenseCost[category-1]<<endl;


}