#ifndef SEARCH_SONG_H_INCLUDED
#define SEARCH_SONG_H_INCLUDED

void searchsong()
{
    system("COLOR 5F");

while(1>0)
{

ClearScreen();

      cout<<endl<<endl;
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t     SEARCHING MENU\n\n\n\t\t\t\t\t\t 1.Search by ID\n\t\t\t\t\t\t 2.Search by name\n\t\t\t\t\t\t 3.Search by artist\n\t\t\t\t\t\t 4.To go to DISPLAYING MENU\n\n\t\t\t\t\t\t enter your choice ";
    char ck=getch();


    switch(ck)
    {
        case '1':
        {

    ClearScreen();

  int t,a=0;
  Music s;

  cout<<"enter the ID to play ";
  cin>>t;

    fstream foutp("MusicLib.dat", ios::in | ios::binary);

    while(foutp.read((char *)&s,sizeof(s)))
      {
            if(t==s.retid())
            {
                a++;
                s.putdata();
                getch();

                play(s.retname());
            }
       }

     if (a==0)
       cout<<"\n no such entry exists";

    getch();

     foutp.close();



            break;
        }

        case '2':
        {

    ClearScreen();

  int a=0;
  char t[30];
  Music s;

  cout<<"enter the name to play ";
  gets(t);

    fstream foutp("MusicLib.dat", ios::in | ios::binary);

    while(foutp.read((char *)&s,sizeof(s)))
      {
            if(strcmpi(t,s.retname())==0)
            {
                a++;
                s.putdata();
                getch();
                play(s.retname());
            }
       }

     if (a==0)
       {
           cout<<"\n no such entry exists";

       }
    getch();

     foutp.close();
            break;
        }

        case '3':
        {

    ClearScreen();

  int a=0;
  char t[30];
  Music s;

  cout<<"enter the artist to play ";
  gets(t);

    fstream foutp("MusicLib.dat", ios::in | ios::binary);

    while(foutp.read((char *)&s,sizeof(s)))
      {
            if(strcmpi(t,s.retartist())==0)
            {
                a++;
                s.putdata();
                getch();
                play(s.retname());
            }
       }

     if (a==0)
       cout<<"\n no such entry exists";

     getch();

     foutp.close();

            break;
        }

case '4':goto endd;
        default:break;
    }
}
endd:;
}

#endif // SEARCH_RECORDS_H_INCLUDED
