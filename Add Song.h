#ifndef ADD_SONG_H_INCLUDED
#define ADD_SONG_H_INCLUDED


void addsong()
  {
      system("COLOR 57");

     Music s;
      cout<<endl<<endl;
     cout<<"\n\n\n\n\n\n\t\t\t\t\t\t     ADDING MENU\n\n \n\t\t\t\t\t\t1.Add a new song\n\t\t\t\t\t\t2.Rewrite all Songs\n\t\t\t\t\t\t3.To go to MAIN MENU \n\n\t\t\t\t\t\tenter your choice ";
     char ck=getch();

    ClearScreen();

if(ck!='3')
{


     if(ck=='2')//delete or clear file
        remove("MusicLib.dat");

	 fstream fin("MusicLib.dat",ios::app | ios::binary);

        char fn='n';

   while( fn!=27)
   {
    fn='n';

     s.getdata();
     fin.write( (char *)&s,sizeof(s) );

     cout<<"\npress esc to stop entering files n to continue \n";
     fn=getch();
   }

   fin.close();

}
 }


#endif // ADD_RECORD_H_INCLUDED
