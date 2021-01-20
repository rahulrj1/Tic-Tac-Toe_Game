// Tic-Tac-Toe Game created by Rahul Kumar

#include <iostream>
using namespace std;
char box[10] = {'0','1','2','3','4','5','6','7','8','9'};
int inspectwin();
void create_board();
class Player
{
    public:
    int i;
    string s;
    char c;
}p1,p2;

int main()
{
    cout<<"|-*-*-*-*-*-*_THE_TIC-TAC-TOE_GAME_*-*-*-*-*-*-*-*-*-|"<<endl;
    cout<<"Please enter your names!"<<endl;
    cout<<"Player 1:"<<endl;
    p1.i=1;
    p2.i=2;
    getline(cin, p1.s);
    cout<<"Player 2:"<<endl;
    getline(cin, p2.s);
    cout<<"______________________________________________________"<<endl;
    cout<<"Hello! "<<p1.s<<" and "<<p2.s<<", Welcome to the Tic-Tac-Toe game!"<<endl;
    cout<<"````````````````````````````````````````````````````"<<endl;
    cout<<"These are the rules of the game:"<<endl;
    cout<<"1.This is a 2-player game & it's played on a 3x3 grid"<<endl;
    cout<<"2.Each player is given a turn to put their marks"<<endl<<"('X' or 'O') in one of the empty squares"<<endl;
    cout<<"3.The first player to get 3 of her marks in a row"<<endl<<"(up, down, across, or diagonally) is the winner"<<endl;
    cout<<"4.If all 9 squares are full then the game will be over"<<endl;
    cout<<"______________________________________________________"<<endl;
    cout<<"Dear "<<p1.s<<", Please choose your symbol (either 'X' or 'O')"<<endl;
    label:
    char ch;
    cin>>ch;
    if(ch=='X')
    {
        p1.c='X';
        p2.c='O';
    }
    else if(ch=='O')
    {
        p1.c='O';
        p2.c='X';
    }
    else
    {
        cout<<"Invalid choice!!! Please enter again!"<<endl;
        goto label;
    }
    system("clear");
    cout<<"|-*-*-*-*-*-*_THE_TIC-TAC-TOE_GAME_*-*-*-*-*-*-*-*-*-|"<<endl;
    int player=1,i,choice;
    char mark;
    do
    {
        create_board();
        if(player%2)
           player=p1.i;
         else
            player=p2.i;

        cout << "Player ";
        if(player==1)
         cout<<p1.s;
        else
          cout<<p2.s;
         cout<<", enter a number:  ";
        again: 
        cin >> choice;

        if(player == 1) 
          mark=p1.c; 
        else
          mark=p2.c;

        if (choice == 1 && box[1] == '1')
            box[1] = mark;
        else if (choice == 2 && box[2] == '2')
            box[2] = mark;
        else if (choice == 3 && box[3] == '3')
            box[3] = mark;
        else if (choice == 4 && box[4] == '4')
            box[4] = mark;
        else if (choice == 5 && box[5] == '5')
            box[5] = mark;
        else if (choice == 6 && box[6] == '6')
            box[6] = mark;
        else if (choice == 7 && box[7] == '7')
            box[7] = mark;
        else if (choice == 8 && box[8] == '8')
            box[8] = mark;
        else if (choice == 9 && box[9] == '9')
            box[9] = mark;
        else
        {
            cout<<"Invalid move! Please enter again\n";
            goto again;
            player--;
        }
        i=inspectwin();
        player++;
    }while(i==-1);
    create_board();
    if(i==1)
    {  if(player==1)
        cout<<"   "<<p1.s<<"  wins"<<endl;
       else
        cout<<"   "<<p2.s<<"  wins"<<endl;
        cout<<"______________________________________________________"<<endl;
    }
    else
        cout<<"   Game draw  "<<endl;
    return 0;
 }      
  int inspectwin()
{
    if (box[1] == box[2] && box[2] == box[3])

        return 1;
    else if (box[4] == box[5] && box[5] == box[6])

        return 1;
    else if (box[7] == box[8] && box[8] == box[9])

        return 1;
    else if (box[1] == box[4] && box[4] == box[7])

        return 1;
    else if (box[2] == box[5] && box[5] == box[8])

        return 1;
    else if (box[3] == box[6] && box[6] == box[9])

        return 1;
    else if (box[1] == box[5] && box[5] == box[9])

        return 1;
    else if (box[3] == box[5] && box[5] == box[7])

        return 1;
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' 
                    && box[4] != '4' && box[5] != '5' && box[6] != '6' 
                  && box[7] != '7' && box[8] != '8' && box[9] != '9')

        return 0;
    else
        return -1;
}

void create_board()
{
    system("clear");
    cout<<"\n\n|-*-*-*-*-*-*_THE_TIC-TAC-TOE_GAME_*-*-*-*-*-*-*-*-*-|\n\n"<<endl;
    cout << "Player 1 ("<<p1.s<<" ) : "<<p1.c<<"          "<< "Player 2 (" <<p2.s<<" ) : "<<p2.c<<"\n\n";
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << box[1] << "  |  " << box[2] << "  |  " << box[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl;

    cout << "     |     |     " << endl << endl;
} 

