#include <iostream>
using namespace std;

int main(){
    int a;
    int &ref_a = a;
    int *p_a=&a; 
    cout<<"Entrez un entier :";
    cin>>a;
    cout<<"a="<<a<<" , ref_a="<<ref_a<<" , adresse de a est :"<<&a<<" , la valeur pointee sur a est :"<<p_a;
}