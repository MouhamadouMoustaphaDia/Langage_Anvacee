/*Concevoir la classe CString permettant de manipuler des chaînes de caractères et pouvant être
utilisée avec le programme suivant. Les allocations et les desallocations de chaînes de caractères
doivent se faire dynamiquement.
int main()
{
 CString s1( "toto" ),
 s2( 'q' ),
 s3 ;

 cout << "nbrChaines" << CString::nbrChaines() << endl ;
 //afficher le nombre de chaines créées
 s3 = s1.plus( ‘w’ ) ;
 cout << "s3=" << s3.getString() << endl ;
 if( s1.plusGrandQue(s2) ) // si s1 > s2 au sens alphabétique
cout << "plus grand" << endl ;
 if( s1.infOuEgale(s2) ) // si s1 <= s2 au sens alphabétique
cout << "plus petit" << endl ;
 s3 = s1.plusGrand( s2 ) ;// retourner s1 si s1>s2, s2 sinon
} */
using namespace std;
#include <iostream>
#include "Cstring.h"

using namespace std;

int main()
{
 CString s1( "toto" ),
 s2( 'q' ),
 s3 ;

 cout << "nbrChaines" << CString::nbrChaines() << endl ;
 //afficher le nombre de chaines créées
 s3 = s1.plus( ‘w’ ) ;
// cout << "s3=" << s3.getString() << endl ;
 if( s1.plusGrandQue(s2) ) // si s1 > s2 au sens alphabétique
cout << "plus grand" << endl ;
 if( s1.infOuEgale(s2) ) // si s1 <= s2 au sens alphabétique
cout << "plus petit" << endl ;
 s3 = s1.plusGrand( s2 ) ;// retourner s1 si s1>s2, s2 sinon
}
