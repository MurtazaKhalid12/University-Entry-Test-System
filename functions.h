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

//atif
void studentFunction(int login);
void teacherFunction(int login);
void adminFunction(int login);
void studentLoginLoop ();
void studentShowOptions();
void studentOptionSelect();
void examFunction();
void aggregateFunction();
void resultFunction();
void meritListFunction();
void teacherLoginLoop ();
void teacherShowOptions();
void teacherOptionSelect();
void adminLoginLoop ();
void adminShowOptions();
void adminOptionSelect();
void seperationFunction();

//murtaza
int compareFunction(std::string s1, std::string s2,int l);
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

//ariba
void checkEntryTest();
void programDetails();
void first_phd();
void first_ms();
void first_bs();
void showBS();
void showMS();
void showPHD();
//huzaifa
void makeMCQs();
void editMCQs();
void generateMeritList();
void bsKEY();
void msKEY();
void phdKEY();
void editExistingDataMS(int num, char data);
void editExistingDataBS(int num, char data);
void editExistingDataPHD(int num, char data);

//fatima
void addStudent();
void addTeacher();
void addAdmin();
void removeStudents();
void removeTeachers();
void change();
void adminLogin();
void teacherLogin();
void studentLogin();
