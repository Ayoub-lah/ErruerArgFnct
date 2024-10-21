#include <iostream>
using namespace std;
#include <cmath> 

int main(){

double A,B,C,D ;

cout<<"Entrez les qautres varaibles A,B,C et D "<< endl ;
cin>>A>>B>>C>>D ;

if(B>=C && D>=A ){

    cout<<"Intersection est existe ."<<endl ;
    cout<<"Donc intersection de deux itervalle est : [ " << max(A,B) <<"," << min(B,D) << "]" <<endl;

}
else 
    cout<<"Intersection n\'est existe pas "<<endl ;
    


}