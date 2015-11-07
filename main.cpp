#include <iostream>
#include<fstream.h>
#include <stdlib.h>
using namespace std;
void dis(int x){for(int i=0;i<=x;i++)cout<<"*";}
int main()
{
    system("Title Easy folder creator");
    int j=1;
    dis(78);
    cout << "\n\t\t\t Easy folder creator" << endl;
    dis(78);
    int z;
    cout<<endl;
    fstream gout;
    cout<<"\n\t\tEtnter the number of folders you want to create : ";
    cin>>z;
    for(int i=1;i<=z;i++)
    {
        gout.open("gen.bat",ios::out);
        gout<<"mkdir Folder_"<<i;
        gout.close();
        system("call gen.bat");
        system("del /F /s /Q gen.bat");
        system("cls");
    }
        cout<<"\n\tSucess! "<<z<<"folders created";
    getchar();
}
