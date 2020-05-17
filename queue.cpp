#include <iostream>
#include <queue> //Biblioteca que permite a utilizalção da fila

int main(){
    /* As principais operações de uma fila são, adicionar alguém ao fim da fila e consultar 
    (ou remover) o elemento que está na frente da fila. */

    //Antes de continuarmos a conhecer a queue vamos ver como seriam essas duas operações em um vector:
    vector<int> V;

	V.push_back(1);
	V.push_back(4);
	V.push_back(6);
	V.push_back(2);

	//Operação 1 - Adicionar um elemento ao final do vetor
	V.push_back(8);

	//Operação 2 - Remover o primeiro elemento do vetor
	for(int i=0;i<(int)V.size()-1;i++){
		V[i] = V[i+1];
	}
	V.pop_back();

    /* Como podemos ver a primeira operação é feito em tempo constante, ou seja, O(1) e a segunda operação é feito em 
    tempo linear (O(n). Mas utilizando uma queue ambas operações são realizadas em tempo constante. */

    /* O código mostra como resolver o seguinte problema: “Imagine uma fila para um caixa de supermercado, o atendente do 
    caixa atende os clientes na ordem que eles aparecem na fila, mas ele atende apenas um cliente por vez. Nossa fila tem
    apenas duas operações, alguém chega na fila (operação 1) ou alguém é atendido pelo caixa (operação 2). Em um 
    determinado momento, o caixa do supermercado deu problema (marcaremos esse momento pela operação 0), e nós queremos 
    saber quem ainda está na fila nesse momento.” */
    queue<int> fila;
	int op;
	int id;

	while(cin >> op){ //Vamos ler cada operação
		if(op == 0){
			break; //Se operação for 0, o caixa do supermercado quebrou.
		}		

		if(op == 1){ //Alguém chega na fila
			cin>>id; //Lemos o id da pessoa que chegou e colocamos na fila.
			fila.push(id);
		}else if(op == 2){ //O caixa vai atender alguém da fila
			if(fila.empty() == false){ //Se a fila não for vazia, ou seja, tiver alguém na fila
				fila.pop(); //O caixa atende a pessoa na frente da fila, e deletamos essa pessoa da fila.
			}

		}
	}

	//Após o caixa quebrar queremos saber as pessoas que ainda estão na fila.
	while(fila.empty() == false){ //Enquanto a fila não for vazia
		int p = fila.front(); //Pego a pessoa na frente da fila e imprimo
		cout<<p<<" ";

		fila.pop(); //Removo a pessoa que está na frente da fila.
	}

    /*
    Assim, aprendemos como adicionar a estrutura queue no nosso programa utilizando #include <queue>, criar uma variável 
    do tipo queue usando queue<tipo_de_dado> nome_da_variavel, como adicionar alguém na fila utilizando o comando push, 
    como olhar se tem alguém na fila através do comando empty, como olhar o primeiro elemento da fila através do comando 
    front e como remover o primeiro elemento da fila usando pop.
    */

    return 0;
}