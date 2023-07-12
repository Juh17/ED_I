#include <iostream>
#include "./lista_ordenada.cpp"

int main(){
   Lista Ju = no(17, no(10, no(94, NULL)));

   insSR(1, &Ju);
   insSR(1, &Ju);
   insSR(3, &Ju);
   exibe(Ju);
   cout<<" "<<endl;
}
