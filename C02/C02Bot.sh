#!/bin/bash
git clone $1 eva
read -p 'Press any key to continue or CTRL + C to stop
' -n1 -s
ls -a ./eva/ex**/*
read -p 'Press any key to continue or CTRL + C to stop
' -n1 -s
norminette ./eva/ex*/ -R CheckForbiddenSourceHeader
read -p 'Press any key to continue or CTRL + C to stop
' -n1 -s
cp ./eva/ex00/* ./Test/ex00/
cp ./eva/ex01/* ./Test/ex01/
cp ./eva/ex02/* ./Test/ex02/
cp ./eva/ex03/* ./Test/ex03/
cp ./eva/ex04/* ./Test/ex04/
cp ./eva/ex05/* ./Test/ex05/
cp ./eva/ex06/* ./Test/ex06/
cp ./eva/ex07/* ./Test/ex07/
cp ./eva/ex08/* ./Test/ex08/
cp ./eva/ex09/* ./Test/ex09/
cp ./eva/ex10/* ./Test/ex10/
cp ./eva/ex11/* ./Test/ex11/
cp ./eva/ex12/* ./Test/ex12/
cd Test
FT_I=0
while [ $FT_I -le 9 ]
do
gcc -Wall -Wextra -Werror ./ex0$FT_I/ex* ./ex0$FT_I/ft* -o ./ex0$FT_I/a.out
read -p "0$FT_I Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
FT_I=$(( $FT_I + 1 ))
done
while [ $FT_I -le 12 ]
do
gcc -Wall -Wextra -Werror ./ex$FT_I/ex* ./ex$FT_I/ft* -o ./ex$FT_I/a.out
read -p "$FT_I Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
FT_I=$(( $FT_I + 1 ))
done
FT_I=0
while [ $FT_I -le 9 ]
do
cat ./ex0$FT_I/f*
read -p "ex0$FT_I, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
./ex0$FT_I/a.out
read -p "ex0$FT_I, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
FT_I=$(( $FT_I + 1 ))
done
while [ $FT_I -le 12 ]
do
cat ./ex$FT_I/f*
read -p "
ex$FT_I, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
./ex$FT_I/a.out
read -p "
ex$FT_I, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
FT_I=$(( $FT_I + 1 ))
done
read -p "
The test is over, Thanks for using HACS!
" -n1 -s
rm ./ex*/f*
rm ./ex*/a.*
cd ..
rm -Rf ./eva
clear
