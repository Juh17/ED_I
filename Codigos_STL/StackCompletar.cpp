#include <stack>
#include <iostream>
using namespace std;

template <class T>
class Stack: public stack<T> {
	protected:
		stack<T> pilha;
	public:
	T popStack(){
		T tmp=pilha.top();
		pilha.pop();
		return tmp;
	}


	void popTodos(){
		while(!pilha.empty()){
		   cout<< pilha.top() <<endl;
		   pilha.pop();
		}
    }

	void simulaFila(T novo){
		Stack<T> aux;

		if(pilha.empty){
		    pilha.push(novo);
		}else{
		    while(!pilha.empty()){
		        aux.push(pilha.top());
		        pilha.pop;
		    }

		    pilha.push(novo);
		    while(!aux.empty()){
		        pilha.push(aux.top());
		        aux.pop();
		    }
		}
	}


};

main(){
	Stack<int> fila;
	fila.push(4);
	fila.push(5);
	cout<<fila.top()<<endl;

}
