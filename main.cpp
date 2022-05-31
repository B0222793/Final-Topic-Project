#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "snakesAndLadders.h"
using namespace std;

int main() {
    cout << "蛇梯棋規則:" << endl;
    cout << "棋盤上有100格,玩家擲骰子決定前進步數" << endl;
    cout << "如果遇上梯子,升10格,梯子：4,20,41,63,72" << endl;
    cout << "如果遇上蛇,降10格,蛇：17,54,62,87,95" << endl;
    cout << "玩家位置抵達100即遊戲勝利" << endl << endl;

    int player = 1;
    int throwDice;
    cout << "輸入1擲骰子：";
    cin >> throwDice;

    while (player < 100)
    {
        int dice;
        if (throwDice == 1)
        {
            srand(time(0));
            dice = (rand() % 5) + 1;
            cout << endl << "骰子：" << dice << endl;
        }

        player += dice;
        if (player >= 100)
            cout << "玩家位置：100" << endl;
        else
            cout << "玩家位置：" << player << endl;

        if (player == 4 or player == 20 or player == 41 or player == 63 or player == 72)
        {
            player += 10;
            cout << "碰到梯子,玩家位置：" << player << endl;
        }
        else if (player == 17 or player == 54 or player == 62 or player == 87 or player == 95)
        {
            player -= 10;
            cout << "碰到蛇,玩家位置：" << player << endl;
        }

        if (player >= 100)
            cout << "到達終點" << endl;
        else
        {
            cout << "輸入1擲骰子：";
            cin >> throwDice;
        }
    }
}