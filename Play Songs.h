#ifndef PLAY_SONGS_H_INCLUDED
#define PLAY_SONGS_H_INCLUDED

#include "Search Song.h"

 void dispsong()
{
    system("COLOR B4");

while(1>0)
{

ClearScreen();
 Music s;

      cout<<endl<<endl;
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t     PLAYING MENU \n\n\n\t\t\t\t\t\t 1.To select and play a song\n\t\t\t\t\t\t 2.To play all songs\n\t\t\t\t\t\t 3.To go to MAIN MENU\n\n\t\t\t\t\t\t enter your choice ";
    char ck=getch();


    switch(ck)
    {
        case '1':
        {
            ClearScreen();
            searchsong();
            break;
        }

        case '2':
        {
            ClearScreen();
            fstream fout("MusicLib.dat",ios::in | ios::binary);

            while(  fout.read((char *)&s,sizeof(s)) )
                {
                    s.putdata();
                    play(s.retname());
                }

            fout.close();
                break;
        }

        case '3':goto endd;

        default:break;
    }


 }
 endd:;
}

#endif // DISPLAY_ALL_RECORDS_H_INCLUDED
