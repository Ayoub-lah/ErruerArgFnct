#include <iostream>
using namespace std;

/*****************************************************
 * Compléter le code à partir d'ici
 *****************************************************/
class Patient{
      private :
        double masse ;
        double hauteur ;
      public :
            void init(double m , double h){
               if(m>=0 && h>=0){
                masse = m;
                hauteur = h;
               }
               else {
                masse =0;
                hauteur =0;
               }
        }
            void afficher(){
              cout<<"Patient :"<< masse << "Kg pour " <<hauteur <<"m"<<endl ;
            }
            double imc(){
                 return masse / (hauteur*hauteur);
            }
};
/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

int main()
{
  Patient quidam;
  double poids, taille;
    cout << "Entrez un poids (kg) et une taille (m) : ";
    cin >> poids >> taille;
    quidam.init(poids, taille);
    quidam.afficher();
    cout << "IMC : " << quidam.imc() << endl;
  return 0;
}
