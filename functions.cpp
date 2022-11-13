#include<iostream>
#include "functions.h"
#include<bits/stdc++.h>
#include <fstream>
#include <cstring>
using namespace std;
void studentFunction(int login)
{
    seperationFunction();
    switch (login) {
        case 1:
            studentLogin();
            break;
        case 0:
            cout<<"\n\n\t\t\t\t\tGoing back to mode selection\n";
            seperationFunction();
            break;
        case 2:
            cout<<"\n\n\n\t\t\t\t\tWelcome Student";
            studentShowOptions();
    }

}
void teacherFunction(int login)
{
    seperationFunction();
    switch (login) {
        case 1:
            teacherLogin();
            break;
        case 0:
            cout<<"\n\n\t\t\t\t\tGoing back to mode selection\n";
            seperationFunction();
            break;
        case 2:
            cout<<"\n\n\n\t\t\t\t\tWelcome Teacher.";
            teacherShowOptions();
    }

}
void adminFunction(int login)
{
    seperationFunction();
    switch (login) {
        case 1:
            adminLogin();
            break;
        case 0:
            cout<<"\n\n\t\t\t\t\tGoing back to mode selection\n";
            seperationFunction();
            break;
        case 2:
            cout<<"\n\n\n\t\t\t\t\tWelcome Admin.";
            adminShowOptions();
    }

}
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
//now we define the Option Select Functions
void studentShowOptions()
{
    cout<<"\n\n\n\t\t\t\t\tHere are your options: ";
    cout<<"\n\n\t\t\t\t\tPlease ENTER:\n\t\t\t\t\t1)MCQs type Exam";
    cout<<"\n\t\t\t\t\t2)Calculate Aggregate";
    cout<<"\n\t\t\t\t\t3)Checking Admission Status\n\t\t\t\t\t4)View Merit Lists";
    cout<<"\n\t\t\t\t\t5)Back to MODE SELECTION\n\t\t\t\t\tYour input here: ";
    studentOptionSelect();
}

void studentOptionSelect() //student selects options.
{
    int option; cin>>option;
    cin.clear();
    cin.ignore();
    switch (option) {
        case 1:
            cout<<"\n\n\t\t\t\t\tGet ready to suffer\n";
            examFunction();
            seperationFunction();
            studentShowOptions();
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\tYou are already dead\n";
            aggregateFunction();
            seperationFunction();
            studentShowOptions();
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\tThe only admission you get is to a mental institute\n";
            admissionStatusFunction();
            seperationFunction();
            studentShowOptions();
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\tMerit list function, the joke here is your meritXD\n";
            meritListFunction();
            seperationFunction();
            studentShowOptions();
            break;
        case 5:
            cout<<"\n\n\t\t\t\t\tThank you for your time\n\n";
            seperationFunction();
            break;
        default:
            seperationFunction();
            cout<<"\n\n\t\t\t\t\tEnter a valid option next time";
            studentOptionSelect();
            break;
    }
}
/////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
void teacherShowOptions ()
{
    cout<<"\n\n\n\t\t\t\t\tHere are your options: ";
    cout<<"\n\n\t\t\t\t\tPlease ENTER:\n\t\t\t\t\t1)Checking admission test";
    cout<<"\n\t\t\t\t\t2)EDIT Question statement";
    cout<<"\n\t\t\t\t\t3)EDIT MCQs\n\t\t\t\t\t4)GENERATE Merit Lists";
    cout<<"\n\t\t\t\t\t5)MANIPULATE student marks";
    cout<<"\n\t\t\t\t\t6)BACK TO MODE SELECTION\n\t\t\t\t\tYour input here: ";
    teacherOptionSelect();
}

void teacherOptionSelect()   //teacher options select
{
    int option; cin>>option;
    cin.clear();
    cin.ignore();
    switch (option) {
        case 1:
            cout<<"\n\n\t\t\t\t\tTake a look at the entry test.\n";
            checkEntryTest();
            seperationFunction();
            teacherShowOptions();
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\tEdit the question statement here\n";
            editQuestion();
            seperationFunction();
            teacherShowOptions();
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\tEdit MCQs and correct option SIRRRRRRR\n";
            editMCQs();
            seperationFunction();
            teacherShowOptions();
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\tGenerate merit list from marks sheet\n";
            generateMeritList();
            seperationFunction();
            teacherShowOptions();
            break;
        case 5:
            cout<<"\n\n\t\t\t\t\tYes, manipulate their marks, you :D\n";
            manipulateMarks();
            seperationFunction();
            teacherShowOptions();
            break;
        case 6:
            cout<<"\n\n\t\t\t\t\tThank you for your time\n\n";
            seperationFunction();
            break;
        default:
            cout<<"\n\n\t\t\t\t\tEnter a valid option next time";
            seperationFunction();
            teacherOptionSelect();
            break;
    }
}

//////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

void adminShowOptions()
{
    cout<<"\n\n\n\t\t\t\t\tHere are your options: ";
    cout<<"\n\n\t\t\t\t\tPlease ENTER:\n\t\t\t\t\t1)Add Student";
    cout<<"\n\t\t\t\t\t2)Add Teacher";
    cout<<"\n\t\t\t\t\t3)Add Admin\n\t\t\t\t\t4)Remove Student/Teacher/Admin";
    cout<<"\n\t\t\t\t\t5)Back to MODE SELECTION";
    cout<<"\n\t\t\t\t\tYour input here: ";
    adminOptionSelect();
}
void adminOptionSelect()
{
    int option; cin>>option;
    cin.clear();
    cin.ignore();
    switch (option) {
        case 1:
            cout<<"\n\n\t\t\t\t\tAdd any student into any program\n";
            addStudent();
            seperationFunction();
            adminShowOptions();
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\tAdd any teacher to any program\n";
            addTeacher();
            seperationFunction();
            adminShowOptions();
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\tAdd another admin to this system\n";
            addAdmin();
            seperationFunction();
            adminShowOptions();
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\tRemove them from the throne, show your POWERRRRR\n";
            removeRole();
            seperationFunction();
            adminShowOptions();
            break;
        case 5:
            cout<<"\n\n\t\t\t\t\tThank you for your time\n\n";
            seperationFunction();
            break;
        default:
            cout<<"\n\n\t\t\t\t\tEnter a valid option next time";
            seperationFunction();
            adminShowOptions();
    }
}


//then we start defining functions for the three modes

//STUDENT FUNCTIONS:
void studentLogin()
{
    int count;
    char loginroll[20],loginpass[20],rollnum[20],pass[20];

    cout<<"\n\n\t\t\t\t\tENTER YOUR ROLL NUMBER: ";
    cin>>loginroll;
    cout<<"\n\n\t\t\t\t\tENTER YOUR PASSWORD: ";
    cin>>loginpass;

    ifstream input("loginstudents.txt"); //to read the date from .txt file which we created to get registration input
    input>>rollnum>>pass;

    if(strcmp(loginroll,rollnum)==0 && strcmp(loginpass,pass)==0)
    {
        cout<<"\n\n\t\t\t\t\t(LOGIN SUCCESSFUL)";
        studentFunction(2);
    }
    else
    {
        cout<<"\n\n\t\t\t\t\t(LOGIN ERROR)";
        studentLoginLoop();
    }

    input.close();
}
void studentLoginLoop ()
{
   cout<<"\n\n\t\t\t\t\t0)MODE SELECTION";
   cout<<"\n\n\t\t\t\t\t1)RETRY";
   cout<<"\n\n\t\t\t\t\tYour input here: ";
   int selection; cin>>selection;
    switch (selection) {
        case 0:
            studentFunction(0);
            break;
        case 1:
            studentFunction(1);
            break;
    }

}
void examFunction()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";

}
void aggregateFunction()
{
    //function by Atif Ashraf
    float totalmatricmarks, matricmarks, totalfscmarks, fscmarks, entrytestmarks, fulltestmarks;
    totalmatricmarks=0, matricmarks=0, totalfscmarks=0;
    fscmarks=0, entrytestmarks=0,fulltestmarks=0;
    cout<<"\n\n\t\t\t\t\tAggregate calculation function\n";
    cout<<"\n\n\t\t\t\t\tPlease enter total matric marks: ";
    cin>>totalmatricmarks;
    cout<<"\n\n\t\t\t\t\tPlease enter your achieved matric marks: ";
    cin>>matricmarks;
    cout<<"\n\n\t\t\t\t\tPlease enter total FSC marks: ";
    cin>>totalfscmarks;
    cout<<"\n\n\t\t\t\t\tPlease enter your obtained FSC marks: ";
    cin>>fscmarks;
    //replace entry test marks manually to file handling method.
    cout<<"\n\n\t\t\t\t\tPlease enter full marks of ITU entry test: ";
    cin>>fulltestmarks;
    cout<<"\n\n\t\t\t\t\tPlease enter your ITU entry test marks: ";
    cin>>entrytestmarks;
    float aggregate;
    aggregate= (matricmarks/totalmatricmarks)*20 + (fscmarks/totalfscmarks)*30 + (entrytestmarks/fulltestmarks)*50;
    cout<<"\n\n\t\t\t\t\tYour aggregate is: "<<aggregate;
}

void admissionStatusFunction()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void meritListFunction()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
//TEACHER FUNCTIONS:
void teacherLogin()
{
    char loginname[20],loginpass[20],name[20],pass[20];
    cout<<"\n\n\t\t\t\t\tIF YOU DONT HAVE AN ACCOUNT YET CONTACT ADMINISTRATION";
    cout<<"\n\n\t\t\t\t\tENTER YOUR NAME: ";
    cin>>loginname;
    cout<<"\n\n\t\t\t\t\tENTER YOUR PASSWORD: ";
    cin>>loginpass;

    ifstream input("loginteachers.txt"); //to read the date from .txt file which we created to get registration input
    input>>name>>pass;

    if(strcmp(loginname,name)==0 && strcmp(loginpass,pass)==0)
    {
        cout<<"\n\n\t\t\t\t\t(LOGIN SUCCESSFUL)";
        teacherFunction(2);
    }
    else
    {
        cout<<"\n\n\t\t\t\t\t(LOGIN ERROR)";
        teacherLoginLoop();
    }

    input.close();

}
void teacherLoginLoop ()
{
    cout<<"\n\n\t\t\t\t\t0)MODE SELECTION";
    cout<<"\n\n\t\t\t\t\t1)RETRY";
    cout<<"\n\n\t\t\t\t\tYour input here: ";
    int selection; cin>>selection;
    switch (selection) {
        case 0:
            teacherFunction(0);
            break;
        case 1:
            teacherFunction(1);
            break;
    }

}
void checkEntryTest()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void editQuestion()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void editMCQs()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void generateMeritList()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";

}
void manipulateMarks()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
//ADMIN FUNCTIONS:
void adminLogin()
{
    char loginname[20],loginpass[20],name[20],pass[20];
    cout<<"\n\n\t\t\t\t\tENTER YOUR NAME: ";
    cin>>loginname;
    cout<<"\n\n\t\t\t\t\tENTER YOUR PASSWORD: ";
    cin>>loginpass;

    ifstream input("loginadmins.txt"); //to read the date from .txt file which we created to get registration input
    input>>name>>pass;

    if(strcmp(loginname,name)==0 && strcmp(loginpass,pass)==0)
    {
        cout<<"\n\n\t\t\t\t\t(LOGIN SUCCESSFUL)";
        adminFunction(2);
    }
    else
    {
        cout<<"\n\n\t\t\t\t\t(LOGIN ERROR)";
        adminLoginLoop();
    }

    input.close();

}
void adminLoginLoop ()
{
    cout<<"\n\n\t\t\t\t\t0)MODE SELECTION";
    cout<<"\n\n\t\t\t\t\t1)RETRY";
    cout<<"\n\n\t\t\t\t\tYour input here: ";
    int selection; cin>>selection;
    switch (selection) {
        case 0:
            adminFunction(0);
            break;
        case 1:
            adminFunction(1);
            break;
    }
}
void addStudent()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void addTeacher()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void addAdmin()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void removeRole()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void seperationFunction()
{
    cout<<"\n\n";
    for (int i = 0; i < 120; ++i)
    {
        cout<<"X"; //this is for seperation
    }
    cout<<"\n\n";
}

