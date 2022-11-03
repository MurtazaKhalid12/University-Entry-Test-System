#include <iostream>
#include "functions.h"
#include <string>
#include <iomanip>  //this is for setW() for centering text
using namespace std;

int main ()
{
    int user; //this for us to specify user
    int dummy=1; //this is for us to give to function
    cout<<setw(60)<<"Welcome to ITU entry test system in C++\n";
    cout<<"By Murtaza Khalid, Fatima Waseem, Ariba Mumtaz, Huzaifa Khan & Atif Ashraf\n";
    cout<<"\aPlease ENTER:\n1 for Student\n2 for Teacher\n3 for Admin\nYour input here: ";
    cin>>user;
    switch (user) {
        case 1:
            cout<<setw(60)<<"\n\nYou are a student, bahahahahaha what a loser";
            studentFunction(dummy);
            break;
        case 2:
            cout<<setw(60)<<"\n\nYou are a teacher";
            teacherFunction(dummy);
            break;
        case 3:
            cout<<setw(60)<<"\n\nYou are an admin";
            adminFunction(dummy);
            break;
        default:
            cout<<setw(60)<<"Invalid input";
            cout<<main();
    }

    return 0;
}