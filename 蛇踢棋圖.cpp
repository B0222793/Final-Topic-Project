#include <iostream>
#include <iomanip>
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
}
