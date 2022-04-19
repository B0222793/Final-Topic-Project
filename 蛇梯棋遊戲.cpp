#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
  int j=100;
  int k=81;
  
  for(int i=1; i<6; i++)
  {
    for(int i=j; i>(j-10); i--)
      cout << setw(4) << i << "  " ;
    cout << endl;

    for(int i=k; i<(k+10); i++)
      cout << setw(4) << i << "  " ;
    cout << endl;

    j-=20;
    k-=20;
  }

  cout << endl;
  cout << "如果遇上梯子升10格,梯子：4,20,41,63,72" << endl;
  cout << "如果遇上蛇降10格,蛇：17,54,62,87,95" << endl;

  int player = 1;
  int dice;
  cout << "輸入1擲骰子：";
  cin >> dice;
  
  while(player < 100)
  {
    int a;
    if(dice == 1)
    {
      srand(time(0));
      a=(rand() % 5)+1;
      cout << endl << "骰子：" << a << endl;
    }

    player += a;
    if(player >= 100)
      cout << "玩家位置：100" << endl;
    else
      cout << "玩家位置：" << player << endl;

    if(player==4 or player==20 or player==41 or player==63       or player==72)
    {
      player += 10;
      cout << "碰到梯子,玩家位置：" << player << endl;
    }
    else if(player==17 or player==54 or player==62 or                 player==87 or player==95)
    {
      player -= 10;
      cout << "碰到蛇,玩家位置：" << player << endl;
    }
    
    if(player >= 100)
      cout << "到達終點" << endl;
    else
    {
      cout << "輸入1擲骰子：";
      cin >> dice;
    }
  }
}
