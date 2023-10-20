#!/bin/bash
read -p "choice" ch
read -p "num1" num1
read -p "num2" num2
case $ch in
1)sum=$((num1+num2))
    echo $sum;;
2)sub=$((num1-num2))
echo $sub;;
esac
