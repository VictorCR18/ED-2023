#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa {
    private:
        int idade {0};
        std::string nome;
        float altura {1.2};
    public:
        Pessoa(int i, float a, std::string n) {
            idade = i;
            altura = a;
            nome = n;
        }
        
        int getIdade(){
            return idade;
        }

        void setIdade(int idade){
            this->idade = idade;
        }

        std::string getNome(){
            return nome;
        }

         void setNome(std::string nome){
            this->nome = nome;
        }

        float getAltura(){
            return altura;
        }

         void setAltura(float altura){
            this->altura = altura;
        }

        // Destrutor
        ~Pessoa(){
            std::cout << nome << " morreu\n";
        }
};

#endif