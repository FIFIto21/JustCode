#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class dick{
public:
    int rNumber, score = 0;
    string difficulty;
}xd;

//initialization_of_the_functions
void menu();
void select_difficulty();
void game_it_self();
void number_check(int number, int lives);
int random_number(int maxN, int minN);
int str_to_number(string str);
void difficulty_range();

void difficulty_range()
{
    while(1){
    if (xd.difficulty == "Easy"){
        cout<<"(1 - 15)";
        break;
    }
    if (xd.difficulty == "Medium"){
        cout<<"(1 - 30)";
        break;
    }
    if (xd.difficulty == "Hard"){
        cout<<"(1 - 50)";
        break;
    }
    if (xd.difficulty == "Nightmare"){
        cout<<"(1 - 100)";
        break;
    }
    else {
        cout<<"(1 - 30)";
        break;
    }
    }
}

int str_to_number(string str)
{
    if (str == "easy" || str == "Easy") return 1;
    if (str == "meidum" || str == "Medium") return 2;
    if (str == "hard" || str == "Hard") return 3;
    if (str == "nightmare" || str == "Nightmare") return 4;
    else return 2;
}

int random_number(int maxN, int minN)
{
    srand (time(0));
    return rand()%maxN+minN;
}

void number_check(int number, int lives)
{
    while(1){
    if (number == xd.rNumber){
        xd.score++;
        cout<<"\n \n Congrats, you won! \t Score: "<<xd.score<<" \n \n";
        menu();
    }
    if (lives == 0){
        xd.score--;
        cout<<"\n \n You ran out of lives, you louse... the number was "<<xd.rNumber<<" \t Score: "<<xd.score<<" \n \n";
        menu();
    }
    if (number > xd.rNumber){
        cout<<"\n Too bigger \t Lives remaining: "<<lives<<" \t Score: "<<xd.score<<" \n \n";
        lives--;
        cin>>number;
        continue;
    }
    if (number , xd.rNumber){
        cout<<"\n Too small \t Lives remaining: "<<lives<<" \t Score: "<<xd.score<<" \n \n";
        lives--;
        cin>>number;
        continue;
    }
    else {
        cout<<"\n invalid comand..."<<number<<"\n";
        menu();
         
    }
    }
}

void game_it_self()
{
    int aNumber;
    cout<<"\n "<<xd.difficulty<<" mode ";
    difficulty_range();
    cout<<"\n You only have 5 tries \t Score: "<<xd.score<<" \n \n";
    cout<<"Write a number \n \n";
    cout<<" -> ";
    cin>>aNumber;
    number_check(aNumber,4);
}

void select_difficulty()
{
    string answare = "";
    cout<<"\n Select the difficulty \n \n";
    cout<<"Easy (1 - 15) \n";
    cout<<"Medium (1 - 30) \n";
    cout<<"Hard (1 - 50) \n";
    cout<<"Nightmare (1 - 100) \n \n";
    cout<<" -> ";
    cin>>answare;
    switch (str_to_number(answare)){
    case 1:
        xd.rNumber = random_number(15,1);
        xd.difficulty = "Easy";
        break;
    case 2:
        xd.rNumber = random_number(30,1);
        xd.difficulty = "Medium";
        break;
    case 3:
        xd.rNumber = random_number(50,1);
        xd.difficulty = "Hard";
        break;
    case 4:
        xd.rNumber = random_number(100,1);
        xd.difficulty = "Nightmare";
        break;
    default:
        xd.rNumber = random_number(30,1);
        xd.difficulty = "Medium";
    }
    game_it_self();
}

void menu()
{  
    string answare;
    cout<<"\n Start \n";
    cout<<"\n Exit \n \n";
    cout<<" -> ";
    cin>>answare;
    if (answare == "exit" || answare == "Exit") exit(0);
    if (answare == "start" || answare == "Start") select_difficulty();
    else {
        cout<<"\n invalid comand..."<<answare<<endl;
        menu();
    }
}

int main()
{
   cout<<"\nWelcome to GUESS THE NUBMER \n";

    menu();

    cin.get();

    return 0;
}
