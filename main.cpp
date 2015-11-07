#include <iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
void dis(int x){for(int i=0;i<=x;i++)cout<<"*";}
int main()
{
    system("Title Easy folder creator");
    system("echo off");
    dis(78);
    cout << "\n\t\t Easy folder creator BY Gautam krishna.R" << endl;
    dis(78);
    int z;
    cout<<endl;
    fstream gout;
    cout<<"\n\t\tEtnter the number of folders you want to create : ";
    cin>>z;
    gout.open("gen.bat",ios::out);
    gout<<"echo off"<<endl<<"cls";
    for(int i=1;i<=z;i++)
    {
        gout<<"echo       wait..."<<endl;
        gout<<"mkdir Folder_"<<i<<endl<<"cls"<<endl;
    }
    gout.close();
        system("call gen.bat");
        system("del /F /s /Q gen.bat");
        system("cls");
        cout<<"\n\tSucess! "<<z<<"folders created";
    getchar();

}
