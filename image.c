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
system("docker run --name api-powerkr -d -p 8080:8080 -e DB_PASSWORD='AVNS_gM655zZN56DAqKTfwUY' -e DB_URL='jdbc:postgresql://powerkr-server-database-nyc3-do-user-7409541-0.c.db.ondigitalocean.com:25060/powerkr' -e DB_USER='doadmin' -e GPT_API_KEY='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' -e TOKEN_SECRET='DASAM3NDA1DMI2dsad2d23!@#!1das' docker run --name api-powerkr -d -p 8080:8080 -e DB_PASSWORD='AVNS_gM655zZN56DAqKTfwUY' -e DB_URL='jdbc:postgresql://powerkr-server-database-nyc3-do-user-7409541-0.c.db.ondigitalocean.com:25060/powerkr' -e DB_USER='doadmin' -e GPT_API_KEY='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' -e TOKEN_SECRET='DASAM3NDA1DMI2dsad2d23!@#!1das' registry.digitalocean.com/api-powerkr-image/api-powerkr");
sleep(5);

printf("Processo Realizado com Sucesso !!!");
return 0;

}