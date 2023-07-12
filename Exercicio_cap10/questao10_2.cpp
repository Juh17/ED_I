#include "./lista_ordenada.cpp"
#include <iostream>

using namespace std;

int main(){
    string option = "y";
    int n;
    Lista j = NULL;

    while(option == "y"){
        cout << "Insira um numero qualquer: ";
        cin >> n;

        ins(n, &j);

        cout << "Deseja continuar? y/n ";
        cin >> option;
    }
    exibe_inv(j);
    cout<<" "<<endl;
}

