#ifndef CLASS_MUSIC_H_INCLUDED
#define CLASS_MUSIC_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

class Music
 {


  int id;
  char name[30],artist[30],junk[30];

public:

    void  getdata()
      {
        cout<<"\nplease enter the ID: \n";
        cin>>id;

        cin.getline(junk,30);

        cout<<"\nplease enter the Name: \n";
        cin.getline(name,30);


        cout<<"\nplease enter the Artist's name: \n";
        cin.getline(artist,30);
       }

    void  putdata()
      {
      cout<<"\n\n\n\nID: "<<id<<" \nName: "<<name<<" \nArtist: "<<artist<<endl;
      }


    int retid()
      {
        return(id);

      }

    char *retname()
      {
        return(name);

      }

    char *retartist()
      {
        return(artist);

      }


};



#endif // CLASS_MUSIC_H_INCLUDED
