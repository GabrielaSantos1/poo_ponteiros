#include <iostream>
using namespace std;

int main() {
    //cria variavel inteira com valor 3
    int Var = 3;
    //cria variavel inteira ponteiro
    int* pVar;
    //coloca o valor do ponteiro como o valor da variavel Var
    pVar = &Var;
    
    //mostra pro user o valor da variavel Var
    cout<<Var<<endl;
    //mostra pro user o valor do ponteiro pVar
    cout<<*pVar<<endl;
    //mostra pro user onde o ponteiro pVar está alocado
    cout<<pVar<<endl;

    return 0;
}