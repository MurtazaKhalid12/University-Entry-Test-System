#include <iostream>
#include "functions.h"
#include <string>
void loopProgram (int dummy);
void optionShow(int dummy);
void optionSelect(int dummy);
using namespace std;

int main ()
{

    int dummy=1; //this is for us to give to function
    cout<<"\n\n\t\t\t\t\tWelcome to ITU entry test system in C++\n";
    cout<<"\t\t\tBy Murtaza Khalid, Fatima Waseem, Ariba Mumtaz, Huzaifa Khan & Atif Ashraf\n";
    optionShow(dummy);
    return 0;
}


//////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////


void optionShow(int dummy)
{
    int dummyvalue=1;
    cout<<"\n\n\t\t\t\t\tPlease ENTER:\n\t\t\t\t\t1)Student mode\n\t\t\t\t\t2)Teacher mode";
    cout<<"\n\t\t\t\t\t3)Admin mode\n\t\t\t\t\t4)Terminate program\n\t\t\t\t\tYour input here: ";
    optionSelect(dummyvalue);
}


////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////


void optionSelect(int dummy)
{
    int user; //this for us to specify user
    cin>>user;
    switch (user) {
        case 1:
            cout<<"\n\n\t\t\t\t\tYou are a student, bahahahahaha what a loser";
            studentFunction(dummy);
            loopProgram(dummy);
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\tYou are a teacher";
            teacherFunction(dummy);
            loopProgram(dummy);
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\tYou are an admin";
            adminFunction(dummy);
            loopProgram(dummy);
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\tThank you for your time.";
            break;
        default:
            cout<<"\t\t\t\t\tInvalid choice, try again.";
            optionShow(dummy);
    }

}
void loopProgram(int dummy)
{
    cout<<main();
}