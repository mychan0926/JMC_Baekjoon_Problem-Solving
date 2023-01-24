#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	map <string,int> s;
	map <int, string> b;
	vector <string> t;
	int N, M;
	string a;
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> a;
		t.push_back(a);
		
	}
	for (int i = 0; i < M; i++)
	{
		
		s.insert(make_pair(t[M - 1 - i], M - 1 - i));

	}


	for (map<string, int>::iterator i = s.begin(); i!=s.end(); i++)
	{
		b.insert(make_pair((*i).second, (*i).first));
	}






	int j = 0;
	for (map<int,string>::iterator i = b.begin()  ; j != N; i++)
	{

		cout << (*i).second << "\n";
		j++;
		if (b.size() < j+1)
		{
			break;
		}
	}

}