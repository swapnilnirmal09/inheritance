#!/bin/bash
read -p "enter the num1 " num1
read -p " enter  the num2 " num2
read -p "enter the num3 " num3

if (( $num1 >  $num2 &&  $num1 > $num3 ))
then
echo 
"num 1 is greater"
else
echo "num 2 is greater"
fi
