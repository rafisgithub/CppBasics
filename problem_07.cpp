//comment on the following:
//const int* ptr;
#include <stdio.h>
int main()
{
    //Integer variable
    int data = 2;
    //Assign the address of data
    const int *ptr = &data;
    //Compilation error
    *ptr = 3;
    printf("*ptr is %d",*ptr);
    return 0;
}
//We can't change the value pointer by ptr.
