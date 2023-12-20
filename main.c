
//implementing a malloc

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#define HEAP_CAPACITY 6400000

typedef struct{
    void* start;
    size_t size;
}Heap_chunk;




// heap capacity = total capacity of the heap
//heap_size = current heap size
char heap[HEAP_CAPACITY]={0};
Heap_chunk heap_allocated[HEAP_ALLOCATED_CAP]={0};
size_t heap_size=0;


void *heap_alloc(size_t size){
//size = memory to be allocated.
    assert(heap_size + size<= HEAP_CAPACITY);
    void* result= heap + heap_size;
    heap_size+=size;
    return result;

    return NULL;
}

void heap_free(void* ptr){
    assert(false && " todo:heap_free is not implemented");

}



void heap_collect(){
    //a rolling window of 8 bytes -size of pointer - find something that resembles a pointer to the memory and if it points to something in the heap
    //we are effectively implementing our own garbage collector.
    //scan the stack as well
    assert(false && "TODO : heap_collect is not implemented");     

}

int main(int argc, char * argv[]){
    char* root = heap_alloc(26);
    for(int i=0; i<26;++i){
        root[i]= i+'A';
    }
    heap_free(root);
    return 0;


}