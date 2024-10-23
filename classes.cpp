#include <iostream>
using namespace std;

class voiture {

    private:

        string marque ;
        string modele ;
        int annee;
        float kilometrage ;
        float vitesse ;
    
    public:

        voiture();
        voiture(string mar , string mo , int an , float kil , float vi);
        void accelerer(float valeur);
        double freiner(float valeur);
        void afficherInfo();
        void avancer(float distance);
        ~voiture();
};

voiture::voiture():marque("dacia"), modele("jogger"), annee(2021), kilometrage(2000.0), vitesse(175.0){}

voiture::voiture(string mar , string mo , int an , float kil , float vi): marque (mar) , modele(mo) , annee(an) , kilometrage(kil) , vitesse(vi) {}

void voiture::accelerer(float valeur){
     vitesse+=valeur;
}

double voiture::freiner(float valeur){
    vitesse-=valeur;
    if (vitesse>0)
        return vitesse;
    else
        return 0;
}

void voiture::afficherInfo(){
    cout<<"...............les informations pour cette voiture sont :................"<<endl;
    cout<<"La marque est : "<<marque<<endl;
    cout<<"Modele est : "<<modele<<endl;
    cout<<"l/'annee de fabrication est : "<<annee<<endl;
    cout<<"Kilometrage de cette voiture est : "<<kilometrage<<endl;
    cout<<"La vitesse est : "<<vitesse<<endl;
}

void voiture::avancer(float distance) {
    kilometrage+=distance;
}        

voiture::~voiture(){
    cout<<"la voiture est detruite"<<endl;
}

int main(){

    voiture v1;
    v1.afficherInfo();

    voiture v2("Toyota", "Corolla", 2020, 15000, 120);
    v2.afficherInfo();

    v2.accelerer(20);  
    v2.afficherInfo();
    
    v2.freiner(50);    
    v2.afficherInfo();

    v2.avancer(100);
    v2.afficherInfo();

    return 0;

}