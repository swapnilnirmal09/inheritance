#!/bin/bash
read -p "enter the number" num
sum=0
for((i=0;i<=$num;i++))
do sum=$((sum+$i))
done
echo $sum
avg=$(($sum/$num))
echo $avg
