#include <iostream>
#include <string>
using namespace std;
struct funcionario;
int registro;
string nome;
double salario;
(;
void ler_funcionario(Funcionario*);
void imprimir_funcionario(Funcionario);
int main (){
funcionario f;
ler_funcionario(%f)}
imprimir_funcionario(f);
)
void ler_funcionario(Funcionario* f){
cout << "Registros: ";
cin >> f->registro;
cin.ignore();
cout << "Nome: ";
getline (cin, f->nome);
cout << "Salario: ";
cin >> f-> salario;






}
