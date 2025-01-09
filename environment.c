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

printf("\tShow-ME SSH Generate Keygen\n");
sleep(3);
printf("SSH Key\n");
sleep(3);
system("cat .ssh/ed_25519.pub");
sleep(3);
system("cd");
sleep(2);
system("cat .ssh/id_ed25519.pub >> environment-installer/ssh_pub.txt");
sleep(2);
printf("keygen file ssh_pub.txt\n");

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
sleep(3);
printf("maven install successfully\n");

sleep(5);

printf("\tNode Install\n");
sleep(3);
system("apt-get install nodejs npm");

printf("\tInstall nvm\n");
sleep(3);
system("curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v.0.39.1/install.sh | bash");
sleep(3);
system("source .bashrc");

printf("\tInstall Node v20.18.1\n");
sleep(3);
system("nvm install v20.18.1");
sleep(3);

printf("\tUse Node Version\n");
sleep(3);
system("nvm use v20.18.1");
sleep(3);

printf("\tInstall pnpm\n");
sleep(3);
system("npm install -g pnpm");
sleep(3);

printf("\tInstall pm2\n");
sleep(3);
system("npm install -g pm2");
sleep(3);

printf("\tVerify versions installed\n");
sleep(2);

printf("node\n");
sleep(3);

system("node -v");
sleep(3);

printf("nvm\n");
sleep(3);

system("nvm -v");
sleep(3);

printf("pnpm\n");
sleep(3);

system("pnpm --version");
sleep(3);

printf("pm2\n");
sleep(3);
system("pm2 --version");

printf("\tInstall Nginx\n");
sleep(3);
system("apt-get install nginx");

    return 0;
}