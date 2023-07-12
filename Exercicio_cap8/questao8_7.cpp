
/*Juliana Lima e Pedro Felipe */

#include <iostream>

using namespace std;

bool BinarySearch(int item, int v[], int p, int u)
{
    int pm = (u + p) / 2;

    if (item == v[pm]){
        return true;
    }

    if (item < v[pm]){
        p = pm - 1;
    }else{
        u = pm + 1;
    }

    if (p < u){
        return false;
    }

    return BinarySearch(item, v, p, u);
}

int main()
{
    int v[] =  {10, 7, 3, 5, 12};
    int t = sizeof(v) / sizeof(v[0]);


    if (BinarySearch(6, v, t, 0)){
        cout << "Pertence ao conjunto de números" << endl;
    }else{
        cout << "Não pertence ao conjunto de números" << endl;
    }

    if (BinarySearch(12, v, t, 0)){
        cout << "Pertence ao conjunto de números" << endl;
    }else{
        cout << "Não pertence ao conjunto de números" << endl;
    }

}
