#! /bin/bash
num=0
counter=0
read -p 'Please Enter a Number : ' num

# if user has entered value 1 or lesser than that.
if [ $num -le 1 ]
then
	echo "You have entered $num. There is no Prime Number before 2. Please Enter a number equals to or greater than 2."
	
# if user has entered 2 which is the first prime number.
elif [ $num -eq 2 ] 
then
	echo "You have entered $num.It is the first Prime Number. Please enter a number greater than 2."
	
# if user has entered number greater than 2 it will find the last prime number before the entered number.	
else

for (( i=$num-1; i>=1; i-- ))
do
	for (( j=2; j<i; j++ ))
	do
		rem=$(($i%$j))
		if [ $rem -eq 0 ]
		then
		counter=$((counter+1))
		fi
	done 
	if [ $counter -eq 0 ]
	then
		echo "$i is the last Prime Number before $num"
		break
	fi
	counter=0
done
fi
