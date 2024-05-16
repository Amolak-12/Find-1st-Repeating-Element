#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int RepeatingNo(vector<int> v)
{
  int rep = INT_MIN;
  for(int i =0;i<v.size() ; i++)
  {
    for(int j =i+1 ;j<v.size();j++)
      {
        if(v[i] == v[j] && rep == INT_MIN)
        {
          rep = i;
        }
      }
  }
  return rep;
}

int main() {

  vector<int>v{1,2,5,4,4,5,7,8,3};
  int repNo = RepeatingNo(v);

  if(repNo == INT_MIN)
  {
    cout << "No repeating element found!!!" << endl;
  }
  else
  {
  cout << "The 1st Repeating Element is "<< v[repNo] << endl;
  cout << "It is found at : "<< repNo << endl;
  }
}