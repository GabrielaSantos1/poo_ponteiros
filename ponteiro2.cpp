#include <iostream>
using namespace std;

int main() {
    
    //cria variavel inteira ponteiro em uma nova alocacao de memoria
    int *ptr = new int;
    //coloca um valor na variavel
    *ptr = 7;
    
    //mostra pro user o valor do ponteiro ptr
    cout<<*ptr<<endl;
    //mostra pro user onde o ponteiro pVar está alocado
    cout<<ptr<<endl;
    
    //deleta a variavel ponteiro ptr
    delete ptr;
    //coloca a ptr como valor nulo/padrão
    ptr = nullptr;
    
    //mostra pro user o valor do ponteiro ptr
    cout<<*ptr<<endl;
    //mostra pro user onde o ponteiro pVar está alocado
    cout<<ptr<<endl;

    return 0;
}