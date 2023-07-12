#include <queue>
#include <iostream>
using namespace std;

template <class T>
class Queue: public queue<T> {
	protected:
		queue<T> fila;
	public:
	T popQueue(){
		T tmp=fila.front();
		fila.pop();
		return tmp;
	}
	void popTodos(){
	    while(!fila.empty()){
	        cout<<fila.front() <<endl;
	        fila.pop;
	    }
	}

    void simulaPilha(T novo){
        Queue<T> aux;
        if(fila.empty()){
           fila.push(novo);
        }else{
           while(!fila.empty()){
              aux.push(fila.front());
              fila.pop();
           }

           fila.push(novo);
           while(!aux.empty()){
              fila.push(aux.front());
              aux.pop();
           }
        }
    }
};

main(){
	Queue<int> fila;
	fila.push(4);
	fila.push(5);
	cout<<fila.front()<<endl;


}
