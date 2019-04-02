#include <iostream> 
#include <fstream>

using namespace std;

int main()
{
  ifstream in;
  ofstream out;
  int count = 0;

  in.open("output.txt");
  if(in.fail())
  {
    out.open("output.txt", ios::app);
    out << 1;
  }
  in >> count;
  out.open("output.txt");
  cout << count;

  out << (int) count + 1;
  return 0;
}
