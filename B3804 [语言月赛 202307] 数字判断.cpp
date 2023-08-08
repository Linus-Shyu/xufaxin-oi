#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <string>
#include <list> 
#include <map>
#include <queue>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    /*在下方写代码*/
    long long a,b,c;
	cin >> a >> b >> c;
	if(a + b + c <= 100 && b % 5 == 0 && c % 7 == 0 && a - b > b - c) 
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
    return 0;
}
