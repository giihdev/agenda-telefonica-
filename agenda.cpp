#include <iostream>
using namespace std;

class agenda {
    private:
      //atributos da agenda
      string telefone;
      string nome;
    public:
      //getters e setters para mudar o que esta privado
      void setTelefone(string x){
          telefone=x;
      }
      string getTelefone (){
          return telefone;
      }
      void setNome(string y){
          nome=y;
      }
      string getNome (){
          return nome;
      }
      
      //constructor para otimizar o codigo
      agenda(string x, string y){
          telefone= x;
          nome= y;
  }
  
  //metodos da classe
  void Imprimir(){
    cout << "telefone:"<<telefone<<", nome:"<< nome; 
  }
  
};

int main()
{
    //definir um objeto na classe chamado "contato 1" 
    agenda contato1("123456", "Gisele");
    //chamando o metodo 
    contato1.Imprimir();
    return 0;
}
