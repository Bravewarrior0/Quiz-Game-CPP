#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

/**
** This program Created by Ahmed Gamal 24/07/2019
** This program is Quiz program it's a full practice on basic programming
**************************************************************************
**/
char answer(int NumberOfQuestions);
int pickQuestion(int n);
void numbers(int n[]);
void Mainscreen(string name, int score);
bool gameOver(int score);
int main()
{
    string name;
    int score=0;
    int n[21];
    int userNo=4;
    bool again =true;
    while(again){
        system ("CLS");
        cout<<"please enter your name: ";
        getline (cin,name);
        cout<<"Welcome "<<name<<endl;
        cout<<"******************************"<<endl;
        cout<<"press enter to start your journey!";
        cin.get();
        if(userNo==4){
            userNo=0;
            numbers(n);
        }
        for(int i=1; i<=5; i++){
            Mainscreen(name, score);
            cout<<i<<". ";
            score+=pickQuestion(n[i+userNo-1]);
            system("pause");

        }
        userNo++;
        again=gameOver(score);
        if(!again){
            system ("CLS");
            cout<<"Good bye "<<name<<"!"<<endl;
            cout<<"We hope to see you soon"<<endl;
            system("pause");
        }
    }
    return 0;
}
/// This function take NumberOfQuestions that should be between 2:5 and return the answer
void numbers(int n[]){
    srand(time(0));
    for(int i=0; i<21; i++)
        n[i]=i;
    int temp;
    for(int i=0; i<21; i++){
        int j=rand()%21;
        temp=n[i];
        n[i]=n[j];
        n[j]=temp;
    }
}
void Mainscreen(string name, int score){
    system ("CLS");
    cout<<"Welcome "<<name<<endl;
    cout<<"Your score: "<<score<<endl;
    cout<<"******************************\n"<<endl;
}
bool gameOver(int score){
    system ("CLS");
    cout<<"Congratulations! you have achieved " <<score<<" points"<<endl;
    char c;
    do{
        cout<<"Would you like to try again?[y,n]";
        cin>>c;
    }
    while(c!='n' && c!='N' && c!='y' && c!='Y');
    if(c=='y'||c=='Y')
        return true;
    else
        return false;
}
char answer(int NumberOfChoices){
    char c;
    char caps[5]={'A','B','C','D','E'};
    char smalls[5]={'a','b','c','d','e'};
    cin>>c;
    bool found=false;
    while(!found){
        for(int i=0; i<NumberOfChoices; i++){
            if(c==caps[i]||c==smalls[i]){
                found=true;
                break;
            }
        }
        if(!found){
            cout<<"Invalid choice! please,choose again! ";
            cin>>c;
        }
    }
    return c;
}
int rightAns(){
    cout<<"yeah you are right (.^_^.)  +10"<<endl;
    return 10;
}
int wrongAns(char c){
    cout<<"you are wrong (;_;) -10"<<endl;
    cout<<"The right answer is "<<c<<endl;
    return -10;
}
int question0(){
    cout<<"How many loops are there in C?"<<endl;
    cout<<"(A) 2"<<endl;
    cout<<"(B) 3"<<endl;
    cout<<"(C) 4"<<endl;
    cout<<"(B) 1"<<endl;
    char c=answer(4);
    if(c=='B'||c=='b')
        return rightAns();
    else
        return wrongAns('B');
}
int question1(){
    cout<<"Is it possible to run program without main() function?"<<endl;
    cout<<"(A) Yes"<<endl;
    cout<<"(B) No"<<endl;
    char c=answer(2);
    if(c=='B'||c=='b')
        return rightAns();
    else
        return wrongAns('B');
}
int question2(){
    cout<<"How many main() function we can have in our project?"<<endl;
    cout<<"(A) 1"<<endl;
    cout<<"(B) 2"<<endl;
    cout<<"(C) No Limit"<<endl;
    cout<<"(D) Depends on Compiler"<<endl;
    char c=answer(4);
    if(c=='A'||c=='a')
        return rightAns();
    else
        return wrongAns('A');
}
int question3(){
    cout<<"What is sizeof() in C"<<endl;
    cout<<"(A) Operator"<<endl;
    cout<<"(B) Function"<<endl;
    cout<<"(C) Macro"<<endl;
    cout<<"(D) None of these"<<endl;
    char c=answer(4);
    if(c=='A'||c=='a')
        return rightAns();
    else
        return wrongAns('A');
}
int question4(){
    cout<<"Is it true that a function may have several declaration, but only one definition?"<<endl;
    cout<<"(A) Yes"<<endl;
    cout<<"(B) No"<<endl;
    char c=answer(2);
    if(c=='A'||c=='a')
        return rightAns();
    else
        return wrongAns('A');
}
int question5(){
    cout<<"Which programming language is more faster among these?"<<endl;
    cout<<"(A) Java"<<endl;
    cout<<"(B) PHP"<<endl;
    cout<<"(C) C"<<endl;
    cout<<"(D) Visual Basic"<<endl;
    char c=answer(4);
    if(c=='C'||c=='c')
        return rightAns();
    else
        return wrongAns('C');
}
int question6(){
    cout<<"Which programming language is more faster among these?"<<endl;
    cout<<"(A) Java"<<endl;
    cout<<"(B) PHP"<<endl;
    cout<<"(C) C"<<endl;
    cout<<"(D) Visual Basic"<<endl;
    char c=answer(4);
    if(c=='C'||c=='c')
        return rightAns();
    else
        return wrongAns('C');
}
int question7(){
    cout<<"void main(){"<<endl;
    cout<<"int a = printf (\"AhmedGamal\");"<<endl;
    cout<<"printf(\"%d\", a);"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) Compilation Error"<<endl;
    cout<<"(B) 0"<<endl;
    cout<<"(C) AhmedGamal"<<endl;
    cout<<"(D) AhmedGamal10"<<endl;
    char c=answer(4);
    if(c=='D'||c=='d')
        return rightAns();
    else
        return wrongAns('D');
}
int question8(){
    cout<<"What should be the output:"<<endl;
    cout<<"int main(){"<<endl;
    cout<<"int a = 10/3;"<<endl;
    cout<<"cout<<a;"<<endl;
    cout<<" return 0;"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) 3.33"<<endl;
    cout<<"(B) 3.0"<<endl;
    cout<<"(C) 3"<<endl;
    cout<<"(D) 0"<<endl;
    char c=answer(4);
    if(c=='C'||c=='c')
        return rightAns();
    else
        return wrongAns('C');
}
int question9(){
    cout<<"What should be the output:"<<endl;
    cout<<"int main(){"<<endl;
    cout<<"    int a = 10.5;"<<endl;
    cout<<"    cout<<a;"<<endl;
    cout<<" return 0;"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) 10.5"<<endl;
    cout<<"(B) 10"<<endl;
    cout<<"(C) 0"<<endl;
    cout<<"(D) Compilation Error"<<endl;
    char c=answer(4);
    if(c=='B'||c=='b')
        return rightAns();
    else
        return wrongAns('B');
}
int question10(){
    cout<<"What should be the output:"<<endl;
    cout<<"int main(){"<<endl;
    cout<<" int _ = 10;"<<endl;
    cout<<"	int __ = 20;"<<endl;
    cout<<"	int ___ = _ + __;"<<endl;
    cout<<"	cout<<\"__\"<<___;"<<endl;
    cout<<" return 0;"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) Compilation Error"<<endl;
    cout<<"(B) Runtime Error"<<endl;
    cout<<"(C) __0"<<endl;
    cout<<"(D) __30"<<endl;
    char c=answer(4);
    if(c=='D'||c=='d')
        return rightAns();
    else
        return wrongAns('D');
}
int question11(){
    cout<<"How many times programing for All is printed"<<endl;
    cout<<"int main(){"<<endl;
    cout<<"int a = 0;"<<endl;
    cout<<"while(a++ < 5-++a)"<<endl;
    cout<<"	cout<<\"programing for All\";"<<endl;
    cout<<" return 0;"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) 5 times"<<endl;
    cout<<"(B) 4 times"<<endl;
    cout<<"(C) 2 times"<<endl;
    cout<<"(D) 1 time"<<endl;
    char c=answer(4);
    if(c=='D'||c=='d')
        return rightAns();
    else
        return wrongAns('D');
}
int question12(){
    cout<<"How many times programing for All is printed"<<endl;
    cout<<"int main(){"<<endl;
    cout<<"int a = 0;"<<endl;
    cout<<"while(a++ < 5)"<<endl;
    cout<<"	cout<<\"programing for All\";"<<endl;
    cout<<" return 0;"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) 4 times"<<endl;
    cout<<"(B) 5 times"<<endl;
    cout<<"(C) 0 times"<<endl;
    cout<<"(D) Infinite times"<<endl;
    char c=answer(4);
    if(c=='B'||c=='b')
        return rightAns();
    else
        return wrongAns('B');
}
int question13(){
    cout<<"How many times programing for All is printed"<<endl;
    cout<<"int main(){"<<endl;
    cout<<"int a = 0;"<<endl;
    cout<<"while(a++)"<<endl;
    cout<<"	cout<<\"programing for All\";"<<endl;
    cout<<" return 0;"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) 1 time"<<endl;
    cout<<"(B) 0 times"<<endl;
    cout<<"(C) 2 times"<<endl;
    cout<<"(D) Infinite times"<<endl;
    char c=answer(4);
    if(c=='B'||c=='b')
        return rightAns();
    else
        return wrongAns('B');
}
int question14(){
    cout<<"How many times programing for All is printed"<<endl;
    cout<<"int main(){"<<endl;
    cout<<"int a = 0;"<<endl;
    cout<<"while(a)"<<endl;
    cout<<"	cout<<\"programing for All\";"<<endl;
    cout<<" return 0;"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) 1 time"<<endl;
    cout<<"(B) Compilation Error"<<endl;
    cout<<"(C) 0 times"<<endl;
    cout<<"(D) Infinite times"<<endl;
    char c=answer(4);
    if(c=='C'||c=='c')
        return rightAns();
    else
        return wrongAns('C');
}
int question15(){
    cout<<"How many times programing for All is printed"<<endl;
    cout<<"int main(){"<<endl;
    cout<<"int a = 0;"<<endl;
    cout<<"while(++a)"<<endl;
    cout<<"	cout<<\"programing for All\";"<<endl;
    cout<<" return 0;"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) 1 time"<<endl;
    cout<<"(B) Infinite times"<<endl;
    cout<<"(C) 0 times"<<endl;
    cout<<"(D) Error"<<endl;
    char c=answer(4);
    if(c=='B'||c=='b')
        return rightAns();
    else
        return wrongAns('B');
}
int question16(){
    cout<<"How many times programing for All is printed"<<endl;
    cout<<"int main(){"<<endl;
    cout<<"int a = 0;"<<endl;
    cout<<"while(++a++)"<<endl;
    cout<<"	cout<<\"programing for All\";"<<endl;
    cout<<" return 0;"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) 1 time"<<endl;
    cout<<"(B) 0 time"<<endl;
    cout<<"(C) Infinite times"<<endl;
    cout<<"(D) Error"<<endl;
    char c=answer(4);
    if(c=='D'||c=='d')
        return rightAns();
    else
        return wrongAns('D');
}
int question17(){
    cout<<"How many times programing for All is printed"<<endl;
    cout<<"int main(){"<<endl;
    cout<<"int a = 0;"<<endl;
    cout<<"while(a++);"<<endl;
    cout<<"{"<<endl;
    cout<<"	cout<<\"programing for All\";"<<endl;
    cout<<"}"<<endl;
    cout<<" return 0;"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) 0 time"<<endl;
    cout<<"(B) 1 time"<<endl;
    cout<<"(C) Infinite times"<<endl;
    cout<<"(D) Error"<<endl;
    char c=answer(4);
    if(c=='B'||c=='b')
        return rightAns();
    else
        return wrongAns('B');
}
int question18(){
    cout<<"What is output of below program?"<<endl;
    cout<<"int main(){"<<endl;
    cout<<"int i,j,count;"<<endl;
    cout<<"count=0;"<<endl;
    cout<<"for(i=0; i<5; i++);"<<endl;
    cout<<"{"<<endl;
    cout<<"	for(j=0;j<5;j++);"<<endl;
    cout<<" {"<<endl;
    cout<<"	    count++;"<<endl;
    cout<<" }"<<endl;
    cout<<"cout<<count;"<<endl;
    cout<<"}"<<endl;
    cout<<" return 0;"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) 55"<<endl;
    cout<<"(B) 54"<<endl;
    cout<<"(C) 1"<<endl;
    cout<<"(D) 0"<<endl;
    char c=answer(4);
    if(c=='C'||c=='c')
        return rightAns();
    else
        return wrongAns('C');
}
int question19(){
    cout<<"What is output of below program?"<<endl;
    cout<<"int main(){"<<endl;
    cout<<" for(; ;);"<<endl;
    cout<<" for(; ;);"<<endl;
    cout<<" cout<<\"Hello\";"<<endl;
    cout<<"return 0;"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) Compilation Error"<<endl;
    cout<<"(B) Runtime Error"<<endl;
    cout<<"(C) Nothing is printed"<<endl;
    cout<<"(D) Hello is printed infinite times"<<endl;
    char c=answer(4);
    if(c=='C'||c=='c')
        return rightAns();
    else
        return wrongAns('C');
}
int question20(){
    cout<<"What is output of below program?"<<endl;
    cout<<"int main(){"<<endl;
    cout<<" for(; ;)"<<endl;
    cout<<" for(; ;)"<<endl;
    cout<<"     cout<<\"Hello\";"<<endl;
    cout<<"return 0;"<<endl;
    cout<<"}"<<endl;
    cout<<"(A) Compilation Error"<<endl;
    cout<<"(B) Runtime Error"<<endl;
    cout<<"(C) Nothing is printed"<<endl;
    cout<<"(D) Hello is printed infinite times"<<endl;
    char c=answer(4);
    if(c=='D'||c=='d')
        return rightAns();
    else
        return wrongAns('D');
}
int pickQuestion(int n){
    switch(n){
        case 0: return question0();
            break;
        case 1: return question1();
            break;
        case 2: return question2();
            break;
        case 3: return question3();
            break;
        case 4: return question4();
            break;
        case 5: return question5();
            break;
        case 6: return question6();
            break;
        case 7: return question7();
            break;
        case 8: return question8();
            break;
        case 9: return question9();
            break;
        case 10: return question10();
            break;
        case 11: return question11();
            break;
        case 12: return question12();
            break;
        case 13: return question13();
            break;
        case 14: return question14();
            break;
        case 15: return question15();
            break;
        case 16: return question16();
            break;
        case 17: return question17();
            break;
        case 18: return question18();
            break;
        case 19: return question19();
            break;
        case 20: return question20();
            break;
    }
}




