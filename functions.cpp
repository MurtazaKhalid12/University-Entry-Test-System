#include<iostream>
#include "functions.h"
using namespace std;
void studentFunction()
{
    cout<<"\n\n\n";
    for (int i = 0; i < 120; ++i)
    {
        cout<<"*"; //this is for seperation
    }
    cout<<"\n\n\n\t\t\t\t\tWelcome Student";
    studentShowOptions();
}
void teacherFunction()
{
    cout<<"\n\n\n";
    for (int i = 0; i < 120; ++i)
    {
        cout<<"*"; //this is for seperation
    }
    cout<<"\n\n\n\t\t\t\t\tWelcome Teacher";
    teacherShowOptions();
}
void adminFunction()
{

    cout<<"\n\n\n";
    for (int i = 0; i < 120; ++i)
    {
        cout<<"*"; //this is for seperation
    }
    cout<<"\n\n\n\t\t\t\t\tWelcome Admin";
    adminShowOptions();

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
            studentShowOptions();
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\tYou are already dead\n";
            aggregateFunction();
            studentShowOptions();
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\tThe only admission you get is to a mental institute\n";
            admissionStatusFunction();
            studentShowOptions();
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\tMerit list function, the joke here is your meritXD\n";
            meritListFunction();
            studentShowOptions();
            break;
        case 5:
            cout<<"\n\n\t\t\t\t\tThank you for your time\n\n";
            break;
        default:
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
            cout<<"\n\n\t\t\t\t\tHave a look at the monster you created\n";
            checkEntryTest();
            teacherShowOptions();
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\tEdit the question statement here\n";
            editQuestion();
            teacherShowOptions();
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\tEdit MCQs and correct option SIRRRRRRR\n";
            editMCQs();
            teacherShowOptions();
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\tGenerate merit list from marks sheet\n";
            generateMeritList();
            teacherShowOptions();
            break;
        case 5:
            cout<<"\n\n\t\t\t\t\tYes, manipulate their marks, you :D\n";
            manipulateMarks();
            teacherShowOptions();
            break;
        case 6:
            cout<<"\n\n\t\t\t\t\tThank you for your time\n\n";
            break;
        default:
            cout<<"\n\n\t\t\t\t\tEnter a valid option next time";
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
            adminShowOptions();
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\tAdd any teacher to any program\n";
            addTeacher();
            adminShowOptions();
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\tAdd another admin to this system\n";
            addAdmin();
            adminShowOptions();
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\tRemove them from the throne, show your POWERRRRR\n";
            removeRole();
            adminShowOptions();
            break;
        case 5:
            cout<<"\n\n\t\t\t\t\tThank you for your time\n\n";
            break;
        default:
            cout<<"\n\n\t\t\t\t\tEnter a valid option next time";
            adminShowOptions();
    }
}


//then we start defining functions for the three modes

//STUDENT FUNCTIONS:
void studentLogin()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void studentLoginLoop ()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
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
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";

}
void teacherLoginLoop ()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
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
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void adminLoginLoop ()
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
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
