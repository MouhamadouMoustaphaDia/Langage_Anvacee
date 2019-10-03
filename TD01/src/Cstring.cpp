#include "Cstring.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

class Cstring()
{

    private:
    char *chaine;
    int taille;
    static int nbChaine;

    public:
        static void int ();

        const char * getString() const {return chaine;}

    Cstring()//chaine vide
    {
        chaine[0]='\0';
        nbChaine++;
    }

    Cstring(char c) //constructeur à partir d'un char
    {
        chaine = new char [2];
        chaine[0]=c;
        nbChaine++;
    }

    Cstring(const char *s)// constructeur à partir d'une chaine
    {
        chaine = new char [taille = strlen(s)+1];
        strcpy(chaine, s);
        nbChaine++;
    }
    Cstring() //destruction
    {
        delete []chaine;
    }

    static int nbChaines()
    {
        return Cstring::nbChaines;

    }

    void afficher()
    {
        cout << "chaine=" <<getString()<<"\n"
    }

    Cstring plus(const Cstring& s)
    {
        char temp[20];
        strcpy(temp,chaine);
        strcat(temp,s.chaine);
        Cstring tempS(temp);
        return tempS;
    }

   Cstring Cstring::plus(const char c)
   {
       char temp[20];
       strcpy(temp,chaine);
       int len = strlen(temp);
       temp[len + 1] ='\0';
       Cstring tempS(temp);
       return tempS;
   }

   bool Cstring::plusGrandQue(const Cstring& s1)
   {
       if(strcmp(chaine,s1.getChaine())>0) return 1
        else
            return 0;
   }

   bool Cstring::infOuEgale(const Cstring& s1)
   {
       if(Cstring::plusGrandQue(s1)) return 0
        else
            return 1;
   }

    Cstring Cstring::plusGrand(const Cstring& s1)
   {
       if(Cstring::plusGrandQue(s1)) return *this;
        else
            return s1;
   }

}

