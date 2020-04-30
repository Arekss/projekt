FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive
<<<<<<< HEAD
RUN apt-get update -y
RUN apt-get install -y nano vim gdb g++ gcovr lcov make cmake libgtest-dev
=======
#RUN apt-get update -y
#RUN apt-get install -y g++ nano vim gdb gcovr lcov man make cmake libgtest-dev
>>>>>>> 9b05c2901e63cacba608788c7e80c30eca147ace

COPY README.txt /home/root/
COPY IgnoreMe.sh /home/root/
COPY zadania /home/root/exercises/

<<<<<<< HEAD
RUN /home/root/IgnoreMe.sh

WORKDIR home/root
=======
RUN ./IgnoreIt.sh

WORKDIR /home/root


>>>>>>> 9b05c2901e63cacba608788c7e80c30eca147ace
