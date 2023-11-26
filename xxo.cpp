#include <iostream>
#include <ctime>
using namespace std;
void drawboard(char *speaces);
void playermove(char *speaces, char player, int &numb);
void compuermove(char *speaces, char computer, char player, int playerMove);
bool checkwinner(char *speaces, char player, char computer);
bool checktie(char *speaces);

int main() {
    int x;
    char speaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    int playerMove;

    cout << "************* Welcome to the worst tic tac toe game ever *************\n\n";
    cout << "if you want to play enter 1\n";
    cout << "if not enter 0 \n";
    cin >> x;

    if (x == 0) {
        cout << "Wise choice sir Wise choice ";
        return 0;
    } else if (x == 1) {
        cout << endl;
    } else {
        cout << "error game will crush (it's not an error but don't play smart on me ):< )";
        return 0;
    }

    drawboard(speaces);

    while (running) {
        playermove(speaces, player, playerMove);
        drawboard(speaces);
        if (checkwinner(speaces, player, computer)) {
            running = false;
            break;
        } else if (checktie(speaces)) {
            running = false;
            break;
        }
        compuermove(speaces, computer, player, playerMove);
        drawboard(speaces);
        if (checkwinner(speaces, player, computer)) {
            running = false;
            break;
        } else if (checktie(speaces)) {
            running = false;
            break;
        }
    }

    cout << "Thanks for playing this bad game!!!!!!";
}

void drawboard(char *speaces) {
    cout << endl;
    cout << "     |     |      " << endl;
    cout << "  " << speaces[0] << "  |  " << speaces[1] << "  |  " << speaces[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |      " << endl;
    cout << "  " << speaces[3] << "  |  " << speaces[4] << "  |  " << speaces[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |      " << endl;
    cout << "  " << speaces[6] << "  |  " << speaces[7] << "  |  " << speaces[8] << "   " << endl;
    cout << endl;
}

void playermove(char *speaces, char player, int &numb) {
    do {
        cout << "enter a spot to place marker (1-9): ";
        cin >> numb;
        numb--;
        if (speaces[numb] == ' ') {
            speaces[numb] = player;
            break;
        }
    } while (numb < 0 || numb > 8);
}

void compuermove(char *speaces, char computer, char player, int playerMove) {
    int number;
    srand(time(0));

    // Use the player's move in the logic if needed

    // Generate random numbers until a valid move is found
    do {
        number = rand() % 9;
    } while (speaces[number] != ' ' || number == playerMove);

    cout << "Computer's move: " << number + 1 << endl;  // Print the computer's move
    speaces[number] = computer;
}

bool checkwinner(char *speaces, char player, char computer) {
          //اول ثلاث هي اعمده ثاني ثلاث هي صفوف الباقي زوايا 
         if((speaces[0] != ' ') && (speaces[0] == speaces[1]) && (speaces[1] == speaces[2]))


         speaces[0] == player ? cout<<"YOU WIN!!!!!\n" : cout<<"YOU LOSE!!!!!\n";



        else if((speaces[3] != ' ') && (speaces[3] == speaces[4]) && (speaces[4] == speaces[5]))


         speaces[3] == player ? cout<<"YOU WIN!!!!!\n" : cout<<"YOU LOSE!!!!!\n";

      else if((speaces[6] != ' ') && (speaces[6] == speaces[7]) && (speaces[7] == speaces[8]))


         speaces[6] == player ? cout<<"YOU WIN!!!!!\n" : cout<<"YOU LOSE!!!!!\n";

      else if((speaces[0] != ' ') && (speaces[0] == speaces[3]) && (speaces[3] == speaces[6]))


         speaces[0] == player ? cout<<"YOU WIN!!!!!\n" : cout<<"YOU LOSE!!!!!\n";
         


         else if((speaces[1] != ' ') && (speaces[1] == speaces[4]) && (speaces[4] == speaces[7]))


         speaces[1] == player ? cout<<"YOU WIN!!!!!\n" : cout<<"YOU LOSE!!!!!\n";

        else if((speaces[2] != ' ') && (speaces[2] == speaces[5]) && (speaces[5] == speaces[8]))


         speaces[2] == player ? cout<<"YOU WIN!!!!!\n" : cout<<"YOU LOSE!!!!!\n";

         //
         else if((speaces[0] != ' ') && (speaces[0] == speaces[4]) && (speaces[4] == speaces[9]))


         speaces[0] == player ? cout<<"YOU WIN!!!!!\n" : cout<<"YOU LOSE!!!!!\n";



         else if((speaces[2] != ' ') && (speaces[2] == speaces[4]) && (speaces[4] == speaces[6]))


         speaces[2] == player ? cout<<"YOU WIN!!!!!\n" : cout<<"YOU LOSE!!!!!\n";

           else if((speaces[0] != ' ') && (speaces[0] == speaces[4]) && (speaces[4] == speaces[8]))


         speaces[0] == player ? cout<<"YOU WIN!!!!!\n" : cout<<"YOU LOSE!!!!!\n";



         else{
            return false;
         }
         return true;














         return 0;
         }
            bool checktie(char *speaces){
               for (int i=0;i<9;i++){

                  if(speaces [i]== ' '){
                     return false;
                  }
               }
               cout<<"THATS A TIE!!!!!\n";
              return true;
             return 0;
            }



