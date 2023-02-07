#include <iostream>
using namespace std;

int main(){
//int h=5; j<h
for (int i=0; i<5; i++){
    for(int j=0; j<5-i; j++){
        cout<<"#";
        }
//    h--;
    cout<<"\n";
    }
return 0;
}
