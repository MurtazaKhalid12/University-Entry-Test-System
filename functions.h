#include<iostream>
#include<bits/stdc++.h>
#include <fstream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std;
extern double c;
extern string w;
extern char num;
void studentFunction(int login);
void teacherFunction(int login);
void adminFunction(int login);
//now smaller, insignificant functions

//STUDENT FUNCTIONS:
void studentLogin();
void studentLoginLoop ();
void studentShowOptions();
void studentOptionSelect();
void examFunction();
void aggregateFunction();
void resultFunction();
void meritListFunction();
//TEACHER FUNCTIONS:
void teacherLogin();
void teacherLoginLoop ();
void teacherShowOptions();
void teacherOptionSelect();
void checkEntryTest();
void makeMCQs();
void editMCQs();
void generateMeritList();
void manipulateMarks();
//ADMIN FUNCTIONS:
void adminLogin();
void adminLoginLoop ();
void adminShowOptions();
void adminOptionSelect();
void addStudent();
void addTeacher();
void addAdmin();
void removeStudents();
void removeTeachers();

//Structure functions:
void seperationFunction();


int compareFunction(string s1, string s2,int l);
void PHD(int n);
void MS(int n);
void rollnumber(int n);
void bsexamination();
void msexamination();
void phdexamination();
void BS_RESULT_CHECK();
void MS_RESULT_CHECK();
void PHD_RESULT_CHECK();
void BS_MERIT();
void MS_MERIT();
void PHD_MERIT();