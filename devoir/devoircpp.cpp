#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void testFunction(const vector<T>& parametre) {}

int main() {
    vector<int> parameters;  
    int i;
    const int ParametreDeIcrementation = 10000; 
    int counteur = 0;

    while (true) {
        for ( i = 0; i < ParametreDeIcrementation; ++i) {
            parameters.push_back(counteur + i);
        }
        counteur += ParametreDeIcrementation;
        testFunction(parameters);
        cout << counteur << " parametres effectue."<<endl;
    }
    return 0; 
}