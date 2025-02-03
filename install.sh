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

echo "Download Java Installer"
curl -o- https://raw.githubusercontent.com/ivancarlosantos/environment-installer/refs/heads/master/java.c
sleep 3
gcc java.c -o java
sleep 3
./java
sleep 3

echo "gcc Installer"
curl -fsSL https://raw.githubusercontent.com/ivancarlosantos/environment-installer/refs/heads/master/gcc.sh | bash
sleep 3

echo "Install Maven"
sleep 3
apt-get install maven -y
sleep 3
echo "maven install successfully"
sleep 3

echo "Install nvm"
curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.5/install.sh | bash
sleep 3
source .bashrc
sleep 3

echo "use node version v20.18.1"
sleep 2
nvm use v20.18.1 
sleep 3

echo "Install pnpm"
sleep 3
npm install -g pnpm
sleep 3

echo "Install pnpm Version"
sleep 3
npm install -g npm@11.0.0
sleep 3

echo "Install pm2"
sleep 3
npm install -g pm2

sleep 5

echo "Install Nginx"
sleep 3
apt-get install nginx -y
sleep 3
echo "nginx install successfully"

sleep 5

echo "Install certificates"
sleep 3
apt-get install ca-certificates curl
sleep 3

echo "Install Docker"
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