#include <iostream>
#include "Log.h"
#include "Player.cpp"

int main()
{
    Log("Helo world!");

    MultipleAndLog(20, 13);

    int num = 8;
    int* ptr = &num;

    *ptr = 20;

    Increment(num);

    int* a = new int(1);

    Entity E;
    E.Move(2, 3);

    std::cout << E.getScore() << std::endl;

    Player P;
    std::cout << P.getScore() << std::endl;

    E.~Entity();


    std::cin.get();
}