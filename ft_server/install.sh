#!/bin/bash
docker-machine create --driver "virtualbox" "Char"
docker-machine ip Char
eval $(docker-machine env Char)
docker pull hello-world
