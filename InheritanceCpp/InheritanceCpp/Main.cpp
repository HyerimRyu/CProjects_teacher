#include <iostream>
using namespace std;

class Person
{
private:
	const char* name;
	int age;

public:
	//������(constructor) �Լ�
	Person()
	{
		cout << " First ���� " << endl;
	}

	//������������� ����ϴ� ���(�Լ�)
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
		cout << "Second ���� " << endl;
	}
};

void main()
{
	
	new Student();



	
}