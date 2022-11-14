#include <iostream>
#include "functions.h"
#include <bits/stdc++.h>
#include <string>
using namespace std;


int compareFunction(string s1, string s2,int l)

{
    int f = 0;
    for (int i = 0; i < l; i++)
    {
        if(s1[i] ==s2[i])
        {
            f++;

        }
    }
    return f; // number of correct options would be return
}

////////////////////////////////////////////////////////////////////////////////
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
//    h.open("BSKEY.txt");
//    string a;
//    int l =0;

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
//    cout<<l;
    // it this point w have entered our MCQS and our MCQS option is in file
    ifstream screen;        // making of screen object
    screen.open("BS_I_FILL.txt");  // opening of file we input mcqs
    string str;           // making two strings str and str2
    string st2;
    while (!screen.eof())     // runing loop in our stored Mcqs file till end
    {

        getline(screen,str); // store each mcqs in str string
        st2+=str;   // store str value in str2
//        cout<<st2;

    }
    // now we will compare our options with correct options

    ifstream correct;        // making of screen object
    correct.open("BSKEY.txt");  // opening of file we input mcqs
    string sr;           // making two strings str and str2
    string st1;
    double cn = 0;
    if(!correct)
    {
        cout<<"file not opened";
    }
    while (!correct.eof())     // runing loop in our stored Mcqs file till end
    {
        getline(correct,sr); // store each mcqs in str string
        st1+=sr;// store str value in str2
//        cout<<st1;
       //cout<<cn++;
//        cout<<st1<<endl;
//        cout<<sr<<endl;
        cn++;
    }
//    cout<<st1;
   /* correct.close();
//    string y;
    string st3;
   string st3;
   string y;
   char o[cn];*/
    for (int i = 0; i <cn; ++i)
    {
       cout<<st1[i];
    }


    c = compareFunction(st1,st2,cn); // givining our two strings to compare function along with number of mcqs which is cn
     cout<<c;
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
    double k =  (n/cn)*100;

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
        cout<<"YOU HAVE NOT SELECTED";
        sum = w+" YOU HAVE NOT SELECTED TRY NEXT TIME BEST OF LUCK!";
    }
    marit.close();




    output.close();
    correct.close();
    abj.close();
    abi.close();

    cout<<"\t\t\t\t\t\t\t\t"<<"PRESS ANY KEY TO MAIN WINDOWS"<<endl;

    cin.get();
    cin.get();
}


 /////////////////////////////////////////////////////////////////////////////////////
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
     cout<<k;
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

     cout<<"\t\t\t\t\t\t\t\t"<<"PRESS ANY KEY TO MAIN WINDOWS"<<endl;

     cin.get();
     cin.get();


     int main();
 }



 ////////////////////////////////////////////////////////////
 void PHD(int n)
 { char x;
     int g = 5;
     int count = 1;
     ifstream abj;
     abj.open("PHDPAPER.txt"); // this fill contain my paper of ms
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
      cout<<m;
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

     cout<<"\t\t\t\t\t\t\t\t"<<"PRESS ANY KEY TO MAIN WINDOWS"<<endl;

     cin.get();
     cin.get();


    int main();
 }

