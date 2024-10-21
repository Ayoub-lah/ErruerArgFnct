#include <iostream>
using namespace std;

int MultipleDeDeux(int a){
return a%2 ;
}

int MultipleDeTrois(int b){
return  b%3;
}

int main(){

int a,x,y;

cout<<"Donnez un entier :";
cin>>a;

x=MultipleDeDeux(a);

if(x==0)
cout<<"Il est multiple de 2 ."<<endl;

y=MultipleDeTrois(a);

if(a%2==0)
cout<<"Il est pair"<<endl;
if(y==0)
cout<<"Il est multiple de 3 ."<<endl;
if(a%6==0)
cout<<"Il est divisible par 6"<<endl;

}