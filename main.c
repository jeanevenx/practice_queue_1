#include <stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct queue{
  int data;
  struct queue *next;
}node;

typedef node *ptr_node;
ptr_node queue;
int option;

int main(void) {
  srand(time(NULL));
  

  
  return 0;
}
void push_back(ptr_node queue){
  while(queue->next != NULL){
    queue = queue->next;
  }
  queue = (ptr_node) malloc(sizeof(node));
  queue = queue->next;
  queue->data = rand()%20;
  queue->next = NULL;
}

void pop(ptr_node queue){
  ptr_node iterator;
  iterator = (ptr_node) malloc(sizeof(node));
    
  while(queue->next != NULL){
    iterator = queue;
    queue = queue->next;
  }

  iterator->next = NULL;
}

void menu(){}

void print(){
  
}