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
  
  return pq -> heapArray[0].data;
}

void heap_push(Heap* pq, void* data, int priority){

  if(pq -> size == pq -> capac){
    pq -> capac = (pq -> capac * 2) + 1;
    pq -> heapArray = (heapElem *) realloc(pq -> heapArray, sizeof(heapElem)*pq -> capac);
  }

  pq -> heapArray[pq -> size].data = data;
  pq -> heapArray[pq -> size].priority = priority;

  pq -> size++;

  int i = pq -> size - 1;
  int parent = (i - 1) / 2;

  while(i != 0 && pq -> heapArray[parent].priority < pq -> heapArray[i].priority){
    heapElem temp = pq -> heapArray[i];

    pq -> heapArray[i] = pq -> heapArray[parent];
    pq -> heapArray[parent] = temp;

    i = parent;
    parent = (i - 1) / 2;
  }
}


void heap_pop(Heap* pq){

  if(pq -> size == 0) return;

  pq -> heapArray[0] = pq -> heapArray[pq -> size - 1];
  pq -> size--;

  int i = 0;

  while(1){
    
  }
  
}


Heap* createHeap(){

  Heap* heap = (Heap *) malloc(sizeof(Heap));
  
  heap -> capac = 3;
  heap -> size = 0;
  heap -> heapArray = (heapElem *) malloc(sizeof(heapElem)*heap -> capac);

   return heap;
}
