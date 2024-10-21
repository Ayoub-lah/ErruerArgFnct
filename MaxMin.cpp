#include <iostream>
using namespace std;

/*1er facons 

int main(){

int T[10] , i , j , max , min;

cout<<"Entrez les elements de tableu :";

for(i=0;i<10;i++){
    cin>>T[i];
}

max=T[0];
min=T[0];

for(i=0;i<10;i++){
    if(T[i+1]>max)
        max=T[i+1];
}
for(j=0;j<10;j++){
    if(T[j+1]<min)
        min=T[j+1];
}

cout<<"Max est :"<<max<<endl;
cout<<"Min est :"<<min<<endl;

}*/

//2eme facons

/*int main(){

int T[10] , i , j , min , max , a=0;

cout<<"Entrez les elements de tableau :";
for(i=0;i<10;i++){
cin>>T[i];
}

cout<<endl;

for(i=0;i<10;i++){
    for(j=0;j<10;j++){
        if(T[j]>T[j+1]){
            a=T[j+1];
            T[j+1]=T[j];
            T[j]=a;
    }
    }
}

for(i=0;i<10;i++){
    cout<<T[i]<<" ";
}

cout<<endl;

max=T[9];
min=T[0];

cout<<"Max est :"<<max<<endl;
cout<<"min est :"<<min;

}*/

//1er facons :

void Echange(int *a , int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

int main(){

int T[10]  , max , min  ;
int *ptr , *ptr1 ;

cout<<"Entrez les elements de tableau :";
for(ptr=T;ptr<10+T;ptr++){
    cin>>*ptr;
}

cout<<endl;

for(ptr=T;ptr<10+T-1;ptr++){
    for(ptr1=T;ptr1<10+T-(ptr-T);ptr1++){
        if(*ptr1>*(ptr1+1)){
            Echange(ptr1,ptr1+1);
        }
    }
}

for(ptr=T;ptr<10+T;ptr++){
    cout<<*ptr<<" ";
}

cout<<endl;

max=*(T+9);
min=*T;

cout<<"max est :"<<max<<endl;
cout<<"min est :"<<min;

}

//2eme facons 

/*int main(){

    int T[10] , a , max , min ;
    int *ptr;
    
    cout<<"Entrez les elements de tableau :";
    for(ptr=T;ptr<10+T;ptr++){
        cin>>*ptr;
    }
    
    max=*T;
    min=*T;

    for(ptr=T;ptr<10+T;ptr++){
        if(*ptr>max)
            max=*ptr;
        if(*ptr<min)
            min=*ptr;
    }

    cout<<"Max est :"<<max<<endl;
    cout<<"Min est :"<<min;
}*/