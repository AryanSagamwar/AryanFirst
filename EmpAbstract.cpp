#include<iostream>
using namespace std;
#include<string.h>

class Employee {
		int id;
		char name[20];
		float salary;

	public:

		Employee() {
			this->id =0;
			this->salary = 0;
			strcpy(this->name, "Not given");
		}

		Employee(int id, char * name,float salary) {
			this->id = id;
			strcpy(this->name,name);
			this->salary = salary;
		}
		void setId(int id) {
			this->id = id;
		}

		int getId() {
			return this->id;
		}
		void setName(char * name) {
			strcpy(this->name, name);
		}

		char* getName() {
			return this->name;
		}
		void setSalary() {
			this->salary = salary;
		}

		float getSalary() {
			return this->salary;
		}


		virtual float calSalary() = 0;//virtual function declaration

		virtual void display() { //virtual function
			cout<<"Id : "<<this->id<<"\n";
			cout<<"Name : "<<this->name<<"\n";
			cout<<"Salary : "<<this->salary<<"\n";
		}
};

class SalesManager : public Employee {
		float incentive ;
		int target;

public:
		SalesManager():Employee() {
			this->incentive = 0;
			this->target = 0;
		}

		SalesManager(int id,char*name,float salary,float incentive,int target):Employee(id,name,salary) {
			this->incentive = incentive;
			this->target = target;
		}

		void setIncentive(float in) {
			this->incentive = incentive;
		}

		void setTarget() {
			this->target = target;
		}

		float getIncentive() {
			return this->getIncentive();
		}

		int getTarget() {
			return this->getTarget();
		}

		float calSalary() {
			return this->getIncentive()  + this->getSalary();
		}

		void display() {
			Employee::display();
			cout<<"Incentive : "<<this->incentive<<"\n";
			cout<<"Target : "<<this->target<<"\n";

		}

};

class Hr : public Employee {
		float commission;

public:
		Hr():Employee() {
			this->commission= 0;
		}

		Hr(int id,char*name,float salary,float commission):Employee(id,name,salary) {
			this->commission = commission;
		}

		void setCommission(float cm) {
			this->commission  = cm;
		}

		float getCommission() {
			return this->getCommission();
		}


		float calSalary() {
			return this->getSalary()  + this->getCommission();
		}

		void display() {
			Employee::display();
			cout<<"Commission : "<<this->commission<<"\n";

		}

};

class Admin : public Employee {
		float allowance ;

public:
		Admin():Employee() {
			this->allowance = 0;

		}

		Admin(int id,char*name,float salary,float allowance):Employee(id,name,salary) {
			this->allowance = allowance;
		}

		void setAllowance(float alw) {
			this->allowance = alw;
		}

		float getAllowance() {
			return this->allowance;
		}

		float calSalary() {
			return this->getSalary()  + this->getAllowance();
		}

		void display() {
			Employee::display();
			cout<<"Allowance : "<<this->allowance<<"\n";

		}

};

int main() {
	Employee * e;
	
	SalesManager sm(123,"Kevan",4553.53f ,45.54f,555);
	e=&sm;
	e->display();
	return 0;
	
	Admin a(121,"Anji",7867.63f,544.66f);
	e=&a;
	e->display();
	return 0;
}