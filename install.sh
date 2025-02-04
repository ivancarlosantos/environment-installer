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

echo "Java Installer"
sleep 3
wget -q https://raw.githubusercontent.com/ivancarlosantos/environment-installer/refs/heads/master/java.c
sleep 3
gcc java.c -o java
sleep 3
./java

echo "Node Installer"
sleep 3
wget -q https://raw.githubusercontent.com/ivancarlosantos/environment-installer/refs/heads/master/node.c
sleep 3
gcc node.c -o node
sleep 3
./node

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