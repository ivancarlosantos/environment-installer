#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

        printf("atualizando droplet\n\n");
        sleep(4);
        system("apt update -y && apt upgrade -y");
        sleep(3);
        printf("droplet atualizado com sucesso\n\n");
        return 0;
}

