#include<windows.h>
#include<mmsystem.h>
#include<time.h>

void ClearScreen()
  {
    system("cls");
  }

#include"Class Music.h"
#include"Sound Play.h"
#include"Add Song.h"
#include"Play Songs.h"
#include"Delete Song.h"
#include"Modify Song.h"



void intro()
{
    system("COLOR C0");
    play("black",1);


        cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tSRM IST\n\n\t\t\t\tMade by ARYAN PAREKH and SAMEER SINGH and ROHIT\n\n\t\t\t\t\t\t\tM1 Section";
        Sleep(5000);
        ClearScreen();

        cout<<"\n\n\n\n\n\n\n\n\n\n\n"
            <<"\t\t\t\t\t\t    ===================\n"
            <<"\t\t\t\t\t\t    |                 |\n"
            <<"\t\t\t\t\t\t    |     JUKEBOX     |\n"
            <<"\t\t\t\t\t\t    |                 |\n"
            <<"\t\t\t\t\t\t    ===================";

        char color[9]="COLOR A0";

    for(int p=0;p<5;p++)
        {
            for(int c=1;c<5;c++)
            {
                color[6]=color[6]+c/2;
                system(color);
                Sleep(250);
            }

            color[6]='A';
        }

    PlaySound(NULL,0,0);

}




int main()
{

    intro();
    bool kf=TRUE;
    char kk;
do{

    system("COLOR 1F");
    ClearScreen();
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t1. Administrator\n\t\t\t\t\t\t2. User\n\t\t\t\t\t\t3. Exit\n\n\n\t\t\t\t\t\t Enter your choice: ";
kk=getch();
if(kk!='3')
   {
     if('2'==kk)
      {
        ClearScreen();
        dispsong();

      }
    else if('1'==kk)
            {


    const char key[9]="password";
    int x=0;


    ClearScreen();
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tPlease Enter The Password\n\n\t\t\t\t\t\t";


    while(key[x]==getch())
    {
           cout<<'*';
           x++;
    }

    if(x==8)
        cout<<"\n\n\t\t\t\t\t\tcorrect password";
    else
    {
        cout<<"\n\n\t\t\t\t\t\tincorrect password";
        Sleep(1500);
        continue;

    }

    getch();



    ClearScreen();

int ne=1;
    while(ne>0)
    {

      system("COLOR 1F");

      ClearScreen();

     char x;



 cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t     MAIN MENU \n\n"
	 <<"\n\t\t\t\t\t\t 1. Add a song"
	 <<"\n\t\t\t\t\t\t 2. Play a song"
	 <<"\n\t\t\t\t\t\t 3. Delete a song"
	 <<"\n\t\t\t\t\t\t 4. Modify details of a song"
	 <<"\n\t\t\t\t\t\t 5. Exit"
	 <<"\n\n\t\t\t\t\t\t enter your choice ";

     x=getch();

     switch(x)
       {

            case('1'):  ClearScreen();addsong();break;

            case('2'):  ClearScreen();dispsong();break;

            case('3'):  ClearScreen();delsong();break;

            case('4'):  ClearScreen();modify();break;

            case('5'):  ClearScreen();ne=0;break;

            default:break;

       }
    }
            }

   }
else{
                    cout<<"\n\n\n\n\n\n\t\t\t\t\tDo you want to exit? if yes press y else press n ";
                    if(getch()=='y')
                        kf=FALSE;
                }





}while(kf);
    return 0;


}
