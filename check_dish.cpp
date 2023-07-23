#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void repeat();

void check_dish(double gold_value)
{
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

     string line;
     if(gold_value==721)
    {
       ifstream FrenchFry("FrenchFry.txt");

       while(getline(FrenchFry,line))
       {

        cout<<line<<endl;

       }
    }
    else if(gold_value==891)
    {
        ifstream FriedRice("FriedRice.txt");

        while(getline(FriedRice,line))
      {
        cout<<line<<endl;

      }
    }
    else if(gold_value==5579)
    {
        ifstream EggCurry("EggCurry.txt");

        while(getline(EggCurry,line))
      {
        cout<<line<<endl;

      }
    }
    else if(gold_value==414)
    {
        ifstream LemonJuice("LemonJuice.txt");

        while(getline(LemonJuice,line))
      {
        cout<<line<<endl;

      }
    }
     else if(gold_value==1288)
    {
        ifstream ChickenCurry("ChickenCurry.txt");

        while(getline(ChickenCurry,line))
      {
        cout<<line<<endl;

      }
    }
     else if(gold_value==11272)
    {
        ifstream Briyani("Briyani.txt");

        while(getline(Briyani,line))
      {
        cout<<line<<endl;

      }
    }
     else if(gold_value==177)
    {
        ifstream MilkShake("MilkShake.txt");

        while(getline(MilkShake,line))
      {
        cout<<line<<endl;

      }
    }
    else{
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
        cout<<"--------------------------------------------"<<endl;
        cout<<"There is no such dish with this ingredients"<<endl;
        cout<<"Please select your ingredients again:"<<endl;
        repeat();
    }

}


