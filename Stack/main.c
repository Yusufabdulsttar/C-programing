#include "stack.h"

stack_ds my_stack;
uint32_t ret,value;
int main()
{
    ret = init_stack(&my_stack);
    if (ret == R_nok)
        {

        }
        else
        {
            printf("sp %i\n",my_stack.stack_pointer);
        }
    ret = push_stack(&my_stack,55);
        if (ret == R_nok)
        {}
        else
        {
            printf("sp %i ",my_stack.stack_pointer);
            printf("stack pushed %i\n",my_stack.data[my_stack.stack_pointer]);
        }
    ret = push_stack(&my_stack,1);
        if (ret == R_nok)
        {}
        else
        {
            printf("sp %i ",my_stack.stack_pointer);
            printf("stack pushed %i\n",my_stack.data[my_stack.stack_pointer]);
        }
    ret = push_stack(&my_stack,8);
        if (ret == R_nok)
        {}
        else
        {
            printf("sp %i ",my_stack.stack_pointer);
            printf("stack pushed %i\n",my_stack.data[my_stack.stack_pointer]);
        }
    ret = push_stack(&my_stack,9);
        if (ret == R_nok)
        {}
        else
        {
            printf("sp %i ",my_stack.stack_pointer);
            printf("stack pushed %i\n",my_stack.data[my_stack.stack_pointer]);
        }
    ret = push_stack(&my_stack,10);
        if (ret == R_nok)
        {}
        else
        {
            printf("sp %i ",my_stack.stack_pointer);
            printf("stack pushed %i\n",my_stack.data[my_stack.stack_pointer]);
        }
    ret = push_stack(&my_stack,11);
    if (ret == R_nok)
        {}
        else
        {
            printf("sp %i ",my_stack.stack_pointer);
            printf("stack pushed %i\n",my_stack.data[my_stack.stack_pointer]);
        }
    ret = pop_stack(&my_stack,&value);
    if (ret == R_nok)
        {

        }
        else
        {
            printf("sp %i ",my_stack.stack_pointer);
            printf("value poped %i\n",value);
        }
        ret = pop_stack(&my_stack,&value);
    if (ret == R_nok)
        {

        }
        else
        {
            printf("sp %i ",my_stack.stack_pointer);
            printf("value poped %i\n",value);
        }
        ret = pop_stack(&my_stack,&value);
    if (ret == R_nok)
        {

        }
        else
        {
            printf("sp %i ",my_stack.stack_pointer);
            printf("value poped %i\n",value);
        }
        ret = pop_stack(&my_stack,&value);
    if (ret == R_nok)
        {

        }
        else
        {
            printf("sp %i ",my_stack.stack_pointer);
            printf("value poped %i\n",value);
        }
        ret = pop_stack(&my_stack,&value);
    if (ret == R_nok)
        {

        }
        else
        {
            printf("sp %i ",my_stack.stack_pointer);
            printf("value poped %i\n",value);
        }
        ret = pop_stack(&my_stack,&value);
    if (ret == R_nok)
        {

        }
        else
        {
            printf("sp %i ",my_stack.stack_pointer);
            printf("value poped %i\n",value);
        }
    ret = stack_top(&my_stack,&value);
    if (ret == R_nok)
        {
        }
        else
        {
            printf("sp %i ",my_stack.stack_pointer);
            printf("value in stack top %i\n",value);
        }
    return 0;
}
