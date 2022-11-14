#include <bits/stdc++.h>
//#include <conio.h>
#include <stdlib.h>
#include <string>
#include "functions.h"
#include <sstream>
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
                switch (mcqs) {
                    case 1: {
//                        string k;
                        cout << "\t\t\t\t\t" << "-------" << "ONLINE EXAMINATION SYSTEM" << "-----------\n";
                        cout << "PLEASE ENTER YOUR ROLL NUMBER ";
                        getline(cin, w);
                        getline(cin, w);
                        ifstream rollnum;   // making object of rollnum
                        rollnum.open("rollno.txt"); // opening of file rollno.txt where our roll numbers are
                        string stored;    //
                        string replaced;
                        int track = 0;
                        while (rollnum>>replaced)  // run a program till end of file
                        {
                              // getline function would pick each line from rollno and sotred and in stored variable
                             // stored variale will put this value in replaced variable
                            if( replaced==w)  // if replaced is equal to roll no student have entered
                            {
//                                cout<<"hello replace";

                                int h = 5;       //
                                rollnumber(h);// then simple call roll number function
                                break;
                            }
                           // making replaced string value to zero

                        }

                        rollnum.close();


                    }  // ending of sub switch case 1
                        break;


/////////this case 2 is for MS exam
                    case 2:
                    {
                        cout << "\t\t\t\t\t" << "-------" << "ONLINE EXAMINATION SYSTEM" << "-----------\n";
                        cout << "PLEASE ENTER YOUR ROLL NUMBER ";
                        getline(cin,w);
                        getline(cin,w);

                        ifstream rollnum;                             // making roll num object
                        rollnum.open("MSROLLNO.txt");   // opening of MSROLLNO file to get roll numbers of student
                        string replaced;             // replaced variable would be equal to stored variable in loop
                        while (rollnum>>replaced) {

                            if (replaced == w)
                            {
                                int h = 5;
                                MS(h); // MS  function
                                break;
                            }
                            replaced = "";
                        }


                    }
                    break;
                    case 3:
                    {
                        cout << "\t\t\t\t\t" << "-------" << "ONLINE EXAMINATION SYSTEM" << "-----------\n";
                        cout << "PLEASE ENTER YOUR ROLL NUMBER ", cin
                                >> w;  // MS student would have to enter his roll number here i put input variable w in global
                        ifstream rollnum;                             // making roll num object
                        rollnum.open("PHDROLLNO.txt");   // opening of PHDROLLNO file to get roll numbers of student
                        string replaced;             // replaced variable would be equal to stored variable in loop
                        while (rollnum>>replaced)
                        {
                            if (replaced == w) {
                                int h = 5;
                                PHD(h); // MS  function
                                break;
                            }
                            replaced = "";
                        }
                    }
                    case 4:
                    {
                        main();
                    }
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
                    {
                        string k;
                        cout<<"PLEASE ENTER YOUR ROLL NUMBER : ",cin>>k;  // input your roll number for checking result
                        ifstream red;   // making object of red
                        red.open("BSRESULT.txt"); // opening of result file where our reuslt has been stored
                        string qw;   //
                        string s;
                        //   int cm = 0;
                        while (!red.eof())  // read result file till end of file
                        {
                            getline(red,qw);  // stored everyline of result in qw string
                            // cm++;
                            for (int i = 0; i < 4; i++) // it would fetch only first four digit of each line
                            {
                                s+=qw[i]; // sroed that digits in s string
                            }
                            // cout<<s<<endl;s
                            if(s == k) // if s string equal to roll number student have entered
                            {
                                cout<<"------------------------------\n";
                                cout<<"------------------------------\n";
                                cout<<qw<<endl;                           // it would display his resilt
                                cout<<"------------------------------\n";
                                cout<<"------------------------------\n";

                            }
                            s = "";  // making strings value to zero
                            qw = "";
                        }

                    }
                        break;
                    case 2:
                       {
                        string k;
                        cout<<"PLEASE ENTER YOUR ROLL NUMBER : ",cin>>k;  // input your roll number for checking result
                        ifstream red;   // making object of red
                        red.open("MSRESULT.txt"); // opening of result file where our reuslt has been stored
                        string qw;   //
                        string s;
                        //   int cm = 0;
                        while (!red.eof())  // read result file till end of file
                        {
                            getline(red,qw);  // stored everyline of result in qw string
                            // cm++;
                            for (int i = 0; i < 5; i++) // it would fetch only first four digit of each line
                            {
                                s+=qw[i]; // sroed that digits in s string
                            }
                            // cout<<s<<endl;s
                            if(s == k) // if s string equal to roll number student have entered
                            {
                                cout<<"------------------------------\n";
                                cout<<"------------------------------\n";
                                cout<<qw<<endl;                           // it would display his resilt
                                cout<<"------------------------------\n";
                                cout<<"------------------------------\n";

                            }
                            s = "";  // making strings value to zero
                            qw = "";
                        }
                        cout<<"\t\t\t\t"<<"----"<<"PRESS ANY KEY TO MAIN WINDOW"<<"----";
                        cin.get();
                        cin.get();

                    }
                        break;
                    case 3:
                    {
                        string k;
                        cout<<"PLEASE ENTER YOUR ROLL NUMBER : ",cin>>k;  // input your roll number for checking result
                        ifstream red;   // making object of red
                        red.open("RESULTPHD.txt"); // opening of result file where our reuslt has been stored
                        string qw;   //
                        string s;
                        //   int cm = 0;
                        while (!red.eof())  // read result file till end of file
                        {
                            getline(red,qw);  // stored everyline of result in qw string
                            // cm++;
                            for (int i = 0; i < 5; i++) // it would fetch only first four digit of each line
                            {
                                s+=qw[i]; // sroed that digits in s string
                            }
                            // cout<<s<<endl;s
                            if(s == k) // if s string equal to roll number student have entered
                            {
                                cout<<"------------------------------\n";
                                cout<<"------------------------------\n";
                                cout<<qw<<endl;                           // it would display his resilt
                                cout<<"------------------------------\n";
                                cout<<"------------------------------\n";

                            }
                            s = "";  // making strings value to zero
                            qw = "";
                        }
                        cout<<"\t\t\t\t"<<"----"<<"PRESS ANY KEY TO MAIN WINDOW"<<"----";
                        cin.get();
                        cin.get();


                    }
                    case 4:
                    {
                        int main();
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
                switch (num) {
                    case 1:
                    {
                        string q;
                        cout << "ENTER ROLL NUMBER: ";
                        cin >> q;
                        cout << endl;
                        cout
                                << "--------------------------------------------------------------------------------------------------------\n";

                        ifstream ak;
                        ak.open("BSMERIT.txt");
                        string com;
                        string l;
                        while (getline(ak, com)) {
                            for (int i = 0; i < 4; i++) {
                                l += com[i];
                            }
                            if (l == q) {
                                // cout<<endl;
                                cout << com << endl;
                                cout
                                        << "--------------------------------------------------------------------------------------------------------\n";

                            }
                            l = "";
                        }
                        ak.close();
                        cout << "\t\t\t\t" << "----" << "PRESS ANY KEY TO MAIN WINDOW" << "----";

                        cin.get();
                        cin.get();
//                        int main();

                    }
                    break;
                    case 2:
                    {
                        string q;
                        cout << "ENTER ROLL NUMBER: ";
                        cin >> q;
                        cout << endl;
                        cout
                                << "--------------------------------------------------------------------------------------------------------\n";

                        ifstream ak;
                        ak.open("MSMERIT.txt");
                        string com;
                        string l;
                        while (getline(ak, com)) {
                            for (int i = 0; i < 5; i++)
                            {
                                l += com[i];
                            }
                            if (l == q)
                            {
                                cout << com << endl;
                                cout
                                        << "--------------------------------------------------------------------------------------------------------\n";

                            }
                            l = "";
                        }
                        ak.close();
                        cout << "\t\t\t\t" << "----" << "PRESS ANY KEY TO MAIN WINDOW" << "----";

                        cin.get();
                        cin.get();


                    }
                    break;
                    case 3:
                    {
                        string q;
                        cout << "ENTER ROLL NUMBER: ";
                        cin >> q;
                        cout << endl;
                        cout
                                << "--------------------------------------------------------------------------------------------------------\n";

                        ifstream ak;
                        ak.open("PHDMERIT.txt");
                        string com;
                        string l;
                        while (getline(ak, com)) {
                            for (int i = 0; i < 5; i++)
                            {
                                l += com[i];
                            }
                            if (l == q)
                            {
                                cout << com << endl;
                                cout
                                        << "--------------------------------------------------------------------------------------------------------\n";

                            }
                            l = "";
                        }
                        ak.close();
                        cout << "\t\t\t\t" << "----" << "PRESS ANY KEY TO MAIN WINDOW" << "----";

                        cin.get();
                        cin.get();


                    }
                    break;
                    case 4:
                    {
                        int main();
                    }
                }
            }
                break;
            case '4':
            {
                char t;
                do
                {
                    string st;
                    int x,count=1;
                    cout<<"                                "<<"WELCOME TO MCQS "<<endl;
                    cout<<"\t\t"<<"FILE FORMAT (PHDPAPER)(MSPAPER)(BSPAPER)""\n";
                    cout<<"ENTER A FILE NAME: ";cin>>st;
                    cout<<"\nENTER THE NUMBER OF MCQS :- ";
                    cin>>x;
                    string str;
                    string str1;
                    ofstream xyz;
                    xyz.open(st+".txt",ios::app);
                    for(int i = 1;i<=x;i++)
                    {
                        cout<<"\t MCQS NUMBER "<<i<<" :"<<" ";
                        getline(cin,str);
                        getline(cin,str);
                        xyz<<i<<") "<<str<<endl;
                        for ( int j = 1; j <= 4; j++)
                        {    string alp ="abcd";
                            cout<<"OPTION NUMBER : "<<j;
                            getline(cin,str1);
                            xyz<<alp[j-1]<<") "<<str1<<endl;
                        }
                    }
                    xyz.close();

                    cout<<"ENTER Y/y FOR REUSING :";
                    cin>>t;
                }while(t=='y'||t=='Y');


            }
            default:
                break;


        }
    }


    while( num!='y'&&num!='Y');
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////phd program



