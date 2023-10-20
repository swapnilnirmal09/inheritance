echo "Enter a number: "
read num
temp=$num

while [ $num -gt 0 ]
do 
digit=$((num%10))
result=$(((result*10)+digit))
num=$((num/10))
done

echo  "reverse no: $result"
echo "original no: $temp"

if(( $temp == $result ))
then echo "Yes"
else
     echo "No"
fi

