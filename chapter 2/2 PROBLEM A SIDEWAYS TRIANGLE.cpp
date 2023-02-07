#include <iostream>
using namespace std;

int main(){
for(int k=0; k<=7; k++){
    for (int g=0; g<4-abs(4-k); g++){
        cout<<4-k;
    }
    cout<<endl;
}
// Consider the middle row
// THink of every row has 4 spaces. Now calculate the
// empty ones. Thats 4-row at start, but youll need
// abs for the other half
// Again, just algebra at i<num part in a for loop
for (int i=1; i<=7; i++){
    for (int j=1; j<=4-abs(4-i); j++){
        cout<<"#";
        }
    cout<<"\n";
    }
return 0;
}
