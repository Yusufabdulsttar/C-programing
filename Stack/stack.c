#include "stack.h"

return_state stack_fullf (stack_ds *my_stack){
    return_state ret = R_nok;
    if (NULL == my_stack)
    {
        ret = R_nok;
    }
    else if (my_stack->stack_pointer == (MAX_SIZE - 1))
    {
        ret = stack_full;
               printf("stack full \n");
    }
    else
    {
        ret = stack_not_full;
    }
    return ret;
}

return_state stack_emptyf (stack_ds *my_stack){
    return_state ret = R_nok;
    if (NULL == my_stack)
    {
        ret = R_nok;
    }
    else if (my_stack->stack_pointer == -1 )
    {
        ret = stack_empty;
        printf("stack empty \n");
    }
    else
    {
        ret = stack_not_full;
    }
    return ret;
}



return_state init_stack (stack_ds *my_stack){
    return_state ret = R_nok;
    if (NULL == my_stack)
    {
        ret = R_nok;
    }
    else
    {
        my_stack->stack_pointer = -1;
        ret = R_ok;
    }
    return ret;
}

return_state push_stack (stack_ds *my_stack,uint32_t value){
    return_state ret = R_nok;
    if ((NULL == my_stack) || (stack_full == stack_fullf(my_stack)))
    {
        ret = R_nok;
    }
    else
    {
        my_stack->stack_pointer++;
        my_stack->data[my_stack->stack_pointer] = value;
        ret = R_ok;
    }
    return ret;
}

return_state pop_stack (stack_ds *my_stack,uint32_t *value){
    return_state ret = R_nok;
    if ((NULL == my_stack) || (NULL == value)|| (stack_empty == stack_emptyf(my_stack)))
    {
        ret = R_nok;
    }
    else
    {
        *value = my_stack->data[my_stack->stack_pointer];
        my_stack->data[my_stack->stack_pointer] = 0;
        my_stack->stack_pointer--;
        ret = R_ok;
    }
    return ret;
}

return_state stack_top (stack_ds *my_stack,uint32_t *value){
    return_state ret = R_nok;
    if (NULL == my_stack)
    {
        ret = R_nok;
    }
    else
    {
        *value = my_stack->data[my_stack->stack_pointer];
        ret = R_ok;
    }
    return ret;
}

