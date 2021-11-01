FROM ubuntu:18.04
FROM ros:melodic

RUN apt-get update && apt-get install -q -y \
    openssh-client
RUN apt-get install -y \
    cppcheck \
    clang \
    clang-format

RUN echo 'source /opt/ros/melodic/setup.bash' >> /root/.bashrc
RUN mkdir -p /workspace/src
