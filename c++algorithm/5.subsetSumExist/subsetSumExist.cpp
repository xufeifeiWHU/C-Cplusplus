#include <iostream>
#include <set>
using namespace std;

template <class T>
void show(const T &c)
{
	for(auto &a:c)
		cout<< a <<" ";
}

set<int>& operator-(set<int>&s,int i)
{
	if(s.find(i) != s.end())
		s.erase(s.find(i));	
	return s;
		
}

bool subsetSumExist(set<int> s, int target)
{
	cout<<"target:"<<target<<endl;
	show(s);
	if(s.empty())
	{
		cout<<"empty"<<endl;
		return target==0;
	}
	else
	{
		int temp = *s.begin();
		cout<< "first: "<< temp << endl;
		set<int>rest = s - temp;
		return subsetSumExist(rest,target) || subsetSumExist(rest,target-temp);
	}

}
int main()
{
	set<int> s({1,2,3,5,7,9,11,20});
	//show(s);
	s=s-1;
	//show(s);
	s=s-1;
	//show(s);
	//cout<<s;
	
	cout<<(subsetSumExist(s,100000) ? "true" : "false" )<<endl;
	
    cout << "Hello, world!" << endl;
    return 0;
}
