#include<iostream>
#include<vector>
using std::endl;
using std::cout;
using std::vector;

int main()
{
	vector<int> v = { 0 };
	double prev = 0;
	double curr = v.capacity();
	while (v.capacity() < 0xFFFF)
	{
		if (v.size() == v.capacity())
		{
			curr = v.capacity();
			cout << v.capacity() << "\t\t" << curr/prev << endl;
			prev = curr;
		}
		v.push_back(0);
	}
	system("pause");
	return 0;
}
