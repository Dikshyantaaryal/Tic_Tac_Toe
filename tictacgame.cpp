#include<iostream>
#include<stdlib.h>
using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};


void layout()
{
  system("cls");
  cout << "\n \t\t Tic Tac Toe \n\n";
  cout << "\tplayer 1(X)  --- player 2(O) \n\n\n" ;

  cout << "\t     |     |     " <<endl;
  cout << "\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] <<endl;
  cout << "\t_____|_____|_____" << endl;
  cout << "\t     |     |     " << endl;
  cout << "\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] <<endl;
  cout << "\t_____|_____|_____" << endl;
  cout << "\t     |     |     " << endl;
  cout << "\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] <<endl;
  cout << "\t     |     |     " <<endl;
}

int winner()
{
   if (square[1] == square[2] && square[2] == square[3])
      return 1;

   else if(square[4] == square[5] && square[5] == square[6])
      return 1;

   else if(square[7] == square[8] && square[8] == square[9])
      return 1;

   else if(square[1] == square[4] && square[4] == square[7])
      return 1;

   else if(square[2] == square[5] && square[5] == square[8])
      return 1;

   else if(square[3] == square[6] && square[6] == square[9])
      return 1;

   else if(square[1] == square[5] && square[5] == square[9])
      return 1;

   else if(square[3] == square[5] && square[5] == square[7])
      return 1;

   else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && 
      square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
      return 0;

   else 
      return 2;
}


int main()
{
   int pnum = 1,result,choice;
   char stamp;
   do{
      layout();
      pnum = (pnum % 2) ? 1:2;

      cout << "Player " << pnum << "'s turn, Enter a number: " ;
      cin >> choice;

      stamp = (pnum == 1)? 'X':'O';

      if (choice == 1 && square[1] == '1')
         square[1] = stamp;

      else if (choice == 2 && square[2] == '2')
         square[2] = stamp;

      else if (choice == 3 && square[3] == '3')
         square[3] = stamp;

      else if (choice == 4 && square[4] == '4')
         square[4] = stamp;

      else if (choice == 5 && square[5] == '5')
         square[5] = stamp;

      else if (choice == 6 && square[6] == '6')
         square[6] = stamp;

      else if (choice == 7 && square[7] == '7')
         square[7] = stamp;

      else if (choice == 8 && square[8] == '8')
         square[8] = stamp;

      else if (choice == 9 && square[9] == '9')
         square[9] = stamp;

      else 
         {cout << "\aInvalid Move" <<endl;
          pnum-- ;
          cin.ignore();
          cin.get();
       }

       result = winner();
       pnum++ ;

   } while (result == 2);
   layout();

   if (result == 1)
      cout << "\n\n    Yipeee!!!  Player " << --pnum << " won";
   else 
      cout << "\n\n    Draw Game!";
}
