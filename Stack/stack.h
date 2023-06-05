#ifndef _STACK_
#define _STACK_

#include <stdio.h>
#include <stdlib.h>
#include "platfrorm.h"

#define MAX_SIZE 5

typedef struct {
uint32_t data[MAX_SIZE];
sint16_t stack_pointer;
}stack_ds;

typedef enum {
stack_empty = 0,
stack_full,
stack_not_full
}stach_state;

typedef enum {
R_nok,
R_ok
}return_state;


return_state stack_fullf (stack_ds *my_stack);
return_state stack_emptyf (stack_ds *my_stack);
return_state stack_not_fullf (stack_ds *my_stack);
return_state init_stack (stack_ds *my_stack);
return_state push_stack (stack_ds *my_stack,uint32_t value);
return_state pop_stack (stack_ds *my_stack,uint32_t *value);
return_state stack_top (stack_ds *my_stack,uint32_t *value);




#endif // _STACK_
