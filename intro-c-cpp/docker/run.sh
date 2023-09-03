#!/bin/bash

IMAGE_NAME="valgrind_test"
CONTAINER_NAME="valgrind_test_env"

docker build -t $IMAGE_NAME .

docker run -it --rm --name $CONTAINER_NAME $IMAGE_NAME

