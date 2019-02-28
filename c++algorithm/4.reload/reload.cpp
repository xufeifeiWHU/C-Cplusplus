/*

测试运算符重载，这里重载一个object类的加法运算符


*/
#include <iostream>


class object
{
public:
	int trackingId;
	int boundingBoxHeight;
	int boundingBoxWidth;

	explicit object(const int id);


};

explicit object::object(const int id):boundingBoxHeight(0),boundingBoxWidth(0)
{
	trackingId=id;
}

const object operator+(const object& l,const object& r)
{

	object temp(1.0);
	temp.trackingId=l.trackingId+r.trackingId;
	return temp;

}

int main(void)
{
	object *lObject=new object(1);
	object *rObject=new object(2);

	object sObject=*lObject+*rObject;

	std::cout<<"trackingId:"<<sObject.trackingId<<std::endl;
		
	delete lObject,rObject;
	return 1;

}
