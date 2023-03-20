FROM debian:latest
RUN apt update && apt -y upgrade
RUN apt-get update && apt-get -y upgrade
# RUN apt install -y software-properties-common
RUN apt install -y git gcc gdb make cmake wget gdb
# C Library GUI
RUN apt install -y build-essential libgtk2.0-dev libgtk-3-dev
CMD [ "/bin/bash" ]
