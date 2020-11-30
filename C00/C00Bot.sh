#!/bin/bash
git clone $1 eva
read -p 'Press any key to continue or CTRL + C to stop
' -n1 -s
ls ./eva/ex**/*
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
cd Test
gcc -Wall -Wextra -Werror ./ex00/ex??Tester.c ./ex00/ft* -o ./ex00/a.out
read -p "00 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex01/ex??Tester.c ./ex01/ft* -o ./ex01/a.out
read -p "01 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex02/ex??Tester.c ./ex02/ft* -o ./ex02/a.out
read -p "02 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex03/ex??Tester.c ./ex03/ft* -o ./ex03/a.out
read -p "03 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex04/ex??Tester.c ./ex04/ft* -o ./ex04/a.out
read -p "04 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex05/ex??Tester.c ./ex05/ft* -o ./ex05/a.out
read -p "05 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex06/ex??Tester.c ./ex06/ft* -o ./ex06/a.out
read -p "06 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex07/ex??Tester.c ./ex07/ft* -o ./ex07/a.out
read -p "07 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex08/ex??Tester.c ./ex08/ft* -o ./ex08/a.out
read -p "08 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
./ex00/a.out
read -p "00, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
./ex01/a.out
read -p "
01, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
./ex02/a.out
read -p "
02, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
./ex03/a.out
read -p "
03, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
./ex04/a.out
read -p "
04, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
./ex05/a.out
read -p "
05, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
./ex06/a.out
read -p "
06, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
./ex07/a.out
read -p "
07, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
./ex08/a.out
read -p "
The test is over, Thanks for using HACS!
" -n1 -s
rm ./ex*/f*
rm ./ex*/a.*
cd ..
rm -R ./eva
clear