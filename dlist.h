#ifndef LIST_H
#define LIST_H
#include "dnode.h"
#include <stdbool.h>

typedef struct _clist clist;

struct _clist
{
    node *head;
    int num;
};

clist* create_list();
void delete_list(clist *l);

// Funciones para agregar a la lista
bool add_init(clist *l, DATA data);
bool add_end(clist *l, DATA data);
bool add(clist *l, DATA data, int pos);

// Función para eliminar un dato
bool remove_data(clist *l, DATA data);

// Funciones para eliminar por posición
DATA delete_init(clist *l);
DATA delete_end(clist *l);
DATA delete_data(clist*l,int pos);

// Funciones para buscar
int serch_data(clist *l, DATA data);
DATA serch_pos(clist *l, int pos);
node *serch_node(clist *l, DATA data);

//ultimo y penultimo
node *ultimo(clist *l);
node *penultimo(clist *l);
node *anterior(clist *l,int pos);
node *actual(clist *l,int pos);

//funcion para imprimir
void printf_list(clist *l);
bool is_empty(clist *l);
void empty(clist *l);


#endif

