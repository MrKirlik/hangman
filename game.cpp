#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <fstream>
#include "hangman.h"
#include <graphics.h>
using namespace std;

void game(char *str)
{
    FILE *f; 
    int MAXLEN=15;
    char w[MAXLEN]; 
 
    if ( (f = fopen("slovo.txt", "r")) == NULL ) exit(0); 
    while ( !feof(f) ) 
    { 
        fgets(w, MAXLEN, f); 
    } 
    fclose(f); 

    const int MAX_WRONG = 8; 
    vector<string>words; 
    words.push_back(w);
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0];
    int wrong = 0; 
    string soFar(THE_WORD.size(), '-'); 
    string used = ""; 
    
    for(int z=0; z<15; z++)
    {
           cout<<"\n"; 
            }
    cout<<"Welcome game HANGMAN. Good Luck!\n";
    
    
    
    while((wrong<MAX_WRONG) && (soFar != THE_WORD))
    {
      cout << "\n\nY Vas est vsego "<<(MAX_WRONG - wrong);
      cout << " popitok.\n";
      cout << "\nVi ispolsovali eti bukvi:\n" <<used <<endl;
      cout << "\nTyt slovo kotoroe ya zagadal:\n" << soFar<< endl;
      
      char guess;
      next:
      cout << "\n\nVasha bukva: ";
      cin>>guess;
      string buk="1234567890";
       if(buk.find(guess) != string::npos)
       {
        for(int z=0; z<25; z++)
        {
           cout<<"\n"; 
            }
           cout<<"Error!\n";
           goto next;
           }
      guess = toupper(guess); 
      while (used. find(guess) != string::npos)
      {
            cout<<"\nTi yje zagadival "<<guess<<endl;
            cout<<"Vvedi bukvu eshe raz: ";
            cin>>guess;
            guess=toupper(guess);
            }
      used+=guess;
      if(THE_WORD.find(guess) !=string::npos)
      {
       for(int z=0; z<20; z++)
       {
           cout<<"\n"; 
            }
       cout<<"Ti prav! "<<guess<<" v slove est.\n";
     
       for(int i=0; i<THE_WORD.length(); ++i)
       {
              if(THE_WORD[i]==guess)
              {
                soFar[i]=guess;
                  }
                  }
                  }
              else
              {
                for(int z=0; z<20; z++)
                {
                  cout<<"\n"; 
                  }
       cout<<"Sorry. "<<guess<<" v slove net.\n";
       ++wrong;
       if(wrong==1)
       {
             initwindow(250,250); // ??????? ???? ??? ???????

//------------------
//Тело стикмена
moveto(130,150);         
lineto(130,180);
//------------------
//голова стикмена
circle(130, 140, 10);
//------------------
//рука правая стикмена
moveto(130,150);
lineto(140,170);
//-------------------
//рука левая  стикмена
moveto(130,150);
lineto(120,170);
//--------------------
//правая нга стикмена
moveto(130,180);
lineto(120,200);
//---------------------
//левая нога стикмена
moveto(130,180);
lineto(140,200);
//----------------------
//Земля
moveto(0,200);
lineto(250,200);
//----------------------       // ??????? ? ????? (50,50)
system("PAUSE");             // ????? ??????? ?? ????? ???????
closegraph();        // ??????? ???? ? ????????    
                   }
                   if(wrong==2)
                   {
                        initwindow(250,250); // ??????? ???? ??? ???????
 
//------------------
//Тело стикмена
moveto(130,150);         
lineto(130,180);
//------------------
//голова стикмена
circle(130, 140, 10);
//------------------
//рука правая стикмена
moveto(130,150);
lineto(140,170);
//-------------------
//рука левая  стикмена
moveto(130,150);
lineto(120,170);
//--------------------
//правая нга стикмена
moveto(130,180);
lineto(120,200);
//---------------------
//левая нога стикмена
moveto(130,180);
lineto(140,200);
//----------------------
//Земля
moveto(0,200);
lineto(250,200);
//----------------------
//кусок облака
circle(0, 0, 90);
circle(30, 0, 90);
circle(60, 0, 90);
system("PAUSE");         
closegraph(); 
                            }
if(wrong==3)
{
    
initwindow(250,250); // ??????? ???? ??? ???????

//------------------
//Тело стикмена
moveto(130,150);         
lineto(130,180);
//------------------
//голова стикмена

circle(130, 140, 10);
//------------------
//рука правая стикмена
moveto(130,150);
lineto(140,170);
//-------------------
//рука левая  стикмена
moveto(130,150);
lineto(120,170);
//--------------------
//правая нга стикмена
moveto(130,180);
lineto(120,200);
//---------------------
//левая нога стикмена
moveto(130,180);
lineto(140,200);
//----------------------
//Земля
moveto(0,200);
lineto(250,200);
//----------------------
//кусок облака
circle(0, 0, 90);
circle(30, 0, 90);
circle(60, 0, 90);
//----------------------
//2 кусок облака
circle(250, 0, 90);
circle(220, 0, 90);
circle(190, 0, 90);
//----------------------
system("PAUSE");
closegraph();
}

if(wrong==4)
{
    initwindow(250,250); 

//------------------
//Тело стикмена
moveto(130,150);         
lineto(130,180);
//------------------
//голова стикмена
circle(130, 140, 10);
//------------------
//рука правая стикмена
moveto(130,150);
lineto(140,170);
//-------------------
//рука левая  стикмена
moveto(130,150);
lineto(120,170);
//--------------------
//правая нга стикмена
moveto(130,180);
lineto(120,200);
//---------------------
//левая нога стикмена
moveto(130,180);
lineto(140,200);
//----------------------
//Земля
moveto(0,200);
lineto(250,200);
//----------------------
//кусок облака
circle(0, 0, 90);
circle(30, 0, 90);
circle(60, 0, 90);
//----------------------
//2 кусок облака
circle(250, 0, 90);
circle(220, 0, 90);
circle(190, 0, 90);
//----------------------
//петля
moveto(125,0);
lineto(125,100);
circle(125, 105, 5);
//----------------------
system("PAUSE");
closegraph();
}

if(wrong==5)
{
    initwindow(250,250); // ??????? ???? ??? ???????

//------------------
//Тело стикмена
moveto(130,150);         
lineto(130,180);
//------------------
//голова стикмена
circle(130, 140, 10);
//------------------
//рука правая стикмена
moveto(130,150);
lineto(140,170);
//-------------------
//рука левая  стикмена
moveto(130,150);
lineto(120,170);
//--------------------
//правая нга стикмена
moveto(130,180);
lineto(120,200);
//---------------------
//левая нога стикмена
moveto(130,180);
lineto(140,200);
//----------------------
//Земля
moveto(0,200);
lineto(250,200);
//----------------------
//кусок облака
circle(0, 0, 90);
circle(30, 0, 90);
circle(60, 0, 90);
//----------------------
//2 кусок облака
circle(250, 0, 90);
circle(220, 0, 90);
circle(190, 0, 90);
//----------------------
//спустилась петля
moveto(125,0);
lineto(125,120);
circle(125, 125, 5);
//-----------------------
system("PAUSE");
closegraph();
}

if(wrong==6)
{
    
system("PAUSE");
closegraph();
}

if(wrong==7)
{
    
system("PAUSE");
closegraph();
}

if(wrong==8)
{
    
system("PAUSE");
closegraph();
}
             }

             }
     
      if(wrong==MAX_WRONG)
      {
      cout<<"\nTebya povesili!";
          }
      else
      {
         cout<<"\nYou win!";
          }
      cout<<"\nZagadanoe slovo: " <<THE_WORD<<endl;
      }
