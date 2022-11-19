#include<iostream>
#include "functions.h"
#include<bits/stdc++.h>
#include <fstream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <sstream>


void loopProgram ();
void optionShow();
void optionSelect();
using namespace std;

double c;
string w;
int main ()
{
    cout<<"\n\n\t\t\t\t\tWelcome to ITU entry test system in C++\n";
    cout<<"\t\t\tBy Murtaza Khalid, Fatima Waseem, Ariba Mumtaz, Huzaifa Khan & Atif Ashraf\n";
    optionShow();
    return 0;
}


//////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////


void optionShow()
{
    cout<<"\n\n\t\t\t\t\tPlease ENTER:\n\t\t\t\t\t1)Student mode\n\t\t\t\t\t2)Teacher mode";
    cout<<"\n\t\t\t\t\t3)Admin mode\n\t\t\t\t\t4)Terminate program\n\t\t\t\t\tYour input here: ";
    optionSelect();
}


////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////


void optionSelect()
{
    int user; //this for us to specify user
    cin>>user;
    cin.clear();
    cin.ignore();
    switch (user) {
        case 1:
            cout<<"\n\n\t\t\t\t\tYou are a student.\n\n";
            studentFunction(1);
            loopProgram();
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\tYou are a teacher\n\n";
            teacherFunction(1);
            loopProgram();
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\tYou are an admin\n\n";
            adminFunction(1);
            loopProgram();
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\tThank you for your time.\n\n";
            seperationFunction();
            break;
        default:
            cout<<"\t\t\t\t\tInvalid choice, try again.\n\n";
            optionShow();
    }

}
void loopProgram()
{
    main();
}
