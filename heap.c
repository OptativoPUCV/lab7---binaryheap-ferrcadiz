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


void* heap_top(Heap* pq){

  if(pq -> size == 0) return NULL;
  
  return (void*) pq -> heapArray[0].data;
}

void heap_push(Heap* pq, void* data, int priority){

  if(pq -> size == pq -> capac){
    pq -> capac = (pq -> capac * 2) + 1;
    pq -> heapArray = (heapElem *) realloc(pq -> heapArray, sizeof(heapElem)*pq -> capac);
  }

  pq -> heapArray[pq -> size].data = data;
  pq -> heapArray[pq -> size].priority = priority;

  

  int i = pq -> size - 1;
  
  while(i > 0){
    int parent = (i - 1) / 2;
    if(pq -> heapArray[i].priority < pq -> heapArray[parent].priority){
      heapElem temp = pq -> heapArray[i];

      pq -> heapArray[i] = pq -> heapArray[parent];
      pq -> heapArray[parent] = temp;
      i = parent;
      parent = (i - 1) / 2;
    }
    else{
      break;
    }
  }
  pq -> size++;
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
