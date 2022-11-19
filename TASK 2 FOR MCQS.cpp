#include <iostream>
#include <fstream>
using namespace std;
int main()
{
                char t;
                do
                {
                    string st;
                    int x;
                    cout<<"                                "<<"WELCOME TO MCQS "<<endl;
                    cout<<"\t\t"<<"FILE FORMAT (PHDPAPER)(MSPAPER)(BSPAPER)""\n";
                    cout<<"ENTER A FILE NAME: ";
					cin>>st;
                    cout<<"\nENTER THE NUMBER OF MCQS :- ";
                    cin>>x;
                    string str;
                    string str1;
                    ofstream xyz;
                    xyz.open(st+".txt",ios::app);
                    for(int i = 1;i<=x;i++)
                    {
                        cout<<"\t MCQS NUMBER "<<i<<" :"<<" ";
                        getline(cin,str);
                        getline(cin,str);
                        xyz<<i<<".) "<<str<<endl;
                        for ( int j = 1; j <= 4; j++)
                        { 
						   string alp ="abcd";
                            cout<<"OPTION NUMBER : "<<j;
                            getline(cin,str1);
                            xyz<<alp[j-1]<<") "<<str1<<endl;
                        }
                    }
                    xyz.close();
                    cout<<"ENTER Y/y FOR REUSING :";
                    cin>>t;
                }
				while(t=='y'||t=='Y');
                return 0;
            }