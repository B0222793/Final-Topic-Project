#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "snakesAndLadders.h"
using namespace std;

int throwDice;

void Dice01()
{
    cout << endl << "輸入1擲骰子：";
    cin >> throwDice;
}

int Dice02()
{
    int dice;
    if (throwDice == 1)
    {
        srand(time(0));
        dice = (rand() % 5) + 1;
        return dice;
    }
}

void rules()
{
    cout << "蛇梯棋規則:" << endl;
    cout << "棋盤上有100格,玩家擲骰子決定前進步數" << endl;
    cout << "如果遇上梯子,升10格,梯子：4,20,41,63,72" << endl;
    cout << "如果遇上蛇,降10格,蛇：17,54,62,87,95" << endl;
    cout << "玩家位置抵達100即遊戲勝利" << endl << endl;
}

int main()
{
    rules();
    PLAYER p1;

    while (p1.getPlayer() < 100)
    {
        Dice01();
        cout << "骰子:" << Dice02() << endl;

        p1.setPlayer(Dice02());
        if (p1.getPlayer() >= 100)
            cout << "玩家位置：100" << endl;
        else
            cout << "玩家位置：" << p1.getPlayer() << endl;

        if (p1.getPlayer() == 4 or p1.getPlayer() == 20 or p1.getPlayer() == 41 or p1.getPlayer() == 63 or p1.getPlayer() == 72)
        {
            p1.setPlayer(10);
            cout << "碰到梯子,玩家位置：" << p1.getPlayer() << endl;
        }
        else if (p1.getPlayer() == 17 or p1.getPlayer() == 54 or p1.getPlayer() == 62 or p1.getPlayer() == 87 or p1.getPlayer() == 95)
        {
            p1.setPlayer(-10);
            cout << "碰到蛇,玩家位置：" << p1.getPlayer() << endl;
        }

        if (p1.getPlayer() >= 100)
            cout << "到達終點" << endl;
        else
        {
            continue;
        }
    }
}