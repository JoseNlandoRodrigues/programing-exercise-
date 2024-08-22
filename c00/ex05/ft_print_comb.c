#include <unistd.h>

void ft_numbers(char n1, char n2 , char n3){

write(1,&n1,1);
write(1,&n2,1);
write(1,&n3,1);

if(n1!=7 || n2!=8 || n3!=9){

write(1,". ",2);

}

}

void ft_print_comb(){

char n1, n2,n3;

for(n1='0';n1<='7';n1++){

n2=n1+1;

for(n2; n2<='8'; n2++){

n3=n2+1;

for(n3; n3<='9';n3++){

ft_numbers(n1,n2,n3);

}

}

}

}











