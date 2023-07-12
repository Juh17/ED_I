
/*Juliana Lima e Pedro Felipe */


#include <iostream>
#include <string.h>

using namespace std;

bool LinearSearch(int x, int v[], int n){
    if(x == v[n]){
        return true;
    }
    n--;

    if(n == 0){
        return false;
    }

    return LinearSearch(x, v, n);
}


int main(){
    int v[] =  {10, 4, -3, -5, 0};

    if(linearSearch(4, v, 5)){
        cout << "item encontrado" << endl;
    } else {
        cout << "Item não pertencente ao conjunto" << endl;
    }
}
