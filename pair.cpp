#include <iostream>

//Retirado do curso de dados básicas - Neps Academy: https://neps.academy/

int main(){
    //- - - - P A I R - - - -//
    /*A estrutura de dados pair nos permite armazenar dois valores em uma mesma variável, ou seja, 
    nos permite ter um par de valores. No código abaixo podemos ver a declaração de uma variável pair, 
    que contém uma variável do tipo string e uma variável do tipo int
    */
    pair<string, int> P; //Cria uma variável pair
    cin >> P.first >> P.second; //Lê um valor do tipo string e armazena na primeira posição do pair e um valor 
    //do tipo int para a segunda posição.

    pair<int, string> A;
	pair<int, string> B;
    //Pairs permitem a comparação entre si, como no exemplo abaixo:
	A.first = 10;
	A.second = "Joao";

	B.first = 5;
	B.second = "Ana";

	if(A > B){
		cout << A.second << " eh melhor\n";
	}else{
		cout << B.second << " eh melhor\n";
	}
    //É importante notar, que caso houvesse empate pela primeira variável, o desempate aconteceria usando a
    //segunda variável, ou seja, se B.first fosse 10, Ana seria a melhor, pois “Ana” < “Joao” usando o comparador de string.

    //Make Pair
    int a;
	string b;

	for(int i = 1; i < 10; i++){	
		cin>> a >> b; //Leio os valores da entrada e armazeno nas variáveis a e b
		V.push_back(make_pair(a,b)); //Adiciono o pair no vetor utilizando make_pair
	}

    return 0;
}