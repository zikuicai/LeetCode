#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int maxProfit(vector<int>& prices) 
{
    int ret = 0;
    for (size_t p = 1; p < prices.size(); ++p) 
      ret += max(prices[p] - prices[p - 1], 0);    
    return ret;
}

int main()
{

	vector<int> prices{7,1,5,3,6,4};
	double inf = numeric_limits<double>::infinity();
	int a[] = {1,2,3};
	// cout<<prices.size()<<endl;
	// cout<<*prices.begin()<<endl;
	// cout<<*(prices.end()-1)<<endl;

	// for (auto it=prices.begin(); it!=prices.end(); it++)
	// 	cout<<*it<<' ';
    // cout << maxProfit(prices) << endl;
    // cout<<a<<endl;
    cout<<min_element(a)<<endl;
	// if(inf>10){
	// 	cout<< "yes" <<endl;
	// }
    
    return 0;
}
