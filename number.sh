pos_number=0
neg_number=0
zero_number=0

for ((i=0;i<10;i++))
do 
	
   read -p "Enter 10 numbers: " num

   if((num>0)) 
   then ((pos_number++))
   elif((num<0)) 
   then ((neg_number++))
   else 
   	((zero_number++))
   fi
done

echo "Positive number= $pos_number"
echo "Negative number= $neg_number"
echo "Zero numbers= $zero_number"
