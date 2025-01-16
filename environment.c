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

printf("\tInstall pnpm\n");
sleep(3);
system("npm install -g pnpm");
sleep(3);

printf("\tInstall pnpm Version\n");
sleep(3);
system("npm install -g npm@11.0.0");
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

system("nvm --version");
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

printf("\tInstall Docker\n");
sleep(3);

printf("update and upgrade droplet\n");
sleep(3);
system("apt-get update -y && apt-get upgrade -y");
sleep(3);

printf("install certificates\n");
sleep(3);
system("apt-get install ca-certificates curl");
sleep(3);

printf("install docker\n");
sleep(3);
system("curl -ssL https://get.docker.com | sh");
sleep(3);

printf("add group docker\n");
sleep(3);
system("groupadd docker");
sleep(3);

printf("add user to group docker\n");
sleep(3);
system("usermod -aG docker $USER");

printf("\tDocker installed successfully\n");

    return 0;
}