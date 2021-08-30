:: Compilo c+odigo objeto
g++ -Wall -std=c++11 -c .\src\Student.cpp 
g++ -Wall -std=c++11 -c main.cpp 

:: Compilo el Binario
g++ Student.o main.o -o humanity.exe

:: Limpio los códigos objeto
DEL .\*.o