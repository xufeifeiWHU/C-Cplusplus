#include <iostream>
#include <string>
#include <set>

using namespace std;

set<string> getPermutation(const string &str)
{
	set<string> result;
	if(str=="")
		result.insert("");
	else
	{
		for(int i=0;i<str.size();++i)
		{
			char ch=str[i];
			string rest=str.substr(0,i)+str.substr(i+1);
			for(auto& a:getPermutation(rest))
				result.insert(a+ch);
		
		}
	
	}
	return result;
	
}

int main()
{
    for(auto& a: getPermutation("ABC"))
		cout<< a << endl;
    return 0;
}
