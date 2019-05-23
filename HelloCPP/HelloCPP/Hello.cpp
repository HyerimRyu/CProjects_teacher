#include <iostream>
using namespace std;

//class 정의 : 연관있는 데이터와 함수(기능)의 묶음 규정
class Person
{
public:
	const char* name;
	int age;

	//멤버변수값들을 출력하는 기능(함수)
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

	//멤버변수값들을 출력하는 기능(함수)
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

	//오버라이드
	void show()
	{		
		Student::show();
		cout << "task : " << task << endl;
	}
};


void main()
{
	//Person 객체 생성
	Person* p = new Person;
	p->name = "kim";
	p->age = 30;
	p->show();

	cout << endl;
	//Student 객체 생성
	Student* stu= new Student;
	stu->name = "sam";
	stu->age = 20;
	stu->major = "computer";
	stu->show();
	cout << endl;

	//Professor 객체 생성
	Professor* pro= new Professor;
	pro->name = "robin";
	pro->age = 50;
	pro->subject = "android optimization";
	pro->show();
	cout << endl;

	//AlbaStudent 객체 생성
	AlbaStudent* alba = new AlbaStudent;
	alba->name = "hong";
	alba->age = 25;
	alba->major = "Web programming";
	alba->task = "manager";
	alba->show();


	 

	
	

	
}






