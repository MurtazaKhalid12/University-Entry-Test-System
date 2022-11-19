#include <iostream>
#include <fstream>
using namespace std;
int main()
	{ 
	char t;
			 do
			 {
			    string st2;
         		string st1;
         		cout<<"\t\t\t\t"<<"FORMAT(BSPROGRAM/MSPROGRAM/PHDPROGRAM)\n";
         		cout<<"ENTER THE PROGRAM : ";
         		cin>>st1;
         		cout<<endl;
         		int x;
         		cout<<"ENTER THE STUDENTS NUMBER : ";
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
                return 0;
            }