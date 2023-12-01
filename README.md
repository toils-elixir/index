# bash
g++ -c functions.cpp -o functions.o
g++ -c main.cpp -o main.o
g++ functions.o main.o -o myprogram
./myprogram
