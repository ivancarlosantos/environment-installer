#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

printf("\tNode Install\n");
sleep(3);
system("apt-get install nodejs -y");
sleep(3);

printf("\tnpm Install\n");
system("apt-get install npm -y");
sleep(3);

    return 0;
}
