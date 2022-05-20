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

void menu();
void option_selected(int option);
void print(ptr_node queue);
void push_back(ptr_node queue);
void pop(ptr_node queue);

int main(void) {
  srand(time(NULL));
  option = 1;
  
  queue = (ptr_node) malloc(sizeof(node));
  queue->data = 0;
  queue->next = NULL;

  while(option != 0){
    system("cls");
    menu();
    printf("Choose 1 to insert - 2 to remove and 0 to exit:");
    scanf("%d", &option);
    option_selected(option);
  }

  system("Pause");
  return 0;
}
void push_back(ptr_node queue){
  while(queue->next != NULL){
    queue = queue->next;
  }
  queue->next = (ptr_node) malloc(sizeof(node));
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

void menu(){
  print(queue);
  printf("\n\n1 - Insert\n");
  printf("2 - Remove\n");
  printf("0 - Exit\n\n"); 
}

void print(ptr_node queue){
  while(queue->next != NULL){
    system("cls");

    printf("%d ", queue->data);
    queue = queue->next;
  }
  printf("%d ", queue->data);
}

void option_selected(int option){
  switch(option){
    case 1:
      push_back(queue);
    break;
    case 2:
       pop(queue);
    break;
  }
}