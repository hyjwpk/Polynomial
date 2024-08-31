#!/bin/bash

make clean

make

time -p ./polynomial test.conf
