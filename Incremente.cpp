#include <iostream>
using namespace std;
int incrementer(int *a ){
    return (*a)++;
}
void permuter(int *a , int *b ){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    cout <<"Entrez les deux varailbles :";
    cin>>a>>b;
    int x=incrementer(&a);
    cout<<x<<endl;
    permuter(&a,&b);
    cout<<"les nouvelles valeurs sont : a="<<a<<" et b="<<b;
}

/*#include <iostream>
using namespace std;
int incrementer(int &a ){
    return a++;
}
void permuter(int &a , int &b ){
    int temp ;
    temp = a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cout <<"Entrez les deux varailbles :";
    cin>>a>>b;
    int x=incrementer(a);
    cout<<x<<endl;
    permuter(a,b);
    cout<<"les nouvelles valeurs sont : a="<<a<<" et b="<<b;
}
*/