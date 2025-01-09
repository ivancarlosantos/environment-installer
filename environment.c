#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

printf("\tAtualizando droplet\n\n");
sleep(4);
system("apt update -y && apt upgrade -y");
sleep(3);
printf("droplet atualizado com sucesso\n\n");

sleep(5);

printf("\tInstalando gcc\n\n");
sleep(3);
system("apt-get install gcc");
sleep(3);
system("gcc --version");
sleep(3);
printf("gcc instalado com sucesso\n\n");

sleep(5);

printf("\tSSH Generate Keygen\n");
sleep(3);

printf("Generate SSH Key\n");
sleep(3);
system("ssh-keygen -t ed25519 -C 'joao@ibglbrasil.com.br' ");
sleep(3);

printf("Evaluate Key\n");
sleep(3);
system("eval "$(ssh-agent -s)" ");
sleep(3);

printf("Add Key\n");
sleep(3);
system("ssh-add .ssh/id_25519");
sleep(3);

printf("Copy SSH Key\n");
sleep(3);
system("cat .ssh/ed_25519.pub");
sleep(3);
system("cat .ssh/id_ed25519.pub >> ssh_pub.txt");

sleep(5);

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

sleep(5);

return 0;
}