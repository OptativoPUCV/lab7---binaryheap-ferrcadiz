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

//Implemente la función `void* heap_top(Heap* pq)`. Esta función retorna el dato con mayor prioridad del montículo. 
//    > Recuerde que este dato se encuentra en la raíz el montículo, es decir, en la primera casilla del arreglo.
void* heap_top(Heap* pq){

  if(pq -> size == 0) return NULL;
  
  return pq -> heapArray[0];
}



void heap_push(Heap* pq, void* data, int priority){

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
