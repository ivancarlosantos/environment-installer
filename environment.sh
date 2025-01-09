#!/bin/bash

echo "Environment Installer"

gcc ola.c -o ola

sleep 3

./ola

sleep 3

gcc environment.c -o environment

sleep 3

./environment