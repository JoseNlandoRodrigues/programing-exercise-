#include <unistd.h>

void ft_print_numbers(void){

int number;
int number1;
for (number='0',number1='9'; number<=number1;number++){

write(1,&number,1);

}

}

