#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;
 
//    > Recuerde que este dato se encuentra en la raíz el montículo, es decir, en la primera casilla del arreglo.
void* heap_top(Heap* pq){

  if(pq -> size == 0) return NULL;
  
  return pq -> heapArray[0];
}

//Implemente la función `void heap_push(Heap* pq, void* data, int p)`. Esta función inserta un nuevo dato con prioridad `p` en el montículo. Si no recuerda como insertar datos en el montículo puede ver las 
//> Si el arreglo está lleno aumente la capacidad al **doble + 1** usando la función `realloc` así:> `arreglo = realloc(arreglo, nueva_capacidad)`

void heap_push(Heap* pq, void* data, int priority){

  if(pq -> size == pq -> capac){
    pq -> capac = (pq -> capac * 2)
  }
  
}


void heap_pop(Heap* pq){

}


Heap* createHeap(){

  Heap* heap = (Heap *) malloc(sizeof(Heap));
  
  heap -> capac = 3;
  heap -> size = 0;
  heap -> heapArray = (heapElem *) malloc(sizeof(heapElem)*heap -> capac);

   return heap;
}
