#include <stdio.h>
//Dirección inválida
int *ptr_init, var;

void init_ptr(){
    int local =57;
    ptr_init = &local;
    var = *ptr_init;
    *ptr_int=23;
}

int main() {
    
    init_ptr();
    var = *ptr_int;
    *ptr_int=20;
    

    
    return 0;
}