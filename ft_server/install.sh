#!/bin/bash
docker-machine create --driver "virtualbox" "Char"
docker-machine ip Char
eval $(docker-machine env Char)
docker pull hello-world
docker run hello-world
docker run -d -p 5000:80 --name overlord --restart=always nginx
docker ps
#docker inspect <container ID>
#docker run -it --rm alpine /bin/sh
docker run -ti --rm debian
apt-get update
apt-get upgrade -y
apt-get install -y build-essential git
apt-get install git

docker volume create --name hatchery
docker volume ls

#MYSQL | ROOT PWD KERRIGAN | HATCHERY VOLUME | DATABASE ZERGLINGS | CONTAINER SPAWNING POOL
docker run -d --name spawning-pool --restart=on-failure:10 -e MYSQL_ROOT_PASSWORD=Kerrigan -e MYSQL_DATABASE=zerlings -v hatchery:/var/lib/mysql mysql --default-authentication-plugin=mysql_native_password

