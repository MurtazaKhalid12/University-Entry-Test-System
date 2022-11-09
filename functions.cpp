#include<iostream>
#include "functions.h"
using namespace std;
int dummy=1;
void studentFunction(int dummy)
{
    cout<<"\n\n\n\t\t\t\t\tPlease enter your login details to continue: ";
    cout<<studentLogin(dummy); //if this function approves, then we can move on.
    cout<<"\n\n\n\t\t\t\t\tWelcome Dear Student, Here are your options: ";
    cout<<"\n\n\t\t\t\t\tPlease ENTER:\n\t\t\t\t\t1 for MCQs type Exam\n\t\t\t\t\t2 for individual result check";
    cout<<"\n\t\t\t\t\t3 for checking admission status\n\t\t\t\t\t4 for merit lists";
    cout<<"\n\t\t\t\t\t5 to go back\n\t\t\t\t\tYour input here: ";
    int studentOptionSelect; cin>>studentOptionSelect;
    switch (studentOptionSelect) {
        case 1:
            cout<<"\t\t\tGet ready to suffer\n";
            examFunction(dummy);
            break;
        case 2:
            cout<<"\t\t\tYou are already dead\n";
            resultCheckFunction(dummy);
            break;
        case 3:
            cout<<"\t\t\tThe only admission you get is to a mental institute\n";
            admissionStatusFunction(dummy);
            break;
        case 4:
            cout<<"\t\t\tMerit list function, no joke here XD\n";
            meritListFunction(dummy);
            break;
        case 5:
            cout<<"\t\t\tBack to ooga booga student function\n";
            studentFunction(dummy);
            break;
        default:
            cout<<"Enter a valid option next time";


    }
}
void teacherFunction(int dummy)
{
    cout<<"\n\n\n\t\t\t\t\tPlease enter your login details to continue: ";
    teacherLogin(dummy); //we call a function to get student details
}
void adminFunction(int dummy)
{
    cout<<"\n\n\n\t\t\t\t\tPlease enter your login details to continue: ";
    adminLogin(dummy); //we call a function to get student details

}


//then we start defining functions for the three modes

//STUDENT FUNCTIONS:

int studentLogin(int dummy)
{
    //if login details are incorrect, we'll call studentloginloop to retry

}
void studentLoginLoop (int dummy)
{
 //we'll call studentlogin here again
}

//TEACHER FUNCTIONS:

int teacherLogin(int dummy)
{
    cout<<"Under progress";
    return 1; //return 1 or zero based on login credentials
}

//ADMIN FUNCTIONS:

int adminLogin(int dummy)
{
    cout<<"Under progress";
    return 1; //return 1 or zero based on login credentials
}