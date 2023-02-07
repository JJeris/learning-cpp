#include <iostream>
using namespace std;


int twoone(){
    for (int i = 0; i<4; i++){
        if(i>=1){
            for(int k = 0; k<i; k++){
                cout<<char('\n'+22);
            }
        }
        for (int j = 0; j<8-(2*i); j++){
            cout<<"#";
        }
        cout<<"\n";
    }
}

int twotwo() {
    for (int i = 0; i<8; i++){
        for (int i = 0; i<4; i++){
            if(i>=1){
                for(int k = 0; k<i; k++){
                    cout<<char('\n'+22);
                }
            }
        }
        for (int j = 0; j<8; j++){
            cout<<"#";
        }
        cout<<"\n";
    }
}



int main(){
    twotwo();

}
