#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(65);
    vec.pop_back();
  cout << vec.at(2)<<endl;
  cout << vec.back()<<endl;
  cout << vec.front()<<endl;
  cout << endl;
  for(int val :vec)
  cout << val<< " ";
}