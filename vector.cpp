#include <iostream>
#include <vector> //Biblioteca para usar o vector

//Retirado do curso de dados básicas - Neps Academy: https://neps.academy/

int main(){
    //- - - - V E C T O R - - - -//
    /*O vector é a implementação do conceito de vetor dinâmico, ou seja, um vetor que não tem um tamanho fixo e 
    seu tamanho pode aumentar ou diminuir segundo a necessidade.*/
    vector<int> V; //Criação do variável vector
	V.push_back(10); //Adiciono o elemento 10 no final do vector V
    V.resize(10); //Muda o tamanho do vector V para 10. Caso o tamanho seja maior que o atual, os elementos adicionais
    //serão elementos nulos (0, no caso dos inteiros).
    V.pop_back(); //Apaga o ultimo elemento do vector V.
    V.clear(); //Remove todos os elementos do vector V.
    //Ordendar um vector usando sort
    sort(V.begin(), V.end()); //Ordena todo o vector V

    return 0;
}