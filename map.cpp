#include <iostream>
#include <map> //Biblioteca do map

/* 
Map é uma variação da estrutura set e sua implementação também é feita utilizando Red-Black Trees. 
A principal diferença entre um set e um map é o segundo armazena os conjuntos chave, valor e o primeiro apenas chave.

Em um map cada elemento está diretamente ligado a um valor, ou seja, cada elemento armazenado no map possui um valor correspondente. Se tivermos um map de strings em inteiros e inserimos os pair (“Joao”, 1), (“Alana”, 10), (“Rodrigo”, 9) nosso map armazenará:
“Alana” => 10
“Joao” => 1 
“Rodrigo” => 9
Caso façamos uma busca pela chave “Alana” receberemos o número 10 como retorno.
*/

int main(){ 
    map<string, int> M; //Cria uma variável do tipo map que mapeia strings em int

    /* Insere um elemento na estrutura com complexidade O(logn). Para inserir um elemento no map 
    podemos utilizar qualquer uma das duas formas a seguir: */
    M.insert(make_pair("Alana", 10)); //Inserimos uma variável do tipo pair diretamente no map
    M["Alana"] = 10; //Relacionando o valor 10 à chave "Alana"

    /* Para realizar uma busca no map utilizamos o comando find, o find retorna um ponteiro que aponta para o 
    elemento procurado caso o elemento esteja no map ou para o final do map, caso o elemento procurado não esteja 
    no map. Podemos também acessar o valor armazenado por um chave utilizando o operador []. Complexidade: O(logn).
    */
    if(M.find("Alana") != M.end()){ //Se a chave "Alana" foi inserida no map
      cout<<"Sim"<<"\n";
    }else{
      cout<<"Nao"<<"\n";
    }
    cout<<M["Alana"]<<"\n"; //Imprime o valor correspondente a chave "Alana", no cas, o valor 10.

    //A maneira mais rápida de deletar um elemento do map é utilizando o comando erase. Complexidade: O(logn)
    M.erase("Alana"); //Apaga o elemento que possui a chave "Alana" do map

    /*
    Outros métodos que também devemos conhecer são os:
    clear: Apaga todos os elementos.
    size: Retorna a quantidade de elementos.
    begin: Retorna um ponteiro para o inicio do map
    end: Retorna um ponteiro para o final do map
    */

    /*
    Por fim, algumas vezes queremos passar por todos os elementos presentes no map e podemos fazer isso 
    utilizando o código abaixo. É importante saber que quando passarmos pelos elementos, iremos acessar 
    eles de forma ordenada pela chave. Logo, no exemplo abaixo o código imprime (Alana, 10) (Joao, 1) (Rodrigo, 9).
    */
    for (map<string,int>::iterator it=M.begin(); it!=M.end(); ++it){
      cout<< "("<< it->first<< ", "<< it->second<< ") ";
    }
    return 0;
}
