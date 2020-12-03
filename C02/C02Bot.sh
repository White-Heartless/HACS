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
gcc -Wall -Wextra -Werror ./ex00/ex??tester.c ./ex00/ft* -o ./ex00/a.out
read -p "00 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex01/ex??tester.c ./ex01/ft* -o ./ex01/a.out
read -p "01 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex02/ex??tester.c ./ex02/ft* -o ./ex02/a.out
read -p "02 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex03/ex??tester.c ./ex03/ft* -o ./ex03/a.out
read -p "03 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex04/ex??tester.c ./ex04/ft* -o ./ex04/a.out
read -p "04 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex05/ex??tester.c ./ex05/ft* -o ./ex05/a.out
read -p "05 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex06/ex??tester.c ./ex06/ft* -o ./ex06/a.out
read -p "06 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex07/ex??tester.c ./ex07/ft* -o ./ex07/a.out
read -p "07 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex08/ex??tester.c ./ex08/ft* -o ./ex08/a.out
read -p "08 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex09/ex??tester.c ./ex09/ft* -o ./ex09/a.out
read -p "09 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex10/ex??tester.c ./ex10/ft* -o ./ex10/a.out
read -p "10 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex11/ex??tester.c ./ex11/ft* -o ./ex11/a.out
read -p "11 Compiled, Press any key to continue or CTRL + C to stop
" -n1 -s
gcc -Wall -Wextra -Werror ./ex12/ex??tester.c ./ex12/ft* -o ./ex12/a.out
read -p "12 NOT A MISTAKE, WORK IN PROGRESS, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
cat ex00/f*
read -p "ex01, Press any key to continue or CTRL + C to stop
" -n -s
clear
./ex00/a.out
read -p "ex00, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
cat ex01/f*
read -p "ex01, Press any key to continue or CTRL + C to stop
" -n -s
clear
./ex01/a.out
read -p "
ex01, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
cat ex02/f*
read -p "ex02, Press any key to continue or CTRL + C to stop
" -n -s
clear
./ex02/a.out
read -p "
ex02, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
cat ex03/f*
read -p "ex03, Press any key to continue or CTRL + C to stop
" -n -s
clear
./ex03/a.out
read -p "
ex03, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
cat ex04/f*
read -p "ex04, Press any key to continue or CTRL + C to stop
" -n -s
clear
./ex04/a.out
read -p "
ex04, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
cat ex05/f*
read -p "ex05, Press any key to continue or CTRL + C to stop
" -n -s
clear
./ex05/a.out
read -p "
ex05, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
cat ex06/f*
read -p "ex06, Press any key to continue or CTRL + C to stop
" -n -s
clear
./ex06/a.out
read -p "
ex06, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
cat ex07/f*
read -p "ex07, Press any key to continue or CTRL + C to stop
" -n -s
clear
./ex07/a.out
read -p "
ex07, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
cat ex08/f*
read -p "ex08, Press any key to continue or CTRL + C to stop
" -n -s
clear
./ex08/a.out
read -p "
ex08, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
cat ex09/f*
read -p "ex09, Press any key to continue or CTRL + C to stop
" -n -s
clear
./ex09/a.out
read -p "
ex09, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
cat ex10/f*
read -p "ex10, Press any key to continue or CTRL + C to stop
" -n -s
clear
./ex10/a.out
read -p "
ex10, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
cat ex11/f*
read -p "ex11, Press any key to continue or CTRL + C to stop
" -n -s
clear
./ex11/a.out
read -p "
ex11, Press any key to continue or CTRL + C to stop
" -n1 -s
clear
cat ex12/f*
read -p "ex12, NOT A MISTAKE, WORK IN PROGRESS,Press any key to continue or CTRL + C to stop
" -n -s
clear
./ex12/a.out
read -p "
ex12, NOT A MISTAKE, WORK IN PROGRESS,Press any key to continue or CTRL + C to stop
" -n1 -s
read -p "
The test is over, Thanks for using HACS!
" -n1 -s
rm ./ex*/f*
rm ./ex*/a.*
cd ..
rm -Rf ./eva
clear
