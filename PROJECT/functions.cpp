#include <iostream>
#include "functions.h"
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main();


int compareFunction(string s1, string s2,int l)

{
    int f = 0;
    int s = 0;
    for (int i = 0; i < l; i++)
    {
        if(s1[i] == s2[i])
        {
            f++;

        }
        else
            s++;
    }
    ofstream st2;
    st2.open("GENERAL_CORRECT.txt");
    st2<<f<<endl;
    st2<<s;

    return f;             // number of correct options would be return
    st2.close();
}

// ///////////////////////
void rollnumber(int n)   // defining roll number function
{   string x;
    int g = 5;
    int count = 1;
    ifstream abj;
    abj.open("BSPAPER.txt");// opening of bs paper in reading mode
    ofstream abi;
    abi.open("BS_I_FILL.txt");  // opening of q file where my options will go in
    string word;                 // making of string of name word
    ifstream h;

    while (getline(abj,word))   // reading lines from MCQS file and put in word string
    {


        // abj.getline(word,10000);
        cout<<word;             // display each MCQS
        cout<<endl;

        if(count==g)     // if count is equal to 5
        {
            cout<<"\nENTER YOUR CHOICE: ";
            cin>>x;   // we would have to enter our choise
            cout<<endl;
            abi<<x<<endl;  // and put that choice in our output file
            g+=5;

        }
        count++;
        // n+=10;

    }

    ifstream screen;
    screen.open("BS_I_FILL.txt");
    string str;
    string st2;
    while (!screen.eof())
    {

        getline(screen,str);
        st2+=str;

    }

    ifstream correct;
    correct.open("BSKEY.txt");// correct opion file opening
    char option[1000];
    string st1;
    double cn = 0;
    while (!correct.eof())  // running file till end
    {
        correct.getline(option,1000);
        st1+=option;   // storing string option
        cn++;
    }


    c = compareFunction(st1,st2,cn); // givining our two strings to compare function along with number of mcqs which is cn

    string intro = " YOUR MARKS IS ";  // making intro mcqs
    string sum = w +intro+ to_string(c);
    ofstream output;
    output.open("BSRESULT.txt",ios::app);
    output<<sum<<endl;

    string meri;
    string departmentcomputerengg;
    string congratulations;
    departmentcomputerengg = " COMPUTER ENGINEERING ";
    string departmentcomputerscience = " COMPUTER SCIENCE ";
    string departmentelectricalengineering = " ELECTRICAL ENGINEERING ";
    congratulations = " CONGRATULATIONS DEAR YOU BEEN SELECTED IN ";

    ofstream marit;
    marit.open("BSMERIT.txt",ios::app);
    double k =  (c/cn)*(100);
//    cout<<k;

    if( k>=90 )
    {
        sum = w+congratulations+departmentcomputerengg;
        marit<<sum<<endl;
    }
    if(k>=70&&k<90)
    {
        sum = w+congratulations+departmentcomputerscience;
        marit<<sum<<endl;
    }
    if(k<50&&k>=30)
    {
        sum = w+congratulations+departmentelectricalengineering;
        marit<<sum<<endl;
    }
    if(k<30&&k>0)
    {
        sum = w+" YOUR MARKS ARE LOW YOU ARE ON WAITING LIST ";
    }
    if(k == 0)
    {
//        cout<<"YOU HAVE NOT SELECTED";
        sum = w+" YOU HAVE NOT SELECTED TRY NEXT TIME BEST OF LUCK!";
    }
    marit.close();




    output.close();
    correct.close();
    abj.close();
    abi.close();

//    cout<<"life is good";

    ifstream off;
    off.open("GENERAL_CORRECT.txt");
    string optin;
    string ste1;
    string ste2;
    if(!off)
    {
        cout<<"file not opened correctly";
    }
    int cnf = 1;
    while (getline(off,optin))  // running file till end
    {
       if(cnf == 1)
           ste1+=optin;
       if(cnf==2)
           ste2+=optin;
    }
//    cout<<ste1<<endl;
//    cout<<ste2;

      string rs = "CORRECT OPTIONS ARE ";
      string rt = "INCORRECT OPTIONS ARE ";
      string su = rs+ste1[0];
      string sf = rt+ste1[1];
    cout<<"--------------------------------\n";
    cout<<su<<endl;
     cout<<sf<<endl;
    cout<<"--------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t"<<"PRESS ANY KEY TO MAIN WINDOWS"<<endl;

    cin.get();
    cin.get();

    main();

}


// /////////////////////////////////////////////////////////////////////////////////////
 void MS(int n)
 { char x;
     int g = 5;
     int count = 1;
     ifstream abj;
     abj.open("MSPAPER.txt"); // this fill contain my paper of ms
     ofstream abi;
     abi.open("MS_I_FILL.txt"); // in this file my option will go
     string word;
     while (getline(abj,word))
     {
         // abj.getline(word,10000);
         cout<<word;
         cout<<endl;

         if(count==g)
         {
             cout<<"\nENTER YOUR CHOICE: ";
             cin>>x;
             cout<<endl;
             abi<<x<<endl;
             g+=5;

         }
         count++;
         // n+=10;

     }
     ifstream screen;
     screen.open("MS_I_FILL.txt");
     string str;
     string st2;
     while (!screen.eof())
     {

         getline(screen,str);
         st2+=str;


     }

     ifstream correct;
     correct.open("MSKEY.txt");// correct opion file opening
     char option[1000];
     string st1;
     int cn = 0;
     while (!correct.eof())  // running file till end
     {
         correct.getline(option,1000);
         st1+=option;   // storing string option
         cn++;
     }
     c = compareFunction(st1,st2,cn);
     double k = (c/cn)*(100);
//     cout<<k;
     string intro = " YOUR MARKS IS ";
     string sum = w +intro+ to_string(c);
     ofstream output;
     output.open("MSRESULT.txt",ios::app);
     output<<sum<<endl;
     string meri;
     string departmentsoftwareengineering;
     string congratulations;
     departmentsoftwareengineering = " SOFTWARE ENGINEERING ";
     string departmentdatascience = " DATA SCIENCE ";
     string departmentmanagmenttechnology = "MANAGMENT TECHNOLOGY";
     string departmentelectricalengineering = " ELECTRICAL ENGINEERING ";
     congratulations = " CONGRATULATIONS DEAR YOU BEEN SELECTED IN ";

     ofstream marit;
     marit.open("MSMERIT.txt",ios::app);

     if( k>=90 )
     {
         sum = w+congratulations+departmentsoftwareengineering;
         marit<<sum<<endl;
     }
     if(k>=70&&k<90)
     {
         sum = w+congratulations+departmentdatascience;
         marit<<sum<<endl;
     }
     if(k<70&&k>=50)
     {
         sum = w+congratulations+departmentelectricalengineering;
         marit<<sum<<endl;
     }
     if(k<50&&k>=30)
     {
         sum = w+congratulations+departmentmanagmenttechnology;
         marit<<sum<<endl;
     }

     if(k==0)
     {
         cout<<"YOU HAVE NOT SELECTED";
         sum = w+" YOU HAVE NOT SELECTED TRY NEXT TIME BEST OF LUCK!";
     }
     marit.close();




     output.close();
     correct.close();
     abj.close();
     abi.close();

    ifstream off;
    off.open("GENERAL_CORRECT.txt");
    string optin;
    string ste1;
    string ste2;
    if(!off)
    {
        cout<<"file not opened correctly";
    }
    int cnf = 1;
    while (getline(off,optin))  // running file till end
    {
        if(cnf == 1)
            ste1+=optin;
        if(cnf==2)
            ste2+=optin;
    }
//    cout<<ste1<<endl;
//    cout<<ste2;

    string rs = "CORRECT OPTIONS ARE ";
    string rt = "INCORRECT OPTIONS ARE ";
    string su = rs+ste1[0];
    string sf = rt+ste1[1];
cout<<"--------------------------------\n";
    cout<<su<<endl;
    cout<<sf<<endl;
cout<<"--------------------------------\n";


     cout<<"\t\t\t\t\t\t\t\t"<<"PRESS ANY KEY TO MAIN WINDOWS"<<endl;

     cin.get();
     cin.get();


      main();
 }



// ////////////////////////////////////////////////////////////
 void PHD(int n)
 { char x;
     int g = 5;
     int count = 1;
     ifstream abj;
     abj.open("PHDPAPER.txt"); // this fill contain my paper of PHD
     ofstream abi;
     abi.open("PHD_I_FILL.txt"); // in this file my option will go
     string word;
     while (getline(abj,word))
     {
         cout<<word;
         cout<<endl;

         if(count==g)
         {
             cout<<"\nENTER YOUR CHOICE: ";
             cin>>x;
             cout<<endl;
             abi<<x<<endl;
             g+=5;

         }
         count++;
         // n+=10;

     }
     ifstream screen;
     screen.open("PHD_I_FILL.txt");
     string str;
     string st2;
     while (!screen.eof())
     {

         getline(screen,str);
         st2+=str;


     }

     ifstream correct;
     correct.open("PHDKEY.txt");// correct opion file opening
     char option[1000];
     string st1;
     int cn = 0;
     while (!correct.eof())  // running file till end
     {
         correct.getline(option,1000);
         st1+=option;   // storing string option
         cn++;
     }
     c = compareFunction(st1,st2,cn);
//     cout<</

     string intro = " YOUR MARKS IS ";
     string sum = w +intro+ to_string(c);
     ofstream output;
     output.open("RESULTPHD.txt",ios::app);
     output<<sum<<endl;
     string meri;
     string departmentdatascience;
     string congratulations;
     departmentdatascience = " DATA SCIENCE ";
     string departmentmachinelearning = " MACHINE LEARNING ";
     string departmentartificialintilligence = " ARTIFICIAL INTILLIGENCE ";
     string departmentmanagmenttechnology = "MANAGMENT TECHNOLOGY ";
     congratulations = " CONGRATULATIONS DEAR YOU BEEN SELECTED IN ";
   string otherstuffs = " YOU ARE ALSO ELIGIBLE FOR ML,AI,MT CONTACT WITH UNIVERSITY BEST OF LUCK ";
      string otherstuffs1 = " YOU ARE ALSO ELIGIBLE FOR AI,MT CONTACY WITH UNIVERSITY BEST OF LUCK ";
      string otherstuff2 = " YOU ARE ALSO ELIGIBLE FOR MT,NANOTECH CONTACT WITH UNIVERSITY BEST OF LUCK ";
      string otherstuff3 = "YOU MARKS ARE LOW SO YOU ARE ON WAITING LIST";

     ofstream marit;

     marit.open("PHDMERIT.txt",ios::app);
//     cout<<c;
//     cout<<cn;
      double m = (c/cn)*(100);
//      cout<<m;
     if( m >=90 )
     {
         sum = w+congratulations+departmentdatascience+otherstuffs;
         marit<<sum<<endl;
     }
     if(m<90&&m>=70)
     {
         sum = w+congratulations+departmentmachinelearning+otherstuffs1;
         marit<<sum<<endl;
     }
     if(m<70&&m>=50)
     {
         sum = w+congratulations+departmentartificialintilligence+otherstuff2;
         marit<<sum<<endl;
     }
     if(m<50&&m>=30)
     {
         sum = w+congratulations+departmentmanagmenttechnology;
         marit<<sum<<endl;
     }
     if(c=0&&c<30)
     {

     }

     if(c==0)
     {
         cout<<"YOU HAVE NOT SELECTED";
         sum = w+" YOU HAVE NOT SELECTED TRY NEXT TIME BEST OF LUCK!";
     }
     marit.close();




     output.close();
     correct.close();
     abj.close();
     abi.close();

    ifstream off;
    off.open("GENERAL_CORRECT.txt");
    string optin;
    string ste1;
    string ste2;
    if(!off)
    {
        cout<<"file not opened correctly";
    }
    int cnf = 1;
    while (getline(off,optin))  // running file till end
    {
        if(cnf == 1)
            ste1+=optin;
        if(cnf==2)
            ste2+=optin;
    }
//    cout<<ste1<<endl;
//    cout<<ste2;

    string rs = "CORRECT OPTIONS ARE ";
    string rt = "INCORRECT OPTIONS ARE ";
    string su = rs+ste1[0];
    string sf = rt+ste1[1];
    cout<<"--------------------------------\n";
    cout<<su<<endl;
    cout<<sf<<endl;
    cout<<"--------------------------------\n";

     cout<<"\t\t\t\t\t\t\t\t"<<"PRESS ANY KEY TO MAIN WINDOWS"<<endl;

     cin.get();
     cin.get();


     main();
 }

 // BS EXAMINATION FUNCTION
void bsexamination()
 {
string k;
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
     }

// MS EXAMINATION FUNCTION
void msexamination()
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

//PHD examination
void phdexamination()
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

//BS RESULT CHECKING FUNCTION
void BS_RESULT_CHECK()
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


void MS_RESULT_CHECK()
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

void PHD_RESULT_CHECK()

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


// MERIT list CHECKING
void BS_MERIT()
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

void MS_MERIT()
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

void PHD_MERIT()
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

void huzaifa_function()
{
    char t;
    do {
        string st;
        int x, count = 1;
        cout << "                                " << "WELCOME TO MCQS " << endl;
        cout << "\t\t" << "FILE FORMAT (PHDPAPER)(MSPAPER)(BSPAPER)""\n";
        cout << "ENTER A FILE NAME: ";
        cin >> st;
        cout << "\nENTER THE NUMBER OF MCQS :- ";
        cin >> x;
        string str;
        string str1;
        ofstream xyz;
        xyz.open(st + ".txt", ios::app);
        for (int i = 1; i <= x; i++) {
            cout << "\t MCQS NUMBER " << i << " :" << " ";
            getline(cin, str);
            getline(cin, str);
            xyz << i << ") " << str << endl;
            for (int j = 1; j <= 4; j++) {
                string alp = "abcd";
                cout << "OPTION NUMBER : " << j;
                getline(cin, str1);
                xyz << alp[j - 1] << ") " << str1 << endl;
            }
        }
        xyz.close();

        cout << "ENTER Y/y FOR REUSING :";
        cin >> t;
    } while (t == 'y' || t == 'Y');

}