#include <iostream>
#include <string>
using namespace std;
// Funkcija, kas sadala skaitli tā ciparos, un tos saskaita.
// Skaitlis ir 0-18.
/*
The Luhn formula is a widely used system for validating identification numbers. Using
the original number, double the value of every other digit. Then add the values of the
individual digits together (if a doubled value now has two digits, add the digits individually).
The identification number is valid if the sum is divisible by 10.
Write a program that takes an identification number of arbitrary length and
determines whether the number is valid under the Luhn formula. The program must
process each character before reading the next one.
*/
int doubledigit(int digit){
    int sum = 0;
    int ddigit = 2*digit;
    if (ddigit>10){
        sum+=1+(ddigit%10);
    }
    else {
        sum+=ddigit;
        cout<<sum<<endl;
    }
    return sum;
}

int main(){
    int position = 1;
    int sumODD=0;
    int sumEVEN=0;
//    int res;
    char digit;
    cout<<"Enter digit"<<endl;
    digit = cin.get();
    while(digit!=10){//for(int i=1; i<=6; i++){// while (c<6){
        //cout<<"Enter digit"<<endl;
        //cin>>digit;
        int d = digit-'0';
        if(position%2==0){
            // Checks when to double a digit. ==0 is for EVEN, !=0 is for ODD
            // BUT LOGIV REVERSE HERE
            //res = doubledigit(d);
            //sum+=res;// sums digits
            //Save space
            sumEVEN+=d;
            sumODD+=doubledigit(d);

        }
        else{
            sumODD+=d;
            sumEVEN+=doubledigit(d);
        }
        digit = cin.get();
        position++;
    }
    cout<<"END"<<endl;
    int sum;
    if((position-1)%2==0){
        sum=sumEVEN;
        cout<<"EVEN"<<endl;
    }
    else{
        sum=sumODD;
        cout<<"ODD"<<endl;
    }
    cout<<sum;
    if(sum%10==0){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Inavlid"<<endl;
    }
return 0;
}
//    cout<<"sumODD is:"<<sumODD<<endl;
//    cout<<"sumEVEN is:"<<sumEVEN<<endl;
    // Check if ID is valid (divides by 10).
//    if(sum%10==0){
//        cout<<"Valid";
//    }
//    else{
//        cout<<"Invalid";
//    }

//int othermain(){
//    char digit;
//    int checksum = 0;
//    cout<<"Enter 6 digits"<<endl;
//    for (int i=1; i<=6; i++){
//        cin>>digit;
//        checksum+=digit-'0';
//    }
//    if (checksum%10==0){
//        cout<<"Valid";
//    }
//    else{
//        cout<<"Invalid";
//    }
//}

//int mainmainmain(){
//cout<<"Digir"<<endl;
//char digit;
//while(true){
//    digit=cin.get();
//    cout<<int(digit)<<" ";
//    }
//}











        //        cout<<d<<endl;
//        if (c%2!=0){
//            res = doubledigit(d);
//            sum+=res;
//        }
//        else{
//            sum+=d;
//        }
//        cout<<"sum is:"<<sum<<endl;




//int ok = 1;
//int counter = 1;
//int sum = 0;
//while (ok==1){
//    int a;
//    cout<<"enter digit"<<endl;
//    cin>>a;
//    if (counter%2==0){
//        a=a*2;
//        if(a%10>0){
//            sum+=(a%10);
//            sum+=a-(1%10);// NO
//        }
//        sum+=a*2;
//        cout<<sum<<endl;
//    }
//    else {
//        sum+=a;
//    }
//    counter++;
//    cout<<"OK?"<<endl;
//    cin>>ok;
//}
//cout<<sum<<endl;
//int ssum = sum%10;
//int ten = 10-ssum;
//cout<<"checldigit is"<<ten<<endl;
//



