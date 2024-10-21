#include <iostream>
using namespace std;

//Avec la biboithique <cmath>

/*#include <cmath> 

long long fact(int n ){

    if(n==0)
        return 1 ;
    else 
        return n* fact(n-1) ;

}

double sinx(double x, double precision) {

double somme = 0.0;
double terme;
int n = 0;

    do {
        terme = pow(-1, n) * pow(x, 2*n + 1) / fact (2*n + 1);
        somme += terme;
        n++;
    } while (fabs(terme) >= precision); 

return somme;
}


int main(){

double x, precision = 0.0001;
 
cout<<"Entrez le nombre n :" ;
cin>> x ;

double resultat = sinx(x, precision);
cout << "Le sin(" << x << ") est approximativement " << resultat << endl;
return 0 ;

}*/

//Sans la biboithique <cmath>

long long fact(int n ){

    if(n==0)
        return 1 ;
    else 
        return n* fact(n-1) ;

}

double pow(double x , int y ){

    double res = 1 ;
    long poui = y ;

    for(int i = 0 ; i < poui ; i++){

        res *= x ;

    }

    return res ;

}

double sinx(double x, double precision) {

double somme = 0.0;
double terme;
int n = 0;

    do {
        terme = pow(-1, n) * pow(x, 2*n + 1) / fact (2*n + 1);
        somme += terme;
        n++;
    } while (terme >= precision); 

return somme;

}

int main(){

double x, precision = 0.0001;
 
cout<<"Entrez le nombre n :" ;
cin>> x ;

double resultat = sinx(x, precision);
cout << "Le sin(" << x << ") est approximativement " << resultat << endl;

return 0 ;

}