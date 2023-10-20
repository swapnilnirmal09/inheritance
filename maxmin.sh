echo "enter 5 numbers:"

read num1
read num2
read num3
read num4
read num5

if ((num1>num2 && num1>num3 && num1>num4 && num1>num5))
then echo "Greatest number: $num1"
fi
