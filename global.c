#include <stdio.h>

int global_var = 10; // Global variable declaration and initialization

void modify_global() {
    global_var = 20; // Modifying the global variable
    int a = 100;
    
    printf("%d\n",a);
}

int main() {
    printf("Initial global_var: %d\n", global_var); // Accessing global_var

    modify_global(); // Calling a function that modifies global_var

    printf("Modified global_var: %d\n", global_var); // Accessing the modified global_var
    
    //printf("%d", a);

    return 0;
}