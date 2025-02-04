#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

printf("\tJava Installer\n\n");
sleep(3);
system("add-apt-repository ppa:linuxuprising/java -y");
sleep(3);

printf("update and upgrade droplet\n");
system("apt update -y && apt upgrade -y");
sleep(3);

printf("\tBind Java Installer version v17\n\n");
sleep(3);
system("apt-get install oracle-java17-installer oracle-java17-set-default");

sleep(5);

printf("\tInstall Maven\n\n");
sleep(3);
system("apt-get install maven");
sleep(3);
printf("maven install successfully\n");

    return 0;
}