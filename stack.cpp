#include <iomanip>
#include <stack> //Adiciono a biblioteca para usar a stack


int main(){
    stack<int> pilha; //Crio uma nova variável stack que armazenará inteiros

    /*
    No exemplo abaixo, o código usa uma pilha processaremos as seguites operações:

    1 X: adicionar o elemento X no topo da pilha.
    2: remover o elemento no topo da pilha, caso tenha algum elemento.
    3: imprimir o elemento no topo da pilha, caso a pilha esteja vazia, imprimir “-1”.
    0: finalizar o programa.
    */

   	int op;
	int x;

    while(cin>>op){
		if(op == 0){ //Operação de finalizar o programa
			break; //Encerra o while
		}

		if(op == 1){ //Adicionar elemento na pilha
			cin>>x;
			pilha.push(x); //Adiciona o elemento x no topo da pilha
		}else if(op == 2){
			if(!pilha.empty()){ //Se a pilha não estiver vazia
				pilha.pop(); //Remove elemento do topo da pilha
			}
		}else if(op == 3){
			if(pilha.empty()){
				cout<<"-1\n";
			}else{
				cout<<pilha.top()<<"\n";
			}
		}
	}

    return 0;
}