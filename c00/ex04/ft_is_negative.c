#include <unistd.h>


void ft_is_negative(int n){

char resp ;

if(n>=0){
resp ='P';

write(1,&resp,1);

}else{

resp ='N';

write(1,&resp,1);
}


}


