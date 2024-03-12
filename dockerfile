# Use an official C++ base image with CMake installed
FROM ubuntu:latest

# Install necessary packages
RUN apt-get update && apt-get install -y \
    g++ \
    cmake \
    make \
    git

# Set the working directory inside the container
WORKDIR /usr/src/app

# Copy your project files into the container
COPY . .

# Run CMake to generate the build system
RUN cmake -S . -B build

# Build your project
RUN cmake --build build

# Command to run your program
CMD ["./build/ATM"]
