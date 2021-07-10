#ifndef SOUND_PLAY_H_INCLUDED
#define SOUND_PLAY_H_INCLUDED


    void play(char name[30],int flag=0)
    {
        char song[50]="D:\\A&S&R\\",w[5]=".wav";

        strcat(song,name);
        strcat(song,w);
        PlaySound(TEXT(song), NULL, SND_ASYNC);

        if(flag==0)
        {
            getch();
            PlaySound(NULL,0,0);
            getch();
        }

    }

#endif // SOUND_PLAY_H_INCLUDED
