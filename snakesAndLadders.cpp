#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "snakesAndLadders.h"
using namespace std;

PLAYER::PLAYER()
{
	player = 1;
}

void PLAYER::setPlayer(int a)
{
	player += a;
}

int PLAYER::getPlayer()
{
	return player;
}