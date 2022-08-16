#! /bin/bash

arr=(10 9 8 7 6 5 4 3 2 1)
echo "Array Elements : ${arr[@]}"


#bubble sort algorithm
for ((i=0 ; i<10 ;i++))
do
	for((j=0 ; j<10-i-1; j++))
	do
	if [ ${arr[j]} -gt ${arr[$((j+1))]} ]
		then
		temp=${arr[j]}
		arr[$j]=${arr[$((j+1))]}
		arr[$((j+1))]=$temp
	fi
	done
done

echo "Array Bubble Sorted : ${arr[@]}"

