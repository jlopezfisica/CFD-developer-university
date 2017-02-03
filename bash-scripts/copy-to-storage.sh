#!/bin/bash

ls ../
echo -n "Enter the directory:"
read my_dir
echo "The directory is: $my_dir"

mkdir $my_dir
cp -r RUN $my_dir/
cp param.out $my_dir/
