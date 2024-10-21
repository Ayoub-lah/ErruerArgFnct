#include <iostream>
using namespace std;

//Avec biboithique  <cmath>

/*#include <cmath> 

int main(){

double A,B,C,D ;

cout<<"Entrez les qautres varaibles A,B,C et D : "<< endl ;
cin>>A>>B>>C>>D ;

if(B>=C && D>=A ){
    cout<<"Intersection est existe ."<<endl ;
    cout<<"Donc intersection de deux itervalle est : [ " << max(A,C) <<"," << min(B,D) << "]" <<endl;
}
else 
    cout<<"Intersection n\'est existe pas "<<endl ;
    
}*/

//Sans biboithique <cmath>

double max(double A , double C ){
    if(A>C)
       return A ;
    else
       return C ;
}

double min(double B , double D ){
    if(B<D)
        return B ;
    else
        return D ;
}

int main(){

double A,B,C,D ;

cout<<"Entrez les qautres varaibles A,B,C et D : "<< endl ;
cin>>A>>B>>C>>D ;

if(B>=C && D>=A ){
    cout<<"Intersection est existe ."<<endl ;
    cout<<"Donc intersection de deux itervalle est : [ " << max(A,C) <<"," << min(B,D) << "]" <<endl;
}
else 
    cout<<"Intersection n\'est existe pas "<<endl ;

}