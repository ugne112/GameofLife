FROM ubuntu
RUN apt-get update
RUN DEBIAN_FRONTEND="noninteractive" apt-get -y install git cmake build-essential tar curl g++ gcc-9 clang-10
WORKDIR /container
COPY . .
