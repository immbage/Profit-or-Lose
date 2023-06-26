#include <iostream>
using namespace std;

int main(){

  float cost, revenue, profit, loss;

  cout << "****************************\n";
  cout << "Enter the amount of cost: ";
  cin >> cost;
  cout << "Enter the amount of revenue: ";
  cin >> revenue;
  cout << "****************************\n";

  if(revenue > cost)
  {
    profit = revenue - cost;
    cout << "You get a profit of: " << profit << endl;
  }

  else if (revenue < cost)
  {
    loss = revenue - cost;
    cout << "You get a loss of: " << loss << endl;
  }

  else
  {
    cout << "You neither gain nor lose \n";
  }

}
