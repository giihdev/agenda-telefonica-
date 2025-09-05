
#include <iostream>
#include <string>
using namespace std;
class pessoa{
    private:
    string nome;
    int telefone;
    string tiposang;
    int idade;
    
    public:
    void set_nome(string n){
        nome=n;
    }
    string get_nome(){
        return nome;
    }
    void set_telefone(int t){
        telefone=t;
    }
    int get_telefone(){
        return telefone;
    }
    void set_tiposang(string ts){
        tiposang=ts;
    }
    string get_tiposang(){
        return tiposang;
    }
    void set_idade(int i){
        idade=i;
    }
    int get_idade(){
        return idade;
    }
    
    //construtor
    // pessoa(string n, int t, string ts, int i){
    //     nome=n;
    //     telefone= t;
    //     tiposang= ts;
    //     idade = i;
    // }
    
    void Cadastrar(){
        cout << "Nome:"<< "\n";
        cin>> nome;
        cout << "telefone:"<< "\n";
        cin>> telefone;
        cout << "tipo sanguineo:"<< "\n";
        cin>> tiposang;
        cout << "idade:"<< "\n";
        cin>> idade;
    }
    void Imprimir(){
        cout<< "nome:"<< nome << ", telefone: "<< telefone<< ", tipo sanguineo: "<< tiposang << ", idade: "<< idade;
    }
    
    void VerificarSangue(){
        if (tiposang== "O"){
            
        }
    }
};
int main()
{
    pessoa cliente1;
    
    cliente1.Cadastrar();
    cliente1.Imprimir();
    return 0;
}
