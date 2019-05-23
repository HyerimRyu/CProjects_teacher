#include <iostream>
using namespace std;

class Person
{
private:
	const char* name;
	int age;

public:
	//생성자(constructor) 함수
	Person()
	{
		cout << " First 생성 " << endl;
	}

	//멤버변수값들을 출력하는 기능(함수)
	void init(const char* n, int a)
	{
		name = n;
		age = a;
	}

	void show()
	{
		cout << "name : " << name << endl;
		cout << "age : " << age << endl;
	}
};

class Student :public Person
{
public:
	Student()
	{
		cout << "Second 생성 " << endl;
	}
};

void main()
{
	
	new Student();



	
}