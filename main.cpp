#include <iostream>
using namespace std;

float power(float x, int z)
{
  float temp;
  if ( z == 0 )
{
  return 1;
}

temp = power(x, z / 2);

if( z % 2 == 0 )
{
  return temp * temp;
}
else
{
  if ( z > 0 )
    return x * temp * temp;
  else
    return ( temp * temp ) / x;
  }
}

int main()
{
  float x = 4;
  int z = 0;

  cout << power(x,z);
  return 0;
}
