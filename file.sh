#!/bin/bash
read  -p "enter the number of rows" num

for ((i=1;i<=10;i++))
do
echo $num "*" $i "=" $((num * i))
done

