#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

printf("\tConectando ao Registry Container Digitalocean\n");
sleep(4);

printf("Listando Containers\n");
sleep(3);
system("docker ps");
sleep(3);

printf("\tParar Container Backend\n");
sleep(3);
system("docker container stop api-powerkr");
sleep(3);

printf("Removendo container");
sleep(3);
system("docker rm api-powerkr");
sleep(3);

printf("Listando Imagens\n");
sleep(3);
system("docker images");
sleep(3);

printf("Removendo Imagem Backend\n");
sleep(3);
system("docker rmi registry.digitalocean.com/api-powerkr-image/api-powerkr");
sleep(5);

printf("Executando Docker Backend\n");
sleep(3);
system(" ");
sleep(5);

printf("Processo Realizado com Sucesso !!!");
return 0;

}