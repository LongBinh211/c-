#include<iostream>
#include<string>
using namespace std;
class Person
{
	string firstname;
	string lastname;
	
public:
	string id;
	Person();
	Person(string, string, string);
	string getId();
	string getfirstname();
	string getlastname();
	string getfullname();
};
Person::Person()
{
	this->id = "0";
	this->firstname = "chua nhap";
	this->lastname = "chua nhap";
}
Person::Person(string id, string firstname, string lastname)
{
	this->id = id;
	this->firstname = firstname;
	this->lastname = lastname;
}
string Person::getId()
{
	return this->id;
}
string Person::getfirstname()
{
	return this->firstname;
}
string Person::getlastname()
{
	return this->lastname;
}
string Person::getfullname() {
	return this->firstname + this->lastname;
}
class Student : public Person {
	string studentID;
	float mark;
	float fee;
public:
	Student();
	Student(string, float, float);
	Student(string id, string firstname, string lastname,
		string sid, float mark, float fee);
	void study(string);
	void payfee(float);
	void doexam(string);
	void showInfor();
};
Student::Student(string id, string firstname, string lastname,
	string sid, float mark, float fee) : Person(id, firstname, lastname)
{
	this->studentID = sid;
	this->mark = mark;
	this->fee = fee;
}
void Student::showInfor() {
	cout << "ID: " << id << endl;
	cout << "Full name:" << getfullname() << endl;
	cout << "Student ID: " << studentID << endl;
	cout << "Mark: " << mark << endl;
	cout << "Fee: " << fee << endl;
}

class Employee : public Person
{
	string eID;
	float salary;
	string role;
public:
	Employee();
	Employee(string, string, string, string, float, string);
	void dohiswork();
	void goto_office();
	bool getPayment();
	void showinfor();
};
Employee::Employee(string id, string firstname, string lastname, string eID, float salary, string role) : Person(id, firstname, lastname) {
	this->eID = eID;
	this->salary = salary;
	this->role = role;
}
void Employee::showinfor() {
	cout << "Name of the employee: " << getfullname() << endl;
	cout << "ID working: " << eID << endl;
	cout << "The amount of payment: " << salary << endl;
	cout << "His or her position: " << role << endl;
}


int main(){
	Student s(" 031200001239 ", " Truong Long ", "Binh ", " 20182906 ", 9.5f, 15.900f);
	s.showInfor();
    cout << "\nnghe trong tuong lai" << endl;
	Employee e("03120001239", " truong long", " binh ", "1324dsf43", 25.00f, "ki su cong nghe cao");
	e.showinfor();
    return 0;
 }
