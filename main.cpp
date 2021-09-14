#include <iostream>
#include "type.h"
#include "stack.h"
#include "queue.h"
#include "linkedlist.h"
#include "operators.h"

using namespace std;
const int nElem = 20;
int main()
{
  //pregunta 6
  TX vect[nElem] = {5,30,40, 7,80, 90, 3,25, 54,47, 
                  3, 6, 12, 8, 25, 27, 19, 83, 9, 0};
 //Insetar elemento en la lista
 
 //pregunta 7
 int mayor=0;
   LinkedList<TX> mylist;
  for(auto x=0; x<nElem; x++)
  {   mylist.insert_at_tail(vect[x]);
      cout << mylist<<endl;
      if(vect[x]>mayor){
        mayor=vect[x];
      }
  }
  cout <<"El numero mayor positivo es: "<<mayor<<endl;

  //Pregunta 8
  int acumulado=0;
  T1 prom=0;
  int cont=0;
  LinkedList<TX> Promedio;
    for(auto x=0; x<nElem; x++){

      acumulado= acumulado + (vect[x]);    
    }
    
    prom=acumulado/nElem;
    cout<<"El promedio es: "<<prom<<endl;

  }

/* Intesar en la cabeza
  for(auto x=10; x< nElem; x++)
  {   mylist.insert_at_head(vect[x]);
      cout << mylist << endl;
  }
*/

