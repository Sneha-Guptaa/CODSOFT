//TASK : TIC TAC TOE game is created using c++ in which two players can play.
#include <iostream>
using namespace std;
// check the draw condition
bool cdraw(char a[10]) {

  if (a[1] != '1' && a[2] != '2' && a[3] != '3' && a[4] != '4' && a[5] != '5' &&
      a[6] != '6' && a[7] != '7' && a[8] != '8' && a[9] != '9')
    return 1;
  else
    return 0;
}

// check the won condition
bool cwin(char a[10], char player)

// checking row
{

  if (a[1] == player && a[2] == player && a[3] == player)
    return true;
  else if (a[4] == player && a[5] == player && a[6] == player)
    return true;
  else if (a[7] == player && a[8] == player && a[9] == player)
    return true;

  // checking column

  else if (a[1] == player && a[4] == player && a[7] == player)
    return true;
  else if (a[2] == player && a[5] == player && a[8] == player)
    return true;
  else if (a[3] == player && a[6] == player && a[9] == player)
    return true;
  // checking diagonal
  else if (a[1] == player && a[5] == player && a[9] == player)
    return true;
  else if (a[3] == player && a[5] == player && a[7] == player)
    return true;
  else
    return false;
}

//function is used to create game board.
void draw_board(char a[10]) {
  cout << "player 1 (X) - player 2(O) " << endl;
  cout<< "............................"<<endl;
  cout << "    |    |    " << endl;
  cout << a[1] << "   | "
       << "" << a[2] << "  |"
       << " " << a[3] << endl;
  cout << "----|----|----" << endl;
  cout << a[4] << "   |"
       << " " << a[5] << "  |"
       << " " << a[6] << endl;
  cout << "----|----|----" << endl;
  cout << a[7] << "   |"
       << " " << a[8] << "  |"
       << " " << a[9] << endl;
  cout << "    |    |    " << endl;
}
int main() {
  char a[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  int r;
  bool p1turn = true;
  char playAgain;
  string p1, p2;
  //game begininng
  cout << "WELCOME TO TIC TAC TOE GAME" << endl;
  cout << "..........................." << endl;
  cout << endl;
  cout << "Enter player 1 name";
  getline(cin >> ws, p1);
  cout << endl;
  cout << "Enter player 2 name";
  getline(cin >> ws, p2);
  cout << endl;
  cout << "Player 1 " << p1 << " will play first with mark : 'X'" << endl;
  cout << "Player 2 " << p2 << " will play next with mark : 'O'" << endl;
  cout << endl;
  cout << "Here is your board" << endl;
  cout << endl;

  p1turn = true;
  while (true) {
    draw_board(a);
    // player 1 is playing
    if (p1turn == true) {
      cout << "Player 1" << p1 << "'s TURN" << endl;
      cout<<endl;
      cout << "Plz enter your move index no";
      cin >> r;
      cout<<endl;

      { 
        //checking if given index is already occupied or not and updating the move
        if (a[r] != 'X' && a[r] != 'O')
        {
          a[r] = 'X';
          // displaying the updated board
          draw_board(a);
          //checking for win condition for player 1
          if (cwin(a, 'X')) 
          {
            cout << "Player 1 : " << p1 << "WON" << endl;
            break;
          }
            //checking for draw condition for player 1
          else if (cdraw(a)) {
            cout << "Match Draw!!!" << endl;
            break;
          }
          else
          // game is in progress
          {
            cout << "Game is in progress" << endl;
            cout << endl;
            cout << "-------------------------" << endl;
            cout << endl;
            p1turn = !p1turn;
          }
        } else {
          cout << "INVAILD MOVE" << endl;
          continue;
        }
      }
    }
   

    else if (p1turn == false)
    // player 2 is playing
    {
      cout << "Player 2" << p2 << "'s TURN :" << endl;
      cout<<endl;
      cout << "Plz enter your move index no";
      cin >> r;
      cout<<endl;

      //checking if given index is already occupied or not and updating the move
      if (a[r] != 'X' && a[r] != 'O') {
        a[r] = 'O';
        // displaying the updated board
        draw_board(a);
        //checking for win condition for player 2
        {
          if (cwin(a, 'O'))
          {
            cout << "Player 2 : " << p2 << "WON" << endl;
            break;
          } 
            //checking for draw condition for player 2
          else if (cdraw(a)) 
          {
            cout << "Match Draw!!!" << endl;
            break;
          } 
          else 
          //game is in progress
          {
            cout << "Game is in progress" << endl;
            cout << endl;
            cout << "-------------------------" << endl;
            cout << endl;
            p1turn = !p1turn;
          }
        }

      }

      else {
        cout << "INVAILD MOVE" << endl;
        continue;
      }
    }
  }
 cout<<endl;
  //asking user to play again or not
  cout << "Do you want to play again? (y/n): ";
  cin >> playAgain;

  if (playAgain == 'y') 
  {
    cout<<endl;
    main(); // Restart the game
  }

  return 0;
}
