#include <iostream>
#include <set> //Biblioteca que permite a utilizalção da fila


/* Set é a implementação do C++ para as Red-Black Trees. Esse tipo de árvore expande o conceito de uma 
árvore de busca binária e nos permite usar operações de busca, inserção e deleção em complexidade O(logn). */
int main(){
    set<int> S; //Cria uma variável do tipo set para armazenar números inteiros


    /*Insere um elemento na estrutura, de forma similar a adicionar o elemento a um vector (vetor dinâmico), 
    porém para manter a organização na árvore, a complexidade é O(logn), diferente do vector que possui uma 
    inserção mais rápida O(1). É importante notar que a estrutura set não adiciona elementos repetidos.*/
    S.insert(10); //Adiciona o elemento 10 no set
    S.insert(3); //Adiciona o elemento 3 no set

    /*Para realizar uma busca no set utilizamos o comando find, o find retorna um ponteiro que aponta para o elemento
    procurado caso o elemento esteja no set ou para o final do set, caso o elemento procurado não esteja no set. 
    Complexidade: O(logn)O(logn). */
    if(S.find(3) != S.end()){ //Se 3 está no conjunto
      cout<<3<<"\n";
    }


    /*A maneira mais rápida de deletar um elemento do set é utilizando o comando erase. Complexidade: O(logn).*/
    S.erase(10);

    /*
    Outros métodos que também devemos conhecer são os:
    clear: Apaga todos os elementos.
    size: Retorna a quantidade de elementos.
    begin: Retorna um ponteiro para o inicio do set
    end: Retorna um ponteiro para o final do set
    */
    


    return 0;
}