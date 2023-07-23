#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void repeat();

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);

    string line;
    ifstream My_list("ingredient.txt");
    while(getline(My_list,line))
    {
        cout<<line<<endl;

    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    cout<<"Please select up to 5 ingredient"<<endl;
    repeat();
}



