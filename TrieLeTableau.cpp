#include <iostream>
using namespace std;
int main(){
    int T[10] , i , j , temp ;
    cout<<"Entrez les elements de tableau :";
    for(i=0;i<10;i++){
        cin>>T[i];
    }
    cout<<"Tableau est :"<<endl;
    for(i=0;i<10;i++){
        cout<<T[i]<<" ";
    }
    for(i=0;i<10;i++){
        for(j=0;j<10-i;j++){
            if(T[j]>T[j+1]){
                temp=T[j];
                T[j]=T[j+1];
                T[j+1]=temp;
            }
        }
    }
    cout<<endl;
    cout<<"Et le tableau trie est :"<<endl;
    for(i=0;i<10;i++){
        cout<<T[i]<<" ";
    }
}