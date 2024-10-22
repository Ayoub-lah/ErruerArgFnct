#include <iostream>
#include <ctime>
using namespace std ;

int throwDice(){

return  rand() % 6  + 1;

}

int playerTurn(){

int n ;
int scor=0;

do{
    cout <<"Voulez-vous lancer 1 ou 2 des ?" ;
    cin >> n ;
}while(n!=1 && n!=2);

int x;

    cout<<endl;
    x=throwDice();
    scor =x;

if(n==2){
    int y ;
    y=throwDice();
    cout<<endl ;
    cout << "Resultats de deux lance  : " << x << " et " << y <<endl;
    if(x==y){
        cout<<"Oooooooooooops tu as perdu 5 point ."<<endl ;
        scor = scor-x-y-5 ;
    }else
        scor+=y;
}else
    cout << "Resultat d'un seul lance : " << x <<endl;

return scor;

}

int playerTurn();
int throwDice();

int main() {

cout<<"..................................Jouons..............................."<<endl;
cout<<"Condition de cette jeu si vous gagnez 30 poits donc Tu es le gagnant ."<<endl;
cout<<"........................................................................" <<endl;

cout<<"Si tu veux jouer 2 des , donc il y a des conditions"<<endl;
cout<<"Si vous obtenez le meme numero, vous perdrez 5 points"<<endl;
cout<<endl;

int score1 = 0, score2 = 0;

    while (true) {
        cout << "................................ Joueur 1 ............................."<<endl;
        score1 += playerTurn();
        cout << "Score du Joueur 1: " << score1 << endl;
        if (score1 >= 30) {
            break;
        }

        cout << "................................ Joueur 2 ............................."<<endl;
        score2 += playerTurn();
        cout << "Score du Joueur 2: " << score2 << endl;
        if (score2 >= 30) {
            break ;
        }
    }

     if (score1 >= 30) {
        cout << "Le Joueur 1 gagne avec un score de " << score1 << endl ;
    } else {
        cout << "Le Joueur 2 gagne avec un score de " << score2 << endl;
    }

    return 0;

}