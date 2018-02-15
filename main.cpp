#include <iostream>

using namespace std;

int main()
{
    int row,column,draw=1,k;
    char p1,p2,number;

    cout<<"   -------------"<<'\n';
    cout<<"   | 1 | 2 | 3 |"<<'\n';
    cout<<"   | 4 | 5 | 6 |"<<'\n';
    cout<<"   | 7 | 8 | 9 |"<<'\n';
    cout<<"   -------------"<<'\n';

    char mat[3][3]=
    {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    cout<<"player1  choose x or o: ";
    cin>>p1;
    if (p1=='x')
    {
        p2='o';
    }
    else
    {
        p2='x';
    }

    for (int step=0; step<9; step++)
    {
        cout<<"enter number: ";
        cin>>number;

        for (row=0; row<3; row++)
        {
            k=1;
            for(column=0; column<3; column++)
            {
                if (mat[row][column]==number)
                {
                    k=0;
                    break;
                }
            }
            if (k==0)
            {
                break;
            }
        }


        if((mat[row][column]=='x') || (mat[row][column]=='o'))
        {
            cout<<"invalid"<<'\n';
            cout<<"enter number: ";
            cin>>number;
        }


        if (step%2==0)
        {
            mat[row][column]=p1;
        }
        else
        {
            mat[row][column]=p2;
        }
        for (int row=0; row<3; row++)
        {
            cout<<"   -------------"<<endl;
            cout<<"   | "<<mat[row][0]<<" | "<<mat[row][1]<<" | "<<mat[row][2]<<" |"<<endl;
        }
        cout<<"   -------------"<<endl;
        if (step>=4)
        {
            for (int row=0; row<3; row++)
            {
                if(((mat[row][0]==mat[row][1])&&(mat[row][1]==mat[row][2])&&(mat[row][2]==p1))||((mat[0][row]==mat[1][row])&&(mat[1][row]==mat[2][row])&&(mat[2][row]==p1))||((mat[0][0]==mat[1][1])&&(mat[1][1]==mat[2][2])&&(mat[2][2]==p1))||((mat[0][2]==mat[1][1])&&(mat[1][1]==mat[2][0])&&(mat[2][0]==p1)))
                {
                    cout<<"player1 is the winner \0/";
                    draw=0;
                    break;
                }
                else if(((mat[row][0]==mat[row][1])&&(mat[row][1]==mat[row][2])&&(mat[row][2]==p2))||((mat[0][row]==mat[1][row])&&(mat[1][row]==mat[2][row])&&(mat[2][row]==p2))||((mat[0][0]==mat[1][1])&&(mat[1][1]==mat[2][2])&&(mat[2][2]==p2))||((mat[0][2]==mat[1][1])&&(mat[1][1]==mat[2][0])&&(mat[2][0]==p2)))
                {
                    cout<<"player2 is the winner \0/";
                    draw=0;
                    break;
                }
            }

            }if (draw==0)
            {
                break;
            }
        }
        if (draw==1)
        {
            cout<<"its a draw";
        }
        return 0;
    }
