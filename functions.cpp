#include<iostream>
#include "functions.h"
#include<bits/stdc++.h>
#include <fstream>
#include <string>
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
    cout<<"\n\t\t\t\t\t3)Check Result of Test\n\t\t\t\t\t4)View Merit Lists";
    cout<<"\n\t\t\t\t\t5)Check Program Details\n\t\t\t\t\t6)Back to MODE SELECTION\n\t\t\t\t\tYour input here: ";
    studentOptionSelect();
}

void studentOptionSelect() //student selects options.
{
    int option; cin>>option;
    cin.clear();
    cin.ignore();
    switch (option) {
        case 1:
            cout<<"\n\n\t\t\t\t\t(EXAM FUNCTION LOADING)\n";
            examFunction();
            seperationFunction();
            studentShowOptions();
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\t(AGGREGATE FUNCTION LOADING)\n";
            aggregateFunction();
            seperationFunction();
            studentShowOptions();
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\tShowing Result of Entry Test\n";
            resultFunction();
            seperationFunction();
            studentShowOptions();
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\t(MERIT LIST FUNCTION IS LOADING)\n";
            meritListFunction();
            seperationFunction();
            studentShowOptions();
            break;
        case 5:
            cout<<"\n\n\t\t\t\t\t(Check University Program Details Here.)\n";
            programDetails();
            seperationFunction();
            studentShowOptions();
            break;
        case 6:
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
    cout<<"\n\t\t\t\t\t2)Make MCQs for Paper";
    cout<<"\n\t\t\t\t\t3)EDIT MCQ key\n\t\t\t\t\t4)GENERATE Merit Lists";
    cout<<"\n\t\t\t\t\t5)BACK TO MODE SELECTION\n\t\t\t\t\tYour input here: ";
    teacherOptionSelect();
}

void teacherOptionSelect()   //teacher options select
{
    int option; cin>>option;
    cin.clear();
    cin.ignore();
    switch (option) {
        case 1:
            cout<<"\n\n\t\t\t\t\t(Take a look at the entry test)\n";
            checkEntryTest();
            seperationFunction();
            teacherShowOptions();
            break;
        case 2:
            cout<<"\n\n\t\t\t\t\t(MAKE MCQS FOR PAPER HERE)\n";
            makeMCQs();
            seperationFunction();
            teacherShowOptions();
            break;
        case 3:
            cout<<"\n\n\t\t\t\t\t(EDIT MCQS KEY HERE)\n";
            editMCQs();
            seperationFunction();
            teacherShowOptions();
            break;
        case 4:
            cout<<"\n\n\t\t\t\t\t(GENERATE MANUAL MERIT LIST)\n";
            generateMeritList();
            seperationFunction();
            teacherShowOptions();
            break;
        case 5:
            cout<<"\n\n\t\t\t\t\t(Thank you for your time)\n\n";
            seperationFunction();
            break;
        default:
            cout<<"\n\n\t\t\t\t\t(Enter a valid option next time)";
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
    cout<<"\n\t\t\t\t\t3)Add Admin\n\t\t\t\t\t4)Remove Students";
    cout<<"\n\t\t\t\t\t5)Remove Teachers";
    cout<<"\n\t\t\t\t\t6)Change Student Password";
    cout<<"\n\t\t\t\t\t6)Back to MODE SELECTION";
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
            cout<<"\n\n\t\t\t\t\tRemove any student from the PROGRAM\n";
            removeStudents();
            seperationFunction();
            adminShowOptions();
            break;
        case 5:
            cout<<"\n\n\t\t\t\t\tRemove any Teacher from the PROGRAM\n";
            removeTeachers();
            seperationFunction();
            adminShowOptions();
            break;
        case 6:
            cout<<"\n\n\t\t\t\t\t(Change A STUDENT forgotten Password)\n";
            change();
            seperationFunction();
            adminShowOptions();
            break;
        case 7:
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
    char loginroll[20], loginpass[20], rollnum[20], pass[20];

    cout << "\n\n\t\t\t\t\tENTER YOUR ROLL NUMBER: ";
    cin >> loginroll;
    cout << "\n\n\t\t\t\t\tENTER YOUR PASSWORD: ";
    cin >> loginpass;
    ifstream input("loginstudents.txt");
    while (input >> rollnum >> pass)
    {
        if(strcmp(loginroll,rollnum)==0 && strcmp(loginpass,pass)==0)
        {
            count=1;
        }
    }
    if (count==1)
    {
        cout<<"\n\n\t\t\t\t\t(LOGIN SUCCESSFUL)\n\n";
        studentFunction(2);

    }
    else
    {
        cout<<"\n\n\t\t\t\t\t(LOGIN ERROR)\n\n";
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
    int mcqs;
    cout<<"\n\n\t\t\t\t\tENTER 1 FOR BS PROGRAMS EXAMINATION\n";
    cout<<"\n\n\t\t\t\t\tENTER 2 FOR MS PROGRAM EXAMINATION\n";
    cout<<"\n\n\t\t\t\t\tENTER 3 FOR PHD PROGRAMS EXAMINATION\n";
    cout<<"\n\n\t\t\t\t\tENTER 4 GOING BACK TO PROGRAM\n";
    cin>>mcqs;
    cin.clear();
    cin.ignore();
    switch (mcqs) {
        case 1:

            bsexamination();
            break;

        case 2:

            msexamination();
            break;

        case 3:

            phdexamination();
            break;

        case 4:
        {
            studentShowOptions();
        }
            break;
        default:
            cout<<"\n\n\t\t\t\t\tInvalid choice, try again";
            seperationFunction();
            adminShowOptions();

    }

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

void resultFunction()
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
            BS_RESULT_CHECK();
            break;
        case 2:
            MS_RESULT_CHECK();
            break;
        case 3:
            PHD_RESULT_CHECK();
            break;
        case 4:
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
void meritListFunction() {
    int num;
    cout << "ENTER 1 FOR CHECKING BS MERIT LIST\n";
    cout << "ENTER 2 FOR CHECKING MS MERIT LIST\n";
    cout << "ENTER 3 FOR CHECKING PHD MERIT LIST\n";
    cout << "ENTER 4 FOR GOING BACK TO PROGRAM\n";
    cin >> num;
    switch (num) {
        case 1:
            BS_MERIT();
            break;
        case 2:
            MS_MERIT();
            break;
        case 3:
            PHD_MERIT();
            break;
        case 4:
            cout << "\n\n\t\t\t\t\tThank you for your time\n\n";
            seperationFunction();
            break;
        default:
            seperationFunction();
            cout << "\n\n\t\t\t\t\tEnter a valid option next time";
            studentOptionSelect();
            break;
    }
}
//TEACHER FUNCTIONS:
void teacherLogin()
{
    int count;
    char loginname[20],loginpass[20],name[20],pass[20];
    cout<<"\n\n\t\t\t\t\tIF YOU DONT HAVE AN ACCOUNT YET, CONTACT ADMINISTRATION";
    cout<<"\n\n\t\t\t\t\tENTER YOUR NAME: ";
    cin>>loginname;
    cout<<"\n\n\t\t\t\t\tENTER YOUR PASSWORD: ";
    cin>>loginpass;

    ifstream input("loginteachers.txt"); //to read the date from .txt file which we created to get registration input
    while (input >> name >> pass)
    {
        if(strcmp(loginname,name)==0 && strcmp(loginpass,pass)==0)
        {
            count=1;
        }
    }
    if (count==1)
    {
        cout<<"\n\n\t\t\t\t\t(LOGIN SUCCESSFUL)\n\n";
        teacherFunction(2);
    }
    else
    {
        cout<<"\n\n\t\t\t\t\t(LOGIN ERROR)\n\n";
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
void checkEntryTest() {
    int department;
    cout << "\n \t\t  :\"SELECT DEPARTMENT TO VIEW THEIR MCQ FOR ANY QUERRY \":  \n \t";
    cout << "\n \t\t\t1.TO VIEW BS MCQ \n \t\t\t2.TO VIEW MS MCQ\n \t\t\t3.TO VIEW PHD MCQ \n \t";
    cout << "\n\t\t\t Enter HERE :";
    cin >> department;
    cin.clear();
    cin.ignore();
    switch (department) {
        case 1: {
            showBS();
            break;
        }
        case 2: {
            showMS();
            break;
        }
        case 3: {

            showPHD();
            break;
        }
        default:
            seperationFunction();
            cout << "\n\n\t\t\t\t\tEnter a valid option next time";
            studentOptionSelect();
            break;
    }
}
void makeMCQs()
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
void editMCQs()
{
    int x;
    cout<<"\n\n\t\t\t\t\tEnter 1 for editing BS KEY";
    cout<<"\n\n\t\t\t\t\tEnter 2 for editing MS KEY";
    cout<<"\n\n\t\t\t\t\tEnter 3 for editing PHD KEY";
    cin>>x;
    switch (x)
    {
        case 1:
            bsKEY();
            break;
        case 2:
            msKEY();
            break;
        case 3:
            phdKEY();
            break;
        default:
            cout<<"\n\n\t\t\t\t\tPlease enter valid choice next time";
    }
}
void generateMeritList()
{
    char t;
    do
    {
        string st2;
        string st1;
        cout<<"\t\t\t\t"<<"FORMAT(BSPROGRAM/MSPROGRAM/PHDPROGRAM)\n";
        cout<<"\t\t\t\tENTER THE PROGRAM YOU WANT TO SELECT THEM FOR: ";
        cin>>st1;
        cout<<endl;
        int x;
        cout<<"ENTER THE NUMBER OF STUDENTS : ";
        cin>>x;
        cout<<endl;
        cout<<"\t\t\t"<<"FORMAT(2201 YOU HAVE BEEN SELECTED IN COMPUTER ENGINEERING)"<<endl;
        ofstream make;
        make.open(st1+".txt",ios::app);
        getline(cin,st2);
        for(int i = 1;i<=x;i++)
        {
            cout<<"ENTER STUDENT "<<i<<" MERIT : " ;
            getline(cin,st2);

            make<<st2<<endl;
        }
        make.close();
        cout<<"ENTER Y FOR REUSING\n";
        int t;
        cin>>t;
    }
    while(t=='y'||t=='Y');

}
//ADMIN FUNCTIONS:
void adminLogin()
{
    int count;
    char loginname[20], loginpass[20], name[20], pass[20];
    cout << "\n\n\t\t\t\t\tENTER YOUR NAME: ";
    cin >> loginname;
    cout << "\n\n\t\t\t\t\tENTER YOUR PASSWORD: ";
    cin >> loginpass;

    ifstream input("loginadmins.txt"); //to read the date from .txt file which we created to get registration input
    while (input >> name >> pass) {
        if (strcmp(loginname, name) == 0 && strcmp(loginpass, pass) == 0) {
            count = 1;
        }
    }
    if (count == 1) {
        cout << "\n\n\t\t\t\t\t(LOGIN SUCCESSFUL)\n\n";
        adminFunction(2);
    } else {
        cout << "\n\n\t\t\t\t\t(LOGIN ERROR)\n\n";
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
    string rollnum,pass;
    ofstream log("loginstudents.txt", ios::app);

    cout<<"\n\n\t\t\t\t\tENTER STUDENT ROLL NUMBER: ";
    cin>>rollnum;
    log<<"\n"<<rollnum<<endl;

    cout<<"\n\n\t\t\t\t\tENTER HIS LOGIN PASSWORD: ";
    cin>>pass;
    log<<pass;

    cout<<"\n\n\t\t\t\t\t(REGISTRATION SUCCESSFUL)";
    log.close();
}
void addTeacher()
{
    char name[20],pass[20];
    ofstream log("loginteachers.txt", ios::app);

    cout<<"\n\n\t\t\t\t\tENTER NAME OF THE TEACHER: ";
    cin>>name;
    log<<"\n"<<name<<endl;

    cout<<"\n\n\t\t\t\t\tENTER PASSWORD: ";
    cin>>pass;
    log<<pass;

    cout<<"\n\n\t\t\t\t\t(REGISTRATION SUCCESSFUL)";
    log.close();
}
void addAdmin()
{
    char name[20],pass[20];
    ofstream log("loginadmins.txt", ios::app);

    cout<<"\n\n\t\t\t\t\tENTER NAME OF ADMIN: ";
    cin>>name;
    log<<"\n"<<name<<endl;

    cout<<"\n\n\t\t\t\t\tENTER PASSWORD FOR ADMIN: ";
    cin>>pass;
    log<<pass;

    cout<<"\n\n\t\t\t\t\t(REGISTRATION SUCCESSFUL)";
    log.close();

}

void removeStudents()
{
    string strReplace;
    cout << "\n\n\t\t\t\t\tEnter Student roll number: ";
    cin >> strReplace;
    string strNew="       \n";
    ifstream orig("loginstudents.txt");
    ofstream temp("temp.txt");
    if (!orig || !temp)
    {
        cout << "Error opening files!" << endl;
    }

    string strTemp;
    while (orig >> strTemp)
    {
        if (strTemp == strReplace)
        {
            strTemp = strNew;
        }
        strTemp += "\n";
        temp << strTemp;

    }
    orig.close();
    temp.close();
    remove("loginstudents,txt");
    rename("temp.txt", "loginstudents.txt");
    cout<<"\n\n\t\t\t\t\t(DELETION SUCCESSFUL)\n\n";
}
void removeTeachers() {
    string strReplace;
    cout << "\n\n\t\t\t\t\tEnter Teacher Name: ";
    cin >> strReplace;
    string strNew = "       \n";
    ifstream orig("loginteachers.txt");
    ofstream temp("temp.txt");
    if (!orig || !temp) {
        cout << "Error opening files!" << endl;
    }

    string strTemp;
    while (orig >> strTemp) {
        if (strTemp == strReplace) {
            strTemp = strNew;
        }
        strTemp += "\n";
        temp << strTemp;

    }
    orig.close();
    temp.close();
    remove("loginteachers,txt");
    rename("temp.txt", "loginteachers.txt");
    cout<<"\n\n\t\t\t\t\t(DELETION SUCCESSFUL)\n\n";
}
void change()
{
    string strReplace, strNew;
    cout << "Enter your old password \n";
    cin >> strReplace;
    cout << "Enter your new password \n ";
    cin >> strNew;
    ifstream orig("loginstudents.txt");
    ofstream temp("temp.txt");
    if (!orig || !temp)
    {
        cout << "Error opening files!" << endl;
    }

    string strTemp;
    while (orig >> strTemp)
    {
        if (strTemp == strReplace)
        {
            strTemp = strNew;
        }
        strTemp += "\n";
        temp << strTemp;

    }
    orig.close();
    temp.close();
    remove("loginstudents,txt");
    rename("temp.txt", "loginstudents.txt");
    cout<<"\n\n\t\t\t\t\t(PASSWORD CHANGED)";
}
////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////


void seperationFunction() //we create separation between the functions
{
    cout<<"\n\n";
    for (int i = 0; i < 120; ++i)
    {
        cout<<"X"; //this is for separation
    }
    cout<<"\n\n";
}



///////////////////////////////
//smaller functions defined below
void bsexamination() {
    string k;
    cout << "\t\t\t\t\t" << "-------" << "ONLINE EXAMINATION SYSTEM" << "-----------\n";
    cout << "PLEASE ENTER YOUR ROLL NUMBER ";
    getline(cin, w);
    ifstream rollnum;   // making object of rollnum
    rollnum.open("rollno.txt"); // opening of file rollno.txt where our roll numbers are
    string stored;    //
    string replaced;
    int track = 0;
    while (rollnum >> replaced)  // run a program till end of file
    {
// getline function would pick each line from rollno and sotred and in stored variable
// stored variale will put this value in replaced variable
        if (replaced == w)  // if replaced is equal to roll no student have entered
        {
//                                cout<<"hello replace";

            int h = 5;       //
            rollnumber(h);// then simple call roll number function
            break;
        }
    }
}
void msexamination()
{
    cout << "\t\t\t\t\t" << "-------" << "ONLINE EXAMINATION SYSTEM" << "-----------\n";
    cout << "PLEASE ENTER YOUR ROLL NUMBER ";
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
    while (screen>>str)
    {


        st2+=str;

    }

    ifstream correct;
    correct.open("BSKEY.txt");// correct opion file opening
    string option;
    string st1;
    double cn = 0;
    while (correct>>option)  // running file till end
    {
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
        marit<<sum<<endl;
    }
    if(k == 0)
    {
//        cout<<"YOU HAVE NOT SELECTED";
        sum = w+" YOU HAVE NOT SELECTED TRY NEXT TIME BEST OF LUCK!";
        marit<<sum<<endl
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

    studentShowOptions();

}
int compareFunction(string s1,string s2,int l)

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

    st2.close();
    return f;             // number of correct options would be return
}
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
    while (screen>>str)
    {

        st2+=str;


    }

    ifstream correct;
    correct.open("MSKEY.txt");// correct opion file opening
    string option;
    string st1;
    double cn = 0;
    while (correct>>option)  // running file till end
    {
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

    if(k>30&&k>=0)
    {
        cout<<"YOU HAVE NOT SELECTED";
        sum = w+" YOU HAVE NOT SELECTED TRY NEXT TIME BEST OF LUCK!";
        marit<<sum<<endl;
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


    studentShowOptions();
}
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
    abj.close();
    abi.close();
    ifstream screen;
    screen.open("PHD_I_FILL.txt");
    string str;
    string st2;
    while (screen>>str)
    {

        st2+=str;


    }

    ifstream correct;
    correct.open("PHDKEY.txt");// correct opion file opening
    string option;
    string st1;
    double cn = 0;
    while (correct>>option)  // running file till end
    {
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
//    string otherstuff4

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
    if(m>=0&&m<30)
    {
        sum = w+otherstuff3;
        marit<<sum<<endl;
    }

    if(m==0)
    {
        cout<<"YOU HAVE NOT SELECTED";
        sum = w+" YOU HAVE NOT SELECTED TRY NEXT TIME BEST OF LUCK!";
    }
    marit.close();




    output.close();
    correct.close();
//    abj.close();
//    abi.close();

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


    studentShowOptions();
}

// result check functions
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

//merit list functions
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


void programDetails()
{
    int department ;
    cout << " \t\t\tCHOOSE ONE DEPARTMENT FOR ITS INFORMATION:"<<endl;
    cout << " \t\t\t\t: Departments  are :"<< "\n"<<"1.\"BS\" \n"<<"2.\"MS\" \n";
    cout<<"3.\"PHD\" \n";
    cout<<"\t\t\t:ENTER DEPARTMENT NUMBER HERE: ";
    cin>>department;
    switch (department) {

        case 1:
            first_bs();
            break;
        case 2:
            first_ms();
            break;
        case 3:
            first_phd();
            break;
    }
}
void first_bs()
{
    {
        {
            int a;
            fstream bs;("bs_course.txt", ios::out);
            bs.open("bs.txt", ios::out);
            cout<<"\n \tWHICH OF THE FOLLOWING INFORMATION YOU NEED TO KNOW ABOUT :";
            cout << "\n \t\t\t\t: COURSES :"<< "\n"<<"1.\"BSCE\" \n"<<"2.\"BSEE\" \n";
            cout<<"3.\"BSCS\" \n";
            cout<<"\t\t\t:ENTER COURSE NUMBER HERE: ";
            cin>>a;
            switch (a) {
                case 1: {
                    int m;
                    cout << "\t:WHAT KIND OF INFORMATION YOU NEED ABOUT BSCE FROM FOLLOWING : ";
                    cout << " \n\t\t\t\t:SELECT ONE :" << "\n" << "1.\"MCQ TEST FORMAT\" \n"
                         << "2.\"MERIT CRITERIA\" \n";
                    cout << "3.\"COURSE OUTLINE \" \n ";
                    cout << "\n\t\t\t:ENTER  HERE: ";
                    cin >> m;
                    if (m == 1) {
                        cout << " \t\t\t:   MCQ TEST FORMAT WILL BE  :\n" << endl;
                        cout << "\t\tMCQ will be divided in these sections:\n \n";
                        cout << " \t\t 1. 1-4 Will be from \"analytical reasoning\"  \n";
                        cout << " \t\t 2. 5-9 Will be from \"physics\"  \n";
                        cout << " \t\t 3. 10-14 Will be from \"maths\"  \n";
                        cout << " \t\t 4. 14-20 Will be from \"english\"  \n";
                        break;
                    } else if (m == 2) {
                        cout << " \t\t\t:  MERIT CRITERIA  :\n" << endl;
                        cout << "\t\t IT WLL BE CALCULATED ACCORDING TO 70% INTER RESULT AND 30% ENTRY TEST:\n \n";
                        cout << "\t\t YOU WILL BE GRADED ACCORDINGLY :\n \n";
                        cout << " \t\t IF YOUR SCORE IS ABOVE 90%  \"A+\" \"YOU ARE ELIGIBLE FOR ALL COURCES\" \n";
                        cout
                                << " \t\t IF YOUR SCORE IS ABOVE 80%   \"A\" \"YOU ARE ELIGIBLE FOR BSCE,BSEE COURCES\"  \n";
                        cout << " \t\t IF YOUR SCORE IS ABOVE 70%  \"B+\" \"YOU CAN APPLY FOR VACANCY ONLY\"  \n";
                        cout << " \t\t  IF YOUR SCORE IS ABOVE 60% \"B\" \"YOU ARE NOT ELIGIBLE FOR ALL COURCES\"  \n";
                        break;
                    } else if (m == 3) {
                        cout << " \t\t\t: COURCE OUTLINE  :\n" << endl;
                        cout << "\t\t YOUR SUBJECTS WILL BE :\n \n";
                        cout << "\t\t  1.COMMUNICATION SKILL (WITH 3 CREDIT HOURS ) \n";
                        cout << " \t\t 2.COMPUTER FUNDAMENTALS (4 CREDIT HOURS)\n";
                        cout << " \t\t 3.APPLIED PHY (WITH 3 CREDIT HOURS )  \n";
                        cout << " \t\t 4.CALCULUS (CREDIT HOURS 3) \n";
                        cout << " \t\t 5.LCA (WITH 3 CREDIT HOURS )  \n \n";
                        break;
                    }
                }
                    break;
                case 2:
                {
                    int z;
                    cout << "\t:WHAT KIND OF INFORMATION YOU NEED ABOUT BSEE FROM FOLLOWING : ";
                    cout << " \n\t\t\t\t:SELECT ONE :" << "\n" << "1.\"MCQ TEST FORMAT\" \n"
                         << "2.\"MERIT CRITERIA\" \n";
                    cout << "3.\"COURSE OUTLINE \" \n ";
                    cout << "\n\t\t\t:ENTER  HERE: ";
                    cin >> z;
                    if (z == 1)
                    {
                        cout << " \t\t\t:   MCQ TEST FORMAT OF BSEE WILL BE  :\n" << endl;
                        cout << "\t\tMCQ will be divided in these sections:\n \n";
                        cout << " \t\t 1. 1-5 Will be from \"analytical reasoning\"  \n";
                        cout << " \t\t 2. 6-9 Will be from \"physics\"  \n";
                        cout << " \t\t 3. 10-14 Will be from \"maths\"  \n";
                        cout << " \t\t 4. 14-20 Will be from \"english\"  \n";
                        break;
                    } else if (z == 2)
                    {
                        cout << " \t\t\t:  MERIT CRITERIA  :\n" << endl;
                        cout << "\t\t IT WLL BE CALCULATED ACCORDING TO 70% INTER RESULT AND 30% ENTRY TEST:\n \n";
                        cout << "\t\t YOU WILL BE GRADED ACCORDINGLY :\n \n";
                        cout << " \t\t IF YOUR SCORE IS ABOVE 90%  \"A+\" \"YOU ARE ELIGIBLE FOR ALL COURCES\" \n";
                        cout<< " \t\t IF YOUR SCORE IS ABOVE 80%   \"A\" \"YOU ARE ELIGIBLE FOR BSCE,BSEE COURCES\"  \n";
                        cout << " \t\t IF YOUR SCORE IS ABOVE 70%  \"B+\" \"YOU CAN APPLY FOR VACANCY ONLY\"  \n";
                        cout << " \t\t  IF YOUR SCORE IS ABOVE 60% \"B\" \"YOU ARE NOT ELIGIBLE FOR ALL COURCES\"  \n";
                        break;
                    } else if (z == 3) {
                        cout << " \t\t\t: COURCE OUTLINE  :\n" << endl;
                        cout << "\t\t YOUR SUBJECTS WILL BE :\n \n";
                        cout << "\t\t  1.COMMUNICATION SKILL (WITH 3 CREDIT HOURS ) \n";
                        cout << " \t\t 2.COMPUTER FUNDAMENTALS (4 CREDIT HOURS)\n";
                        cout << " \t\t 3.APPLIED PHY (WITH 3 CREDIT HOURS )  \n";
                        cout << " \t\t 4.CALCULUS (CREDIT HOURS 3) \n";
                        cout << " \t\t 3.ELECTRONIC BENCH (WITH 1 CREDIT HOURS )  \n";
                        cout << " \t\t 5.LCA (WITH 3 CREDIT HOURS )  \n \n";
                        break;
                    }
                    case 3:
                    {

                        int d;
                        cout << "\t:WHAT KIND OF INFORMATION YOU NEED ABOUT BSCS FROM FOLLOWING : ";
                        cout << " \n\t\t\t\t:SELECT ONE :" << "\n" << "1.\"MCQ TEST FORMAT\" \n"
                             << "2.\"MERIT CRITERIA\" \n";
                        cout << "3.\"COURSE OUTLINE \" \n ";
                        cout << "\n\t\t\t:ENTER  HERE: ";
                        cin >> d;
                        if (d == 1)
                        {
                            cout << " \t\t\t:   MCQ TEST FORMAT OF BSCS WILL BE  :\n" << endl;
                            cout << "\t\tMCQ will be divided in these sections:\n \n";
                            cout << " \t\t 1. 1-9 Will be from \"analytical reasoning\"  \n";
                            cout << " \t\t 2. 9-14 Will be from \"maths\"  \n";
                            cout << " \t\t 3. 14-20 Will be from \"english\"  \n";
                            break;
                        } else if (d == 2)
                        {
                            cout << " \t\t\t:  MERIT CRITERIA  :\n" << endl;
                            cout << "\t\t IT WLL BE CALCULATED ACCORDING TO 70% INTER RESULT AND 30% ENTRY TEST:\n \n";
                            cout << "\t\t YOU WILL BE GRADED ACCORDINGLY :\n \n";
                            cout << " \t\t IF YOUR SCORE IS ABOVE 90%  \"A+\" \"YOU ARE ELIGIBLE FOR ALL COURCES\" \n";
                            cout<< " \t\t IF YOUR SCORE IS ABOVE 80%  \"A\" \"YOU ARE ELIGIBLE FOR BSCE,BSEE COURCES\"  \n";
                            cout << " \t\t IF YOUR SCORE IS ABOVE 70%  \"B+\" \"YOU CAN APPLY FOR VACANCY ONLY\"  \n";
                            cout << " \t\t IF YOUR SCORE IS ABOVE 60% \"B\" \"YOU ARE NOT ELIGIBLE FOR ALL COURCES\"  \n";
                            break;
                        } else if (d == 3) {
                            cout << " \t\t\t: COURCE OUTLINE  :\n" << endl;
                            cout << "\t\t YOUR SUBJECTS WILL BE :\n \n";
                            cout << "\t\t 1.INTRODUCTION TO ICT (WITH 3 CREDIT HOURS ) \n";
                            cout << " \t\t 2.PROGRAMMING AND FUNDAMENTAL (4 CREDIT HOURS)\n";
                            cout << " \t\t 3.ENGLISH COMPOSITION & COMPREHENSION (WITH 3 CREDIT HOURS )  \n";
                            cout << " \t\t 4.CALCULUS (CREDIT HOURS 3) \n";
                            cout << " \t\t 3.QURAN TRANSLATION (WITH 1 CREDIT HOURS )  \n";
                            break;
                        }

                    }
                    break;
                }}
        }

    }
}


void first_ms()
{
    {
        {
            int x;
            cout<<"\n \tWHICH OF THE FOLLOWING INFORMATION YOU NEED TO KNOW ABOUT :";
            cout << "\n \t\t\t\t: COURSES :"<< "\n"<<"1.\"MSCE\" \n"<<"2.\"MSEE\" \n";
            cout<<"3.\"MSCS\" \n";
            cout<<"\t\t\t:ENTER COURSE NUMBER HERE: ";
            cin>>x;
            switch (x) {
                case 1: {
                    int i;
                    cout << "\t:WHAT KIND OF INFORMATION YOU NEED ABOUT MSCE FROM FOLLOWING : ";
                    cout << " \n\t\t\t\t:SELECT ONE :" << "\n" << "1.\"MCQ TEST FORMAT\" \n"
                         << "2.\"MERIT CRITERIA\" \n";
                    cout << "3.\"COURSE OUTLINE \" \n ";
                    cout << "\n\t\t\t:ENTER  HERE: ";
                    cin >> i;
                    if (i == 1) {
                        cout << " \t\t\t:   MCQ TEST FORMAT OF MSCE WILL BE  :\n" << endl;
                        cout << "\t\tMCQ will be divided in these sections:\n \n";
                        cout << " \t\t 1. 1-4 Will be from \"ENGLISH\"  \n";
                        cout << " \t\t 2. 5-9 Will be from \"MATH \"  \n";
                        cout << " \t\t 3. 10-14 Will be from \"ANALYTICS\"  \n";
                        cout << " \t\t 4. 14-20 Will be from \"COMPUTER SCIENCE \"  \n";
                        break;
                    } else if (i== 2) {
                        cout << " \t\t\t:  MERIT CRITERIA  :\n" << endl;
                        cout << "\t\t IT WLL BE CALCULATED ACCORDING TO 60% BS RESULT AND 40% ENTRY TEST:\n \n";
                        cout << "\t\t YOU WILL BE GRADED ACCORDINGLY :\n \n";
                        cout << " \t\t IF YOUR SCORE IS ABOVE 90%  \"A+\" \"YOU ARE ELIGIBLE FOR ALL COURCES\" \n";
                        cout<< " \t\t IF YOUR SCORE IS ABOVE 80%   \"A\" \"YOU ARE ELIGIBLE FOR MSCE,MSEE COURCES\"  \n";
                        cout << " \t\t IF YOUR SCORE IS ABOVE 70%  \"B+\" \"YOU CAN APPLY FOR VACANCY ONLY\"  \n";
                        cout << " \t\t  IF YOUR SCORE IS ABOVE 60% \"B\" \"YOU ARE NOT ELIGIBLE FOR ALL COURCES\"  \n";
                        break;
                    } else if (i== 3) {
                        cout << " \t\t\t: COURCE OUTLINE  :\n" << endl;
                        cout << "\t\t YOUR SUBJECTS WILL BE :\n \n";
                        cout << "\t\t  1. CS 511 D-LAB I \n";
                        cout << " \t\t 2.CS 512 D-LAB II\n";
                        cout << " \t\t 3.CS 505 Advanced Computer Architecture\n";
                        cout << " \t\t 4.CS501 Advanced Operating System\n";
                        cout << " \t\t 5.MG515 Entrepreneurship\n \n";
                        break;
                    }
                }
                    break;
                case 2:
                {
                    int z;
                    cout << "\t:WHAT KIND OF INFORMATION YOU NEED ABOUT MSEE FROM FOLLOWING : ";
                    cout << " \n\t\t\t\t:SELECT ONE :" << "\n" << "1.\"MCQ TEST FORMAT\" \n"
                         << "2.\"MERIT CRITERIA\" \n";
                    cout << "3.\"COURSE OUTLINE \" \n ";
                    cout << "\n\t\t\t:ENTER  HERE: ";
                    cin >> z;
                    if (z == 1)
                    {
                        cout << " \t\t\t:   MCQ TEST FORMAT OF MSEE WILL BE  :\n" << endl;
                        cout << "\t\tMCQ will be divided in these sections:\n \n";
                        cout << " \t\t 1. 1-5 Will be from \"analytical reasoning\"  \n";
                        cout << " \t\t 3. 5-9 Will be from \"maths\"  \n";
                        cout << " \t\t 4. 10-20 Will be from  \"electric circuits \"  \n";
                        break;
                    } else if (z == 2)
                    {
                        cout << " \t\t\t:  MERIT CRITERIA  :\n" << endl;
                        cout << "\t\t IT WLL BE CALCULATED ACCORDING TO 60% BS RESULT AND 40% ENTRY TEST:\n \n";
                        cout << "\t\t YOU WILL BE GRADED ACCORDINGLY :\n \n";
                        cout << " \t\t IF YOUR SCORE IS ABOVE 90%  \"A+\" \"YOU ARE ELIGIBLE FOR ALL MS COURCES\" \n";
                        cout<< " \t\t IF YOUR SCORE IS ABOVE 80%   \"A\" \"YOU ARE ELIGIBLE FOR MSCE,MSEE COURCES\"  \n";
                        cout << " \t\t IF YOUR SCORE IS ABOVE 70%  \"B+\" \"YOU CAN APPLY FOR VACANCY ONLY\"  \n";
                        cout << " \t\t  IF YOUR SCORE IS ABOVE 60% \"B\" \"YOU ARE NOT ELIGIBLE FOR ALL COURCES\"  \n";
                        break;
                    } else if (z == 3) {
                        cout << " \t\t\t: COURCE OUTLINE  :\n" << endl;
                        cout << "\t\t YOUR SUBJECTS WILL BE :\n \n";
                        cout << "\t\t  1.Analysis of Stochastic Systems\t \n";
                        cout << " \t\t 2.Advanced Mathematics\n";
                        cout << " \t\t 3.VLSI Architecture and Systems\n";
                        cout << " \t\t 4.Advanced Semiconductor Device Physics\n";
                        break;
                    }
                    case 3:
                    {
                        int d;
                        cout << "\t:WHAT KIND OF INFORMATION YOU NEED ABOUT MSCS FROM FOLLOWING : ";
                        cout << " \n\t\t\t\t:SELECT ONE :" << "\n" << "1.\"MCQ TEST FORMAT\" \n"
                             << "2.\"MERIT CRITERIA\" \n";
                        cout << "3.\"COURSE OUTLINE \" \n ";
                        cout << "\n\t\t\t:ENTER  HERE: ";
                        cin >> d;
                        if (d == 1)
                        {
                            cout << " \t\t\t:   MCQ TEST FORMAT OF MSCS WILL BE  :\n" << endl;
                            cout << "\t\tMCQ will be divided in these sections:\n \n";
                            cout << " \t\t 1. 1-9 Will be from \"analytical reasoning\"  \n";
                            cout << " \t\t 2. 9-14 Will be from \"maths\"  \n";
                            cout << " \t\t 3. 14-20 Will be from \"computer science core\"  \n";
                            break;
                        } else if (d == 2)
                        {
                            cout << " \t\t\t:  MERIT CRITERIA  :\n" << endl;
                            cout << "\t\t IT WLL BE CALCULATED ACCORDING TO 70% BS RESULT AND 30% ENTRY TEST:\n \n";
                            cout << "\t\t YOU WILL BE GRADED ACCORDINGLY :\n \n";
                            cout << " \t\t IF YOUR SCORE IS ABOVE 90%  \"A+\" \"YOU ARE ELIGIBLE FOR ALL COURCES\" \n";
                            cout<< " \t\t IF YOUR SCORE IS ABOVE 80%  \"A\" \"YOU ARE ELIGIBLE FOR MSCE,MSEE COURCES\"  \n";
                            cout << " \t\t IF YOUR SCORE IS ABOVE 70%  \"B+\" \"YOU CAN APPLY FOR VACANCY ONLY\"  \n";
                            cout << " \t\t IF YOUR SCORE IS ABOVE 60% \"B\" \"YOU ARE NOT ELIGIBLE FOR ALL COURCES\"  \n";
                            break;
                        } else if (d == 3) {
                            cout << " \t\t\t: COURCE OUTLINE  :\n" << endl;
                            cout << "\t\t YOUR SUBJECTS WILL BE :\n \n";
                            cout << "\t\t 1.Tools and Techniques for Data Science \n";
                            cout << " \t\t 2.Statistical and Mathematical Methods for Data Analysis\n";
                            cout << " \t\t 3. Information Retrieval and Text Mining \n";
                            cout << " \t\t 4.tResearch Methodology\n";
                            break;
                        }

                    }
                    break;}
            }
        }

    }
}
void first_phd()
{
    {{

            int q;
            cout<<"\n \tWHICH OF THE FOLLOWING INFORMATION YOU NEED TO KNOW ABOUT :";
            cout << "\n \t\t\t\t: COURSES :"<< "\n"<<"1.\"PHD CE\" \n"<<"2.\"PHD EE\" \n";
            cout<<"3.\"PHD CS\" \n";
            cout<<"\t\t\t:ENTER COURSE NUMBER HERE: ";
            cin>>q;
            switch (q) {
                case 1: {
                    int i;
                    cout << "\t:WHAT KIND OF INFORMATION YOU NEED ABOUT PHDCE FROM FOLLOWING : ";
                    cout << " \n\t\t\t\t:SELECT ONE :" << "\n" << "1.\"MCQ TEST FORMAT\" \n"
                         << "2.\"MERIT CRITERIA\" \n";
                    cout << "3.\"COURSE OUTLINE \" \n ";
                    cout << "\n\t\t\t:ENTER  HERE: ";
                    cin >> i;
                    if (i == 1) {
                        cout << " \t\t\t:   MCQ TEST FORMAT OF PHD CE WILL BE  :\n" << endl;
                        cout << "\t\tMCQ will be divided in these sections:\n \n";
                        cout << " \t\t 1. 1-4 Will be from \"ENGLISH\"  \n";
                        cout << " \t\t 2. 5-9 Will be from \"MATH \"  \n";
                        cout << " \t\t 3. 10-14 Will be from \"ANALYTICS\"  \n";
                        cout << " \t\t 4. 14-20 Will be from \"COMPUTER SCIENCE (CORE,ARCHITECTURE ETC) \"  \n";
                        break;
                    } else if (i == 2) {
                        cout << " \t\t\t:  MERIT CRITERIA  :\n" << endl;
                        cout << "\t\t IT WLL BE CALCULATED ACCORDING TO % INTER RESULT AND 40% ENTRY TEST:\n \n";
                        cout << "\t\t YOU WILL BE GRADED ACCORDINGLY :\n \n";
                        cout << " \t\t IF YOUR SCORE IS ABOVE 90%  \"A+\" \"YOU ARE ELIGIBLE FOR ALL COURCES\" \n";
                        cout
                                << " \t\t IF YOUR SCORE IS ABOVE 80%   \"A\" \"YOU ARE ELIGIBLE FOR PHD CE,EE,CS COURCES\"  \n";
                        cout << " \t\t IF YOUR SCORE IS ABOVE 70%  \"B+\" \"YOU CAN APPLY FOR VACANCY ONLY\"  \n";
                        cout << " \t\t  IF YOUR SCORE IS ABOVE 60% \"B\" \"YOU ARE NOT ELIGIBLE FOR ALL COURCES\"  \n";
                        break;
                    } else if (i == 3) {
                        cout << " \t\t\t: COURCE OUTLINE  :\n" << endl;
                        cout << "\t\t YOUR SUBJECTS WILL BE :\n \n";
                        cout << "\t\t  1.Object-oriented programming in C++\n";
                        cout << " \t\t 2.Computer Database Organization\n";
                        cout << " \t\t 3.Elements of Digital Computer AND FURTHER MORE \n";
                        break;
                    }

                    break;
                }
                case 2:
                {
                    int z;
                    cout << "\t:WHAT KIND OF INFORMATION YOU NEED ABOUT PHD EE FROM FOLLOWING : ";
                    cout << " \n\t\t\t\t:SELECT ONE :" << "\n" << "1.\"MCQ TEST FORMAT\" \n"
                         << "2.\"MERIT CRITERIA\" \n";
                    cout << "3.\"COURSE OUTLINE \" \n ";
                    cout << "\n\t\t\t:ENTER  HERE: ";
                    cin >> z;
                    if (z == 1)
                    {
                        cout << " \t\t\t:   MCQ TEST FORMAT OF PHD EE WILL BE  :\n" << endl;
                        cout << "\t\tMCQ will be divided in these sections:\n \n";
                        cout << " \t\t 1. 1-5 Will be from \"topics related to bs \"  \n";
                        cout << " \t\t 3. 5-9 Will be from \"ELECTRICAL CIRCUITS\"  \n";
                        cout << " \t\t 4. 10-20 Will be from  \"MATHS \"  \n";
                        cout << " \t\t 4. 10-20 Will be from  \" ENGLISH \"  \n";
                        break;
                    } else if (z == 2)
                    {
                        cout << " \t\t\t:  MERIT CRITERIA  :\n" << endl;
                        cout << "\t\t IT WLL BE CALCULATED ACCORDING TO ENTRY TEST PERCENTAGE AND BS AGREGATE:\n \n";
                        cout << "\t\t YOU WILL BE GRADED ACCORDINGLY :\n \n";
                        cout << " \t\t IF YOUR SCORE IS ABOVE 90%  \"A+\" \"YOU ARE ELIGIBLE FOR ALL PHD COURCES\" \n";
                        cout<< " \t\t IF YOUR SCORE IS ABOVE 80%   \"A\" \"YOU ARE ELIGIBLE FOR PHD CE,EE COURCES\"  \n";
                        cout << " \t\t IF YOUR SCORE IS ABOVE 70%  \"B+\" \"YOU CAN APPLY FOR VACANCY ONLY\"  \n";
                        cout << " \t\t  IF YOUR SCORE IS ABOVE 60% \"B\" \"YOU ARE NOT ELIGIBLE FOR ALL COURCES\"  \n";
                        break;
                    } else if (z == 3) {
                        cout << " \t\t\t: COURCE OUTLINE  :\n" << endl;
                        cout << "\t\t YOUR SUBJECTS WILL BE :\n \n";
                        cout << "\t\t  1.Analysis of Stochastic Systems\t \n";
                        cout << " \t\t 2.ADVANE DIGITAL SIGNALS\n";
                        cout << " \t\t 3.ADVANCE DIGITAL SYSTEM DESIGN \n";
                        cout << " \t\t 4.DSP HARDWARE DESIGN \n";
                        break;
                    }
                    case 3:
                    {
                        int d;
                        cout << "\t:WHAT KIND OF INFORMATION YOU NEED ABOUT PHD CS FROM FOLLOWING : ";
                        cout << " \n\t\t\t\t:SELECT ONE :" << "\n" << "1.\"MCQ TEST FORMAT\" \n"
                             << "2.\"MERIT CRITERIA\" \n";
                        cout << "3.\"COURSE OUTLINE \" \n ";
                        cout << "\n\t\t\t:ENTER  HERE: ";
                        cin >> d;
                        if (d == 1)
                        {
                            cout << " \t\t\t:   MCQ TEST FORMAT OF PHD CS WILL BE  :\n" << endl;
                            cout << "\t\tMCQ will be divided in these sections:\n \n";
                            cout << " \t\t 1. 1-9 Will be from \"analytical reasoning\"  \n";
                            cout << " \t\t 2. 9-14 Will be from \"maths\"  \n";
                            cout << " \t\t 3. 14-20 Will be from \"computer science core\"  \n";
                            cout << " \t\t 3. 14-20 Will be from \"english\"  \n";
                            break;
                        } else if (d == 2)
                        {
                            cout << " \t\t\t:  MERIT CRITERIA  :\n" << endl;
                            cout << "\t\t IT WLL BE CALCULATED ACCORDING TO 70% BS RESULT AND 30% ENTRY TEST:\n \n";
                            cout << "\t\t YOU WILL BE GRADED ACCORDINGLY :\n \n";
                            cout << " \t\t IF YOUR SCORE IS ABOVE 90%  \"A+\" \"YOU ARE ELIGIBLE FOR ALL COURCES\" \n";
                            cout<< " \t\t IF YOUR SCORE IS ABOVE 80%  \"A\" \"YOU ARE ELIGIBLE FOR PHD CS,CE COURCES\"  \n";
                            cout << " \t\t IF YOUR SCORE IS ABOVE 70%  \"B+\" \"YOU CAN APPLY FOR VACANCY ONLY\"  \n";
                            cout << " \t\t IF YOUR SCORE IS ABOVE 60% \"B\" \"YOU ARE NOT ELIGIBLE FOR ALL COURCES\"  \n";
                            break;
                        } else if (d == 3) {
                            cout << " \t\t\t: COURCE OUTLINE  :\n" << endl;
                            cout << "\t\t YOUR SUBJECTS WILL BE :\n \n";
                            cout << "\t\t 1.DATA BASE SYSTEM \n";
                            cout << " \t\t 2.COMPUTER ARCHITECTURE SYSTEM\n";
                            cout << " \t\t 3.NETWORKING \n";
                            cout << " \t\t 4.SOFTWARE RELATED \n";
                            break;
                        }

                        break;}
                }}
        }
    }
}

void bsKEY()
{
    ifstream file;
    file.open("BSKEY.txt", ios::in);
    char str;
    while (file >> str) {
        cout << str << " ";
        // count++;
    }
    char data;
    int num;
    cout << endl << "Enter the line number you want to change: ";
    cin >> num;
    cout << "Enter the data you want to enter: ";
    cin >> data;
    editExistingDataBS(num,data);
    ifstream file1;
    file1.open("BSKEY.txt", ios::in);
    while (file1 >> str) {
        cout << str << " ";
        // count++;
    }
}
void msKEY()
{
    ifstream file;
    file.open("MSKEY.txt", ios::in);
    char str;
    while (file >> str) {
        cout << str << " ";
        // count++;
    }
    char data;
    int num;
    cout << endl << "Enter the line number you want to change: ";
    cin >> num;
    cout << "Enter the data you want to enter: ";
    cin >> data;
    editExistingDataMS(num,data);
    ifstream file1;
    file1.open("MSKEY.txt", ios::in);
    while (file1 >> str) {
        cout << str << " ";
        // count++;
    }
}
void phdKEY()
{
    ifstream file;
    file.open("PHDKEY.txt", ios::in);
    char str;
    while (file >> str) {
        cout << str << " ";
        // count++;
    }
    char data;
    int num;
    cout << endl << "Enter the line number you want to change: ";
    cin >> num;
    cout << "Enter the data you want to enter: ";
    cin >> data;
    editExistingDataPHD(num,data);
    ifstream file1;
    file1.open("PHDKEY.txt", ios::in);
    while (file1 >> str) {
        cout << str << " ";
        // count++;
    }
}

void editExistingDataBS(int num, char data)
{
    int count =0;
    ifstream file;
    file.open("BSKEY.txt", ios::in);
    char str;
    while (file >> str) {
        // cout << str << endl;
        count++;
    }
    if (num >= count) {
        cout << "Out of Bounds \n";
        return;
    }
    // cout << count;
    file.close();
    file.open("BSKEY.txt",ios::in);
    char arr[count];
    for (int i = 0;!file.eof() && i < count; i++) {
        file >> arr[i];
    }
    file.close();
    arr[num-1] = data;
    ofstream out;
    out.open("BSKEY.txt");
    for(int i = 0;i < count; i++) {
        out << arr[i] << endl;
    }
    out.close();
}
void editExistingDataMS(int num, char data)
{
    int count =0;
    ifstream file;
    file.open("MSKEY.txt", ios::in);
    char str;
    while (file >> str) {
        // cout << str << endl;
        count++;
    }
    if (num >= count) {
        cout << "Out of Bounds \n";
        return;
    }
    // cout << count;
    file.close();
    file.open("MSKEY.txt",ios::in);
    char arr[count];
    for (int i = 0;!file.eof() && i < count; i++) {
        file >> arr[i];
    }
    file.close();
    arr[num-1] = data;
    ofstream out;
    out.open("MSKEY.txt");
    for(int i = 0;i < count; i++) {
        out << arr[i] << endl;
    }
    out.close();
}
void editExistingDataPHD(int num, char data)
{
    int count =0;
    ifstream file;
    file.open("PHDKEY.txt", ios::in);
    char str;
    while (file >> str) {
        // cout << str << endl;
        count++;
    }
    if (num >= count) {
        cout << "Out of Bounds \n";
        return;
    }
    // cout << count;
    file.close();
    file.open("PHDKEY.txt",ios::in);
    char arr[count];
    for (int i = 0;!file.eof() && i < count; i++) {
        file >> arr[i];
    }
    file.close();
    arr[num-1] = data;
    ofstream out;
    out.open("PHDKEY.txt");
    for(int i = 0;i < count; i++) {
        out << arr[i] << endl;
    }
    out.close();
}

void showBS()
{
    fstream new_file;
    new_file.open("BSPAPER.txt");
    if(!new_file)
        cout<<"No such file";  string ch;
    while (!new_file.eof()) {
        getline(new_file,ch).good();
        cout << ch <<endl;
    }
    new_file.close();
}
void showMS()
{
    fstream new_file;
    new_file.open("MSPAPER.txt");
    if(!new_file)
        cout<<"No such file";  string ch;
    while (!new_file.eof()) {
        getline(new_file,ch).good();
        cout << ch <<endl;
    }
    new_file.close();
}
///change
void showPHD()
{
    fstream new_file;
    new_file.open("PHDPAPER.txt");
    if(!new_file)
        cout<<"No such file";  string ch;
    while (!new_file.eof()) {
        getline(new_file,ch).good();
        cout << ch <<endl;
    }
    new_file.close();
}


