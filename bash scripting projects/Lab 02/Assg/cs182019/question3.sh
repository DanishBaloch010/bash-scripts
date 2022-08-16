#! /bin/bash

read -p 'Enter your Password : ' pass

alphaCount=0
lowerCheck=0
upperCheck=0
numCheck=0

# *flag = 0 = false
# *flag = 1 = true

#counting number of characters
alphaCount=${#pass}

#checking lower case alphabets
if [[ "$pass" =~ [a-z] ]]
then
	lowerCheck=$((lowerCount+1))
fi

#checking upper case alphabets
if [[ "$pass" =~ [A-Z] ]]
then
	upperCheck=$((upperCount+1))
fi

#checking numbers
if [[ $pass =~ [0-9] ]]
then
	numCheck=$((numCount+1))
fi

if [ $alphaCount -ge 8 ] && [ $upperCheck -eq 1 ] && [ $lowerCheck -eq 1 ] && [ $numCheck -eq 1 ];
then
	echo "Your password is Strong."

else
	echo "Your password is WEAK."
fi






