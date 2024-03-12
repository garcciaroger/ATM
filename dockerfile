FROM ubuntu:latest
RUN apt-get update && apt-get install -y \
    g++ \
    cmake \
    make \
    git
WORKDIR /usr/src/app
COPY . .
RUN cmake -S . -B build
RUN cmake --build build
CMD ["./build/ATM"]
