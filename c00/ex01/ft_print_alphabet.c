#include <unistd.h>

void ft_print_alphabet(void){

char letter;

for(letter='A';letter<='Z';letter++){

write(1,&letter,1);
}

}

