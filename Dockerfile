FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive
#RUN apt-get update -y
#RUN apt-get install -y g++ nano vim gdb gcovr lcov man make cmake libgtest-dev

COPY README.txt /home/root/
COPY IgnoreMe.sh /home/root/
COPY zadania /home/root/exercises/

RUN ./IgnoreIt.sh

WORKDIR /home/root


