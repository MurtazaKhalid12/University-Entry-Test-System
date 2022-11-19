#include <iostream>
#include <fstream>
using namespace std;
int main()
{
                char t;
                do
                {
                  {
                	string st4;
                    cout<<"                                "<<"WELCOME TO MCQS KEY "<<endl;
                    cout<<"\t\t"<<"FILE FORMAT (PHDKEY)(MSKEY)(BSKEY)""\n";
                    int m;
                    cout<<"enter the number of mcqs  :";
                    cin>>m;
                    string str1;
                    cout<<"ENTER A FILE NAME: ";
					cin>>str1;
                    ofstream abc;
                    abc.open(str1+".txt",ios::app);
                    for(int i=1;i<=m;i++)
                    {
                    cout<<"enter the options :"	;
                    cin>>st4;
                    abc<<st4<<endl;
					}			
					cout<<"PRESS ANY KEY TO EXIT WINDOW";
					int main();
					cin.get();
					cin.get();
         }
                    cout<<"ENTER Y/y FOR REUSING :";
                    cin>>t;
                }
				while(t=='y'||t=='Y');
                return 0;
            }