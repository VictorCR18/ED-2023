#include <iostream>
#include <stdexcept>
#include "Vector.h"

using namespace std;

// Construtor default aloca uma lista com capacidade inicial igual a 16 e size = 0 // O(1)
Vector::Vector(){
    m_list = new int[16];
    m_capacity = 16;
}

// Copy constructor: cria uma nova lista copia
Vector::Vector(const Vector& v){
    m_capacity = v.m_capacity;
    m_size = v.m_size;
    m_list = new int[m_capacity];

    for(int i = 0; i < m_size; i++){
        m_list[i] = v.m_list[i];
    }
}

// Destrutor: libera memoria alocada
Vector::~Vector(){
    delete[] m_list;
}

// Retorna a capacidade atual da lista
int Vector::capacity() const{
    return m_capacity;
} 

// Retorna o numero de elementos na lista
int Vector::size() const{
    return m_size;
}

// Retorna true se e somente se a lista estiver vazia
bool Vector::empty() const{
   return m_list == nullptr;
}

// Retorna uma referencia para o elemento na posicao k.
// Essas funcoes nao verificam se o indice eh valido.
int& Vector::operator[](int index){
    if(index >= 0 && index < size())
        return m_list[index];
    else
        throw runtime_error("erro: indice invalido");
};


int& Vector::at(int k){
    if(k >= 0 && k < size())
        return m_list[k];
    else
        throw out_of_range("erro: indece invalido");
};


void Vector::push_back(const int& value){
    if(m_size < m_capacity){
        m_list[m_size] = value;
        m_size++;
    }
};