#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

printf("\tOla Droplet\n");
sleep(4);
system("cat /etc/os-release");
sleep(3);

return 0;

}