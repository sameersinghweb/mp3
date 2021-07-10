#ifndef DELETE_SONG_H_INCLUDED
#define DELETE_SONG_H_INCLUDED

void delsong()
{
    system("COLOR E4");

    while(1>0)
{

    ClearScreen();

      cout<<endl<<endl;
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t     DELETING MENU\n\n\n\t\t\t\t\t\t 1.Delete by ID\n\t\t\t\t\t\t 2.Delete by name\n\t\t\t\t\t\t 3.Delete by artist\n\t\t\t\t\t\t 4.To Delete all songs\n\t\t\t\t\t\t 5.To go to MAIN MENU\n\n\t\t\t\t\t\t enter your choice ";
    char ck=getch();

    switch(ck)
    {
        case '1':
        {

    ClearScreen();

   int t,a=0;
   Music s;


		      cout<<"\n\t enter the ID to delete the entered data \n";
		       cin>>t;

		       fstream orgn("MusicLib.dat",ios::in|ios::binary);
		       fstream tmp("temp.dat",ios::app|ios::binary);

			 while(orgn.read((char *)&s,sizeof(s)))
			    {
			      if(s.retid()!=t)
				    {
				       tmp.write((char *)&s,sizeof(s));
				       a++;
                    }
			    }
			orgn.close();
			tmp.close();
			remove("MusicLib.dat");
			rename("temp.dat","MusicLib.dat") ;

               if (a==0)
                cout<<"\n no such entry exists";
               else
                cout<<"\n\n\t your data has been removed ";

                getch();

            break;
        }

        case '2':
        {

    ClearScreen();


   int a=0;
   char t[30];
   Music s;


		      cout<<"\n\t enter the song name to delete the entered data \n";
		       gets(t);

		       fstream orgn("MusicLib.dat",ios::in|ios::binary);
		       fstream tmp("temp.dat",ios::app|ios::binary);

			 while(orgn.read((char *)&s,sizeof(s)))
			    {
			      if(strcmpi(s.retname(),t)==0)
				    {
				       tmp.write((char *)&s,sizeof(s));
				       a++;
                    }
			    }
			orgn.close();
			tmp.close();
			remove("MusicLib.dat");
			rename("temp.dat","MusicLib.dat") ;

               if (a==0)
                cout<<"\n no such entry exists";
               else
                cout<<"\n\n\t your data has been removed ";

                getch();

            break;
        }

        case '3':
        {
    ClearScreen();

  int a=0;
   char t[30];
   Music s;


		      cout<<"\n\t enter the artist name to delete the entered data \n";
		        gets(t);

		       fstream orgn("MusicLib.dat",ios::in|ios::binary);
		       fstream tmp("temp.dat",ios::app|ios::binary);

			 while(orgn.read((char *)&s,sizeof(s)))
			    {
			      if(strcmpi(s.retartist(),t)==0)
				    {
				       tmp.write((char *)&s,sizeof(s));
				       a++;
                    }
			    }
			orgn.close();
			tmp.close();
			remove("MusicLib.dat");
			rename("temp.dat","MusicLib.dat") ;

               if (a==0)
                cout<<"\n no such entry exists";
               else
                cout<<"\n\n\t your data has been removed ";

                getch();

            break;
        }

    case '4': remove("MusicLib.dat");

    case '5':goto endd;
        default:break;
    }
}
endd:;
}

#endif // DELETE_RECORD_H_INCLUDED
