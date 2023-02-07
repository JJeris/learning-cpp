#include <iostream>
#include <string>
using namespace std;
/*
A message has been encoded as a text stream that is to be read character by character.
The stream contains a series of comma-delimited integers, each a positive number
capable of being represented by a C++ int. However, the character represented by
a particular integer depends on the current decoding mode. There are three modes:
uppercase, lowercase, and punctuation.
In uppercase mode, each integer represents an uppercase letter: The integer
modulo 27 indicates the letter of the alphabet (where 1 = A and so on). So an input
value of 143 in uppercase mode would yield the letter H because 143 modulo 27 is
8 and H is the eighth letter in the alphabet.
The lowercase mode works the same but with lowercase letters; the remainder of
dividing the integer by 27 represents the lowercase letter (1 = a and so on). So an
input value of 56 in lowercase mode would yield the letter b because 57 modulo 27
is 2 and b is the second letter in the alphabet.
In punctuation mode, the integer is instead considered modulo 9, with the interpretation
given by Table 2-3 below. So 19 would yield an exclamation point because
19 modulo 9 is 1.
At the beginning of each message, the decoding mode is uppercase letters. Each
time the modulo operation (by 27 or 9, depending on mode) results in 0, the decoding
mode switches. If the current mode is uppercase, the mode switches to lowercase
letters. If the current mode is lowercase, the mode switches to punctuation, and if it is
punctuation, it switches back to uppercase.
*/


int digitInt2(){// CONVERTS 2 digits (a char of a 2 digit int)
                // into a 2 digit int.
    cout<<"Input"<<endl;
    char firstDigit = cin.get();
//    cout<<firstDigit<<endl;
    char secondDigit = cin.get();
//    cout<<secondDigit<<endl;
//    int num1 = firstDigit-'0';
//    int num2 = secondDigit-'0';
//    cout<<num1<<endl;
//    cout<<num2<<endl;
    //int sum = (num1*10)+num2;
    int digitInt = 10*(firstDigit-'0')+(secondDigit-'0');
//    cout<<"Sum is: "<<sum<<endl;
    return digitInt;
}
int digitInt2v2(){
    cout<<"Input: "<<endl;
    char digitsChar = cin.get();
    int digitsInt = (digitsChar-'0')*10;
    digitsChar = cin.get();
    digitsInt+=digitsChar-'0';
    cout<<"Sum is: "<<digitsInt<<endl;
}

int digitInt2v3(){
    int digitsInt;
    int digitsInt3 = 0;
    int digitsInt4 = 0;
    int counter = 1;
    cout<<"Input: "<<endl;
    char digitsChar = cin.get();
    while(digitsChar!=10){
        if (counter==1){
            digitsInt3 += (digitsChar-'0')*100;
            digitsInt4 += (digitsChar-'0')*1000;
        }
        else if(counter==2){
            digitsInt3 += (digitsChar-'0')*10;
            digitsInt4 += (digitsChar-'0')*100;
        }
        else if(counter==3){
            digitsInt3 += (digitsChar-'0')*1;
            digitsInt4 += (digitsChar-'0')*10;
        }
        else if(counter==4){
            digitsInt4 += (digitsChar-'0')*1;
        }
//        cout<<digitsInt3<<endl;
//        cout<<digitsInt4<<endl;
        digitsChar = cin.get();
        counter++;
    }
    if (counter-1==3){
        digitsInt = digitsInt3;
    }
    else{
        digitsInt = digitsInt4;
    }
    cout<<"Sum is: "<<digitsInt<<endl;
}

int digitInt2v4(){
    int digitsInt;
    int digitsInt3 = 0;
    cout<<"Input: "<<endl;
    char digitsChar = cin.get();
    digitsInt3 += (digitsChar-'0')*100;
    digitsChar = cin.get();
    digitsInt3 += (digitsChar-'0')*10;
    digitsChar = cin.get();
    digitsInt3 += (digitsChar-'0')*1;
    digitsChar = cin.get();
    if (digitsChar==10){
        cout<<digitsInt3<<endl;
    }
    else{
        digitsInt3=digitsInt3*10+(digitsChar-'0');
        digitsChar = cin.get();
//        cout<<digitsInt3<<endl;
        if(digitsChar==10){
            cout<<digitsInt3<<endl;
        }
        else{
            digitsInt3=digitsInt3*10+(digitsChar-'0');
            cout<<digitsInt3<<endl;
        }
    }
}
int digitsInt2v5(){
    char digitsChar;
    cout<<"Input: ";
    do{
        int digitsInt = 0;

        digitsChar = cin.get();
    //    int digitsInt = (digitsChar-'0');
    //    digitsChar = cin.get();
        while((digitsChar!=10)&&(digitsChar!=',')){
            digitsInt = digitsInt*10+(digitsChar-'0');
            digitsChar = cin.get();
        }
    cout<<digitsInt<<endl;
    }while(digitsChar!=10);


}


int main(){
//1. The modes made seperately
//2. The machenic for working through the given numbers one by one
//3....
//    digitInt2();
//    digitInt2v2();
//    digitInt2v3();//for 3 or 4
//    digitInt2v4();//for 5
//    digitsInt2v5();//for arbitrary size
//    Code for Upper and Lowe case
//    cout<<"Input 1-26"<<endl;
//    int number;
//    cin>>number;
//    char outputU = number+'A'-1;
//    char outputL = number+'a'-1;
//    cout<<outputU<<endl;
//    cout<<outputL<<endl;
//    Puncutation
//    cout<<"Input 1-8"<<endl;
//    int number;
//    cin>>number;
//    char output;
//    switch(number){
//        case 1:output = '!'; break;
//        case 2:output = '?'; break;
//        case 3:output = ','; break;
//        case 4:output = '.'; break;
//        case 5:output = ' '; break;
//        case 6:output = ';'; break;
//        case 7:output = '"'; break;
//        case 8:output = '\''; break;
//    }
//    cout<<output<<endl;

    //CODE WITH ALL THREE TYPES
    char digitsChar;
    enum modeType {UPPERCASE, LOWERCASE, PUNCTUATION};
    char output;
    modeType mode = UPPERCASE;
    cout<<"Input: ";
    do{
        int number = 0;
        digitsChar = cin.get();
        while((digitsChar!=10)&&(digitsChar!=',')){
            number = number*10+(digitsChar-'0');
            digitsChar = cin.get();
        }
//    cout<<number<<endl;
//
//    cout<<"Number read: "<<number<<endl;
    switch(mode){
        case UPPERCASE:
            number=number%27;
            output = number+'A'-1;
//            cout<<"Modulo 27: "<<number<<". "<<endl;
            if(number==0){
//                cout<<"Switch to LOWERCASE"<<endl;
                mode=LOWERCASE;
                continue;
            }
            break;
        case LOWERCASE:
            number=number%27;
            output = number+'a'-1;
//            cout<<"Modulo 27: "<<number<<". "<<endl;
            if(number==0){
//                cout<<"Switch to PUNCTUATION"<<endl;
                mode=PUNCTUATION;
                continue;
            }
            break;
        case PUNCTUATION:
            number=number%9;
//            cout<<"Modulo 9: "<<number<<". "<<endl;
            switch(number){
                case 1:output = '!'; break;
                case 2:output = '?'; break;
                case 3:output = ','; break;
                case 4:output = '.'; break;
                case 5:output = ' '; break;
                case 6:output = ';'; break;
                case 7:output = '"'; break;
                case 8:output = '\''; break;
            }
            if(number==0){
//                cout<<"Switch to UPPERCASE"<<endl;
                mode=UPPERCASE;
                continue;
            }
            break;
        }
    cout<<output;
    }while(digitsChar!=10);
}
//enum modeType {UPPERCASE, LOWERCASE, PUNCTUATION};
//    int number;
//    modeType mode = UPPERCASE;
//    cout<<"Enter some numbers ending with -1"<<endl;
//    do{
//        cin>>number;
//        cout<<"Number read: "<<number<<endl;
//        switch(mode){
//            case UPPERCASE:
//                number=number%27;
//                cout<<"Modulo 27: "<<number<<". "<<endl;
//                if(number==0){
//                    cout<<"Switch to LOWERCASE"<<endl;
//                    mode=LOWERCASE;
//                }
//                break;
//            case LOWERCASE:
//                number=number%27;
//                cout<<"Modulo 27: "<<number<<". "<<endl;
//                if(number==0){
//                    cout<<"Switch to PUNCTUATION"<<endl;
//                    mode=PUNCTUATION;
//                }
//                break;
//            case PUNCTUATION:
//                number=number%9;
//                cout<<"Modulo 9: "<<number<<". "<<endl;
//                if(number==0){
//                    cout<<"Switch to UPPERCASE"<<endl;
//                    mode=UPPERCASE;
//                }
//                break;
//        }
//        cout<<endl;
//    }while(number!=-1);
