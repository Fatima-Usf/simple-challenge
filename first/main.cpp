#include <iostream>

using namespace std;



int main()
{

    string chaine=" hello oran ";
    cout<< " votre chaine initial est : " << chaine <<endl;
    int taille=chaine.size();
    char c;
    int i;
    for(i=0; i<taille/2;i++){

    c=chaine[i];
    chaine[i]=chaine[taille-i-1];
    chaine[taille-i-1]=c;


    }
chaine[1]=toupper(chaine[1]);

     cout<< " votre chaine est devenu : " << chaine <<endl;
    }


