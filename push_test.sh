#!/usr/bin/bash

max=0;

# 100 TEST
for i in $(seq 1 100)
do
	ARG=$(shuf -i 0-2147483640 -n 100 | tr '\n' ' ')
	moves=$(./push_swap $ARG | wc -l)
	if [ "$moves" -ge "$max" ]; then
        max=$moves
    fi
done
echo "MAX[100]=$max";

max=0;

# 100 TEST
for i in $(seq 1 25)
do
	ARG=$(shuf -i 0-2147483640 -n 500 | tr '\n' ' ')
	moves=$(./push_swap $ARG | wc -l)
	if [ "$moves" -ge "$max" ]; then
        max=$moves
    fi
done
echo "MAX[500]=$max";
