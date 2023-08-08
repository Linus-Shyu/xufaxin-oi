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
    int n;
    int m = 0;
    cin >> n;
    while(n > pow(2,m)) {
		m += 2;
	}
	if(pow(2,m) >= n) {
		cout << m -2;
	}
	else{
		cout << m;
	}
	return 0;
}
