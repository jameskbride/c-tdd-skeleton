# C TDD Skeleton
This project is a skeleton for Test-Driven Development in C.  It provides a configured platform to compile, link, and execute tests no matter what platform you are on using Docker to create a container for this purpose.

## Requirements
At the very least you'll need to be able to run Make and have Docker installed.

## Usage
See the Makefile, but to get running you can execute `make docker` from the root of the project to build the container and stand it up with a working directory of `/usr/c-tdd`, which is also the mounted volume for your current directory (Meaning you can make changes locally and see them instantly on the container). Once that completes successfully you can find out what your container name is by running `docker ps`, and then `docker attach <YOUR CONTAINER>` to get a command prompt in the working directory.  Here you can run the rest of the make commands.  The default make command is `test`.
