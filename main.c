#include <stdio.h>
#include <stdlib.h>
#include "dlist.h"
int main(){
    clist *l;
    l=create_list();
    add_init(l,5);
    printf_list(l);
    add_init(l,5);
    printf_list(l);
     printf("hello word");
    delete_list(l);
    return 0;
}



