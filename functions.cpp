#include<iostream>
#include "functions.h"
using namespace std;
void studentFunction(int dummy)
{
    int dummyvalue=1;
    cout<<"\n\n\n\t\t\t\t\tLOGIN FUNCTION GOES HERE";
    cout<<"\n\n\n\t\t\t\t\tWelcome Dear Student"
    cout<<"Here are your options: ";
    cout<<"\n\n\t\t\t\t\tPlease ENTER:\n\t\t\t\t\t1)MCQs type Exam";
    cout<<"\n\t\t\t\t\t2)Individual report using STRUCTS";
    cout<<"\n\t\t\t\t\t3)Checking Admission Status\n\t\t\t\t\t4)View Merit Lists";
    cout<<"\n\t\t\t\t\t5)GO BACK TO LOGIN\n\t\t\t\t\tYour input here: ";
    studentOptionSelect(dummyvalue);
}
void teacherFunction(int dummy)
{
    int dummyvalue=1;
    cout<<"\n\n\n\t\t\t\t\tLOGIN FUNCTION GOES HERE";
    cout<<"\n\n\n\t\t\t\t\tWelcome Dear Teacher, Here are your options: ";
    cout<<"\n\n\t\t\t\t\tPlease ENTER:\n\t\t\t\t\t1)Checking admission test";
    cout<<"\n\t\t\t\t\t2)EDIT Question statement";
    cout<<"\n\t\t\t\t\t3)EDIT MCQs\n\t\t\t\t\t4)GENERATE Merit Lists";
    cout<<"\n\t\t\t\t\t5)MANIPULATE student marks";
    cout<<"\n\t\t\t\t\t6)To get back to login\n\t\t\t\t\tYour input here: ";
    teacherOptionSelect(dummyvalue);
}
void adminFunction(int dummy)
{
    int dummyvalue=1;
    cout<<"\n\n\n\t\t\t\t\tLOGIN FUNCTION GOES HERE";
    cout<<"\n\n\n\t\t\t\t\tWelcome Dear Admin, Here are your options: ";
    cout<<"\n\n\t\t\t\t\tPlease ENTER:\n\t\t\t\t\t1)Add Student";
    cout<<"\n\t\t\t\t\t2)Add Teacher";
    cout<<"\n\t\t\t\t\t3)Add Admin\n\t\t\t\t\t4)Remove Student/Teacher/Admin";
    cout<<"\n\t\t\t\t\t5)Go back";
    cout<<"\n\t\t\t\t\tYour input here: ";
    adminOptionSelect(dummyvalue);

}

//now we define the Option Select Functions

void studentOptionSelect(int dummy) //student selects options.
{
    int dummyvalue=1;
    int option; cin>>option;
    switch (option) {
        case 1:
            cout<<"\n\n\t\t\t\t\tGet ready to suffer\n";
            examFunction(dummyvalue);
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\tYou are already dead\n";
            resultCheckFunction(dummyvalue);
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\tThe only admission you get is to a mental institute\n";
            admissionStatusFunction(dummyvalue);
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\tMerit list function, the joke here is your meritXD\n";
            meritListFunction(dummyvalue);
            break;
        case 5:
            cout<<"\n\n\t\t\t\t\tBack to ooga booga student function\n";
            studentFunction(dummyvalue);
            break;
        default:
            cout<<"\n\n\t\t\t\t\tEnter a valid option next time";
            studentOptionSelect(dummyvalue);
    }
}


void teacherOptionSelect(int dummy)   //teacher options select
{
    int dummyvalue=1;
    int option; cin>>option;
    switch (option) {
        case 1:
            cout<<"\n\n\t\t\t\t\tHave a look at the monster you created\n";
            checkEntryTest(dummyvalue);
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\tEdit the question statement here\n";
            editQuestion(dummyvalue);
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\tEdit MCQs and correct option SIRRRRRRR\n";
            editMCQs(dummyvalue);
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\tGenerate merit list from marks sheet\n";
            generateMeritList(dummyvalue);
            break;
        case 5:
            cout<<"\n\n\t\t\t\t\tYes, manipulate their marks, you :D\n";
            manipulateMarks(dummyvalue);
            break;
        case 6:
            cout<<"\n\n\t\t\t\t\tOk you want to go back, i understand\n";
            teacherFunction(dummyvalue);
            break;
        default:
            cout<<"\n\n\t\t\t\t\tEnter a valid option next time";
            teacherOptionSelect(dummyvalue);
    }
}


void adminOptionSelect(int dummy)
{
    int dummyvalue=1;
    int option; cin>>option;
    switch (option) {
        case 1:
            cout<<"\n\n\t\t\t\t\tAdd any student into any program\n";
            addStudent(dummyvalue);
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\tAdd any teacher to any program\n";
            addTeacher(dummyvalue);
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\tAdd another admin to this system\n";
            addAdmin(dummyvalue);
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\tRemove them from the throne, show your POWERRRRR\n";
            removeRole(dummyvalue);
            break;
        case 5:
            cout<<"\n\n\t\t\t\t\tGo back to admin login\n";
            adminFunction(dummyvalue);
            break;
        default:
            cout<<"\n\n\t\t\t\t\tEnter a valid option next time";
            adminOptionSelect(dummyvalue);
    }
}


//then we start defining functions for the three modes

//STUDENT FUNCTIONS:
void studentLogin(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void studentLoginLoop (int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void examFunction(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void resultCheckFunction(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void admissionStatusFunction(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void meritListFunction(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
//TEACHER FUNCTIONS:
void teacherLogin(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void teacherLoginLoop (int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void checkEntryTest(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void editQuestion(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void editMCQs(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void generateMeritList(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void manipulateMarks(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
//ADMIN FUNCTIONS:
void adminLogin(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void adminLoginLoop (int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void addStudent(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void addTeacher(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void addAdmin(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
void removeRole(int dummy)
{
    cout<<"\n\n\t\t\t\t\tUnder progress\n\n";
}
