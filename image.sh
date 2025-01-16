#!/bin/bash

echo "Update/Refresh backend container"

gcc image.c -o image

sleep 3

./image
