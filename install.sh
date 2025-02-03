#!/bin/bash

echo "Environment Installer"
sleep 4
apt update -y && apt upgrade -y curl
sleep 3

echo "Update Successfully"

sleep 5

echo "OS Release"
curl -fsSL https://raw.githubusercontent.com/ivancarlosantos/environment-installer/refs/heads/master/release.sh | bash

sleep 5

echo "gcc Installer"
curl -fsSL https://raw.githubusercontent.com/ivancarlosantos/environment-installer/refs/heads/master/gcc.sh | bash
sleep 3

echo "Maven Install"
sleep 3
apt-get install maven -y
sleep 3
echo "maven install successfully"
sleep 3

echo "nvm Install"
curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.5/install.sh | bash
sleep 3
sh source .bashrc
sleep 3

echo "install node version v20.18.1"
sleep 2
sh nvm install v20.18.1 
sleep 3

echo "use node version v20.18.1"
sleep 2
sh nvm use v20.18.1 
sleep 3

echo "pnpm Install"
sleep 3
npm install -g pnpm
sleep 3

echo "Install pnpm Version"
sleep 3
npm install -g npm@11.0.0
sleep 3

echo "pm2 Install"
sleep 3
npm install -g pm2

sleep 5

echo "nginx Install"
sleep 3
apt-get install nginx -y
sleep 3
echo "nginx install successfully"

sleep 5

echo "Install certificates"
sleep 3
apt-get install ca-certificates curl
sleep 3

echo "Docker Install"
sleep 3
curl -ssL https://get.docker.com | sh
sleep 3

echo "add group Docker"
sleep 3
groupadd docker
sleep 3

echo "add user to group Docker"
sleep 3
usermod -aG docker $USER
sleep 2

echo "Docker Installed successfully"