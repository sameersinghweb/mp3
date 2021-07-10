#ifndef MODIFY_SONG_H_INCLUDED
#define MODIFY_SONG_H_INCLUDED

void modify()
{
    system("COLOR 2E");

 while(1>0)
{

ClearScreen();

      cout<<endl<<endl;
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t     MODIFYING MENU\n\n\n\t\t\t\t\t\t 1.Modify by ID\n\t\t\t\t\t\t 2.Modify by name\n\t\t\t\t\t\t 3.Modify by artist\n\t\t\t\t\t\t 4.To go to MAIN MENU\n\n\t\t\t\t\t\t enter your choice ";
    char ck=getch();


    switch(ck)
    {
        case '1':
        {

    ClearScreen();

   int t,a=0;
   Music s;

     cout<<"\n Enter the ID to modify the data \n\n";
     cin>>t;

       fstream foutp("MusicLib.dat", ios::in | ios::out | ios::binary);


    while(foutp.read((char *)&s,sizeof(s)))
      {
	if(s.retid()==t)
	   {
	     a++;
	     s.putdata();
	     foutp.seekg(foutp.tellg()-sizeof(s));

	     cout<<"\n\n modify your record : \n\n";

	     s.getdata();
	     foutp.write((char *)&s,sizeof(s));
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
   Music s;
   char t[30];
     cout<<"\n Enter the song name to modify the data \n\n";
      gets(t);

       fstream foutp("MusicLib.dat", ios::in | ios::out | ios::binary);


    while(foutp.read((char *)&s,sizeof(s)))
      {
	if(strcmpi(s.retname(),t))
	   {
	     a++;
	     s.putdata();
	     foutp.seekg(foutp.tellg()-sizeof(s));

	     cout<<"\n\n modify your record : \n\n";

	     s.getdata();
	     foutp.write((char *)&s,sizeof(s));
	   }
       }

               if (a==0)
                cout<<"\n no such entry exists";
               else
                cout<<"\n\n\t your data has been modified";

                getch();

     foutp.close();

            break;
        }

        case '3':
        {

    ClearScreen();

   int a=0;
   Music s;
   char t[30];

     cout<<"\n Enter the artist name to modify the data \n\n";
      gets(t);

       fstream foutp("MusicLib.dat", ios::in | ios::out | ios::binary);


    while(foutp.read((char *)&s,sizeof(s)))
      {
	if(strcmpi(s.retartist(),t)==0)
	   {
	     a++;
	     s.putdata();
	     foutp.seekg(foutp.tellg()-sizeof(s));

	     cout<<"\n\n modify your record : \n\n";

	     s.getdata();
	     foutp.write((char *)&s,sizeof(s));
	   }
       }

               if (a==0)
                cout<<"\n no such entry exists";
               else
                cout<<"\n\n\t your data has been modified";

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

#endif // MODIFY_RECORD_H_INCLUDED
