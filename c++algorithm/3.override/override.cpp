#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
class objectx
{

	public:
		int tracking_id;
		int label_id;
		virtual void behavior() = 0;//pure virtual
		virtual void test();


};

void objectx::test()
{
	cout<<"base's test"<<endl;

}


class person:public objectx
{
	public:
	void behavior() override;
	void test() override;
};

void person::behavior()
{	
	cout<<"person's behavior"<<endl;

}

void person::test()
{
	cout<<"person's test"<<endl;
}


int main(void)
{
	objectx *pr=new person;
	pr->behavior();
	pr->test();
	pr->objectx::test();
	//person pr;
	//pr.test();	

	return 1;

}
