#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

int main()
{
	long long a, b, c, d, e;
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	cin >> a;
	for (long long  i = 0; i < a; i++)
	{
		long long size = 0;
		priority_queue <long long> big;
		priority_queue <long long , vector<long long>,greater<long long>> small;
		unordered_map <long long, long long> check;
		cin >> b;
		char DI;
		for (long long j = 0; j < b; j++)
		{
			cin >> DI;
			long long  t = 0;
			if (DI == 'I')
			{
				cin >> t;
				size++;
				check[t]++;
				big.push(t);
				small.push(t);

			}
			else if (DI == 'D')
			{

				cin >> t;
				if (size > 0)
				{
					size--;
					if (t == -1)
					{
						while (small.empty() == 0)
						{
							if (check[small.top()] > 0)
							{
								check[small.top()]--;
								small.pop();
								break;
							}
							else 
							{
								small.pop();
							}
						}
						
					}
					else if (t == 1)
					{
						while (big.empty() == 0)
						{
							if (check[big.top()] > 0)
							{
								
								check[big.top()]--;
								big.pop();
								break;
							}
							else
							{
								big.pop();
							}
						}
					}


				}
			}
		}


		if (size == 0)
		{
			cout << "EMPTY\n";
		}
		else
		{
			while (big.empty()==0)
			{
				if (check[big.top()] > 0)
				{
					if (size != 1)
					{
						check[big.top()]--;
					}
					
					cout << big.top()<<" ";
					big.pop();
					break;
				}
				else
				{
					big.pop();
				}
			}
			while (small.empty() == 0)
			{
				if (check[small.top() ] > 0)
				{
					cout << small.top() <<"\n";
					small.pop();
					break;
				}
				else 
				{
					small.pop();
				}
			}

		}
	}
}
