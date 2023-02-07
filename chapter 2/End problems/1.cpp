#include <iostream>
using namespace std;

int pirmais (){
    int j=0;
    int g=0;
    int k=0;
    for (int i=0; i<4; i++){
        for(k=0; k<g; k++){
            cout<<char('\n'+22);
        }
        for (j=0+i*2; j<8; j++){
            cout<<'#';
        }
        cout<<'\n';
        g++;
        j=0;
        k=0;
    }
}

int otrais(){
    for(int i = 1; i<=4; i++){
        for(int g = 0; g<4-i; g++){
            cout<<char('\n'+22);
        }
        for (int j=1; j<=8-(4-i)*2; j++){
            cout<<"#";
        }
        cout<<'\n';
    }
    for(int i = 0; i<4; i++){
        for(int g = 0; g<i; g++){
            cout<<char('\n'+22);
        }
        for (int j=0+i*2; j<8; j++){
            cout<<'#';
        }
        cout<<'\n';
    }
}

int tresais(){
    for(int i = 0; i<4; i++){
        for (int g1 = 4-i; g1<4; g1++){
            cout<<char('\n'+22);
        }
        for(int  g2 = 4-i; g2<=4; g2++){
            cout<<"#";
        }
        for (int g3 = 0+i*4; g3<12; g3++){
            cout<<char('\n'+22);
        }
        for (int g4 = 4-i; g4<=4; g4++){
            cout<<"#";
        }
        cout<<'\n';
    }
    for(int j = 0; j<4; j++){
        for(int g1 = 0+j; g1<3; g1++){
            cout<<char('\n'+22);
        }
        for(int g2 = 0+j; g2<4; g2++){
            cout<<"#";
        }
        for(int g3 = 12-j*4; g3<12; g3++){
            cout<<char('\n'+22);
        }
        for(int g3 = 0+j; g3<4; g3++){
            cout<<"#";
        }
        cout<<'\n';
    }
}

int twoNine(){
    int char_count;
    cout<<"Enter the number or characters in the line of text:"<<endl;
    cin>>char_count;
    while(char_count<=0){
        cout<<"Too low of a character count! Enter the number or characters in the line of text:"<<endl;
        cin>>char_count;
    }
    cin.ignore();

    char_count++;
    char text[char_count];
    cout<<"Enter the text:"<<endl;
    cin.getline(text, char_count);
    /// Finding the longest word

    /// Find a way to make make the for loop go only till the last aplhanumeric (actually) character not deadspace, which fucks up the count
    int temp = 0;
    int longest_word_len = 0;
    int word_count = 0;
    int counter = 0;
    for (int i = 0; i<char_count+1; i++){
        if(text[i]>=65 && text[i]<=90 || text[i]>=97 && text[i]<=122){
//            cout<<text[i]<<endl;
            temp++;
        }
        else {
            if(temp>0){
                if (counter>1){

                }
                else{
                    word_count++;
                }

            }
            temp = 0;
        }
        if(temp>longest_word_len){
            longest_word_len = temp;

        }
    }
    cout<<"Longest word is "<<longest_word_len<<" characters long."<<endl;
    cout<<"There are "<<word_count<<" words in this line of text."<<endl;
}



int main(){
//    pirmais();
//    otrais();
//    tresais();
    twoNine();
    return 0;
}


/**
Reminder:
1.)Always have a plan
2.)Restate the problem
3.)Divide the problem
4.)Start with what you know
5.)Reduce the problem
6.)Look for analogies
7.)Experiment
8.)Dont get frustrated


Goal
1

**/
