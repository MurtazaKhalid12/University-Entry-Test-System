#include <bits/stdc++.h>
//#include <conio.h>
#include <stdlib.h>
#include <string>
#include "functions.h"
#include <sstream>

void gg();
using namespace std;
double c;
string w;
//char num;
int main()
{
    char num;
    cout<<"\t\t\t\t\t"<<"-------"<<"ONLINE EXAMINATION SYSTEM"<<"-----------\n";
    do

    {

        cout<<"PRESS 1 FOR ATTEMPTING EXAM\n";
        cout<<"PRESS 2 FOR CHECKING RESULT\n";
        cout<<"PRESS 3 FOR CHECKING MERIT LiST\n";
        cout<<"PRESS 4 MAKING OF PAPER\n";
        cout<<"PRESS Y FOR EXIT\n";
        cin>>num;
        switch (num)
        {
            case '1':         // case 1 of main switch case
            {
                int mcqs;
                cout<<"ENTER 1 FOR BS PROGRAMS EXAMINATION\n";
                cout<<"ENTER 2 FOR MS PROGRAM EXAMINATION\n";
                cout<<"ENTER 3 FOR PHD PROGRAMS EXAMINATION\n";
                cout<<"ENTER 4 GOING BACK TO PROGRAM\n";
                cin>>mcqs;
                switch (mcqs)
                {
                    case 1:

                         bsexamination();
                         break;

                    case 2:

                         msexamination();
                    break;

                    case 3:

                          phdexamination();
                    break;

                    case 4:
                    {
                        main();
                    }
                    break;

                    default:
                        break;

                }
            }

                break;


                // checking result of students
            case '2':  // case 2 of main switch case
            {
                int p;
                cout<<"ENTER 1 FOR BS\n";
                cout<<"ENTER 2 FOR MS\n";
                cout<<"ENTER 3 FOR PHD\n";
                cout<<"ENTER 4 TO MAIN PROGRAM\n";
                cin>>p;
                switch (p)
                {
                    case 1:
                          BS_RESULT_CHECK();
                        break;
                    case 2:
                        MS_RESULT_CHECK();
                        break;
                    case 3:
                         PHD_RESULT_CHECK();
                        break;
                    case 4:
                    {
                         main();
                    }
                    default:
                        break;
                }


            }
                break;

            case 'y':
            case 'Y':
            {


            }
                break;
                // case 3 of main switch case
            case '3': {
                int num;
                cout << "ENTER 1 FOR CHECKING BS MERIT LIST\n";
                cout << "ENTER 2 FOR CHECKING MS MERIT LIST\n";
                cout << "ENTER 3 FOR CHECKING PHD MERIT LIST\n";
                cout<<  "ENTER 4 FOR GOING BACK TO PROGRAM\n";
                cin >> num;
                switch (num)
                {
                    case 1:
                        BS_MERIT();
                    break;
                    case 2:
                        MS_MERIT();
                    break;
                    case 3:
                        PHD_MERIT();
                    break;
                    case 4:

                        main();

                 }

                                      }
                break;
            case '4':
                huzaifa_function();



        }
    }


    while( num!='y'&&num!='Y');
}

void gg()
{
    cout<<w;
}

// //////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ///////////////////////////////////////////phd program



