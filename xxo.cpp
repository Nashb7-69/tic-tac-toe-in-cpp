#include <iostream>
#include <ctime>
using namespace std;
void drawboard(char *speaces);
//* here i draw my board!
void playermove(char *speaces,char plyaer);
void compuermove(char *speaces, char computer);
bool checkwinner(char *speaces,char player, char computer);
bool checktie(char *speaces);
int main(){

char speaces[9]={ ' ',' ',' ',' ',' ',' ',' ',' ',' '};
//! we used empty space to be more ez to deal with
char player ='X';
char computer = 'O';
bool running = true;


drawboard (speaces);

 while(running){
      playermove(speaces,player);
      drawboard (speaces);
      if( checkwinner(speaces, player, computer)){
      running=false;
      break;

      }
         else if (checktie(speaces)){
            running=false;
            break;
         }
      compuermove(speaces,computer);
      drawboard (speaces);
       if( checkwinner(speaces, player, computer)){
      running=false;
      break;

      }
         else if (checktie(speaces)){
            running=false;
            break;
         }
 } 
 cout<<"thx for playing this bad game!!!!!!";
}


void drawboard(char *speaces){

   cout<<endl;
   cout<< "     |     |      "<<endl;
   cout<< "  " << speaces[0] << "  |  "  << speaces[1] <<  "  |  "<< speaces[2] << "  " <<endl;
   cout<< "_____|_____|_____"<<endl;
   cout<< "     |     |      "<<endl;
   cout<< "  " << speaces[3] << "  |  "  << speaces[4] <<  "  |  "<< speaces[5] << "  " <<endl;
    cout<< "_____|_____|_____"<<endl;
    cout<< "     |     |      "<<endl;
    cout<< "  " << speaces[6] << "  |  "  << speaces[7] <<  "  |  "<< speaces[8] << "   "<<endl;
   cout<<endl;
}
   
   
    void playermove(char *speaces,char plyaer){
   int numb ;
   do{
    cout<<"enter a spot to place marker (1-9): "; 
    cin>>numb;
    numb-- ;
    if(speaces[numb]= ' '){
     speaces[numb]= plyaer;
     break;
    }
   }
   while (numb <= 0 || numb > 8);{


   }
   


    }
       void compuermove(char *speaces, char computer){
         int number;
         srand(time(0));
          while (true)
          {
            number= rand() %9;
            if(speaces[number]=' '){
            speaces[number]=computer;
            break;
            }
          }
          

       }
         bool checkwinner(char *speaces,char player, char computer){
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



