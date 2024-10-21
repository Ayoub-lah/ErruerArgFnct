#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int *p = new (nothrow) int [10] ;
    int i ;

    if (p==NULL)
       cerr<<"Allocation impossible"<<endl;
    else{
       cout<<"Entrez les elements de tableau :";
       for(i=0;i<10;i++){
          cin>>p[i];
       }
    }

    for(i=0;i<10;i++){
        cout<<p[i]<<"  ";
    }

    cout<<endl;

    int *q = new (nothrow) int [10];

    for(i=0;i<10;i++){
        q[i]=pow(p[i],2);
    }

    delete []p ;

    for(i=0;i<10;i++){
        cout<<q[i]<<"  ";
    }

    delete []q;
    
}