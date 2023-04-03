#!/bin/bash
gcc -c *.c 
ar 1-rc liball.a *.o 
ranlib liball.a
