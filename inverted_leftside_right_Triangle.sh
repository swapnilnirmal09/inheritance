#!/bin/bash
read -p"enter the number of rows" num
for((i=num;i>=1;i--))
do
for((j=1;j<=i;j++))
do
echo  -n "* "
done
echo
done

 
