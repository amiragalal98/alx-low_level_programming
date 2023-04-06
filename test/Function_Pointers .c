#include <stdio.h>
/**
*Pointers to functions, or function pointers, point to executable code for a function in memory. 
*Function pointers can be stored in an array or passed as arguments to other functions.
*A function name points to the start of executable code, just as an array name points to its first element. 
*Therefore, although statements such as funptr = &say_hello and (*funptr)(3) are correct, 
*it isn't necessary to include the address operator & and the indirection operator * in the function assignment and function call.
*Run the code and see how it works!
*/
void say_hello(int num_times); /* function */

int main() {
    void (*funptr)(int);  /* function pointer  return_type (*function_name)(aurgument);*/
    funptr = say_hello; /* pointer assignment  such as funptr = &say_hello */
    funptr(3); /* function call  output   hello\n hello\n hello\n */
    
    return 0;
}

void say_hello(int num_times) {
    int k;
    for (k = 0; k < num_times; k++)
        printf("Hello\n");
}
