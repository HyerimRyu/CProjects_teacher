#include <iostream>
using namespace std;

//class ���� : �����ִ� �����Ϳ� �Լ�(���)�� ���� ����
class Person
{
public:
	const char* name;
	int age;

	//������������� ����ϴ� ���(�Լ�)
	void show()
	{
		cout << "name : " << name << endl;
		cout << "age : " << age << endl;
	}
};

class Student :public Person
{
public:
	const char* major;

	//������������� ����ϴ� ���(�Լ�)
	void show()
	{
		Person::show();
		cout << "major : " << major << endl;
	}
};

class Professor :public Person
{
public:
	const char* subject;

	void show()
	{
		Person::show();
		cout << "subject : " << subject << endl;
	}
};

class AlbaStudent :public Student
{
public:
	const char* task;

	//�������̵�
	void show()
	{		
		Student::show();
		cout << "task : " << task << endl;
	}
};


void main()
{
	//Person ��ü ����
	Person* p = new Person;
	p->name = "kim";
	p->age = 30;
	p->show();

	cout << endl;
	//Student ��ü ����
	Student* stu= new Student;
	stu->name = "sam";
	stu->age = 20;
	stu->major = "computer";
	stu->show();
	cout << endl;

	//Professor ��ü ����
	Professor* pro= new Professor;
	pro->name = "robin";
	pro->age = 50;
	pro->subject = "android optimization";
	pro->show();
	cout << endl;

	//AlbaStudent ��ü ����
	AlbaStudent* alba = new AlbaStudent;
	alba->name = "hong";
	alba->age = 25;
	alba->major = "Web programming";
	alba->task = "manager";
	alba->show();


	 

	
	

	
}






