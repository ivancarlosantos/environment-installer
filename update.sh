#!/bin/bash

echo "Update and Upgrade Droplet"

gcc update.c -o update

sleep 3

./update

sleep 5

curl ascii.live/rick