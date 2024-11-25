#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Employee {
	int id;
	char name[20];
	float salary;
	Employee() {
		printf("\nemployee default constructor called");
		this->id = 0;
		strcpy(this->name,"not given!");
		this->salary = 0;
	}
	Employee(int id,char* name,float salary) {
		printf("\nemployee parameterized constructor called");
		this->id = id;
		strcpy(this->name,name);
		this->salary = salary;
	}
	void setid(int a) {
		this->id=a;
	}
	void setempName(const char* a) {
		strcpy(this->name,a);
	}
	void setsalary(float a) {
		this->salary=a;
	}
	int getid() {
		return this->id;
	}
	char* getname() {
		return this->name;
	}
	float getsalary() {
		return this->salary;
	}
	void display() {
		printf("\nEmployee Id : %d",this->id);
		printf("\nEmployee Name : %s",this->name);
		printf("\nEmployee salary : %f\n",this->salary);
	}
};
// Employee Ends here

struct salesManager :public Employee { //public ==is a relationship --inheritance
	int target;
	int incentive;

	salesManager():Employee()
//    salesManager()
	{
		printf("\nSalesManager defalut constructor called\n");
//        this->id = 0;
//        strcpy(this->name,"not given!");
//        this->salary = 0;
		this->target = 0;
		this->incentive = 0;
	}
	salesManager(int id,char* name,float salary,int target,int incentive):Employee(id,name,salary) {
		printf("\nsalesmanager parameterized constructor called\n");
		this->target = target;
		this->incentive = incentive;
	}
	void settarget(int a) {
		this->target=a;
	}
	void setincentive(int a) {
		this->incentive=a;
	}
	int gettarget() {
		return this->target;
	}
	int getincentive() {
		return this->incentive;
	}
	void display() {
		printf("\n");
		Employee::display();
		printf("\nSalesManager Target : %d",this->target);
		printf("\nSalesManager Incentive : %d",this->incentive);

	}
};
//Salesemanager Ends here
//Admin strats here
struct Admin :public Employee {
	int allowance;

	Admin():Employee() {
		printf("\nAdmin default constructor called");
		this->allowance = 0;
	}

	Admin(int id, char*name,float salary,int allowance):Employee(id,name,salary) {
		printf("\nAdmin parameterised constructor called");
		this->allowance =allowance;
	}


	void setAllowance(int allowance) {
		this->allowance =allowance;
	}

	int getAllowance() {
		return this->allowance;
	}

	void display() {
		printf("\n");
		Employee::display();
		printf("Allowance : %d \n",this->allowance);
	}
};
//Admin ends here
struct Hr :public Employee {

	int commission;

	Hr():Employee() {
		printf("\nDefault hr constructor called\n");
		this->commission = 0;

	}

	Hr(int id,char * name,float salary,int comm):Employee(id,name,salary) {
		printf("\nparameterised hr constructor called\n");
		this->commission = comm;

	}



	void setCommission(int comm) {
		this->commission = comm;
	}


	int getCommission() {
		return this->commission;
	}


	void display() {
		printf("\n");
		Employee::display();
		printf("Commission : %d \n",this->commission);

	}

};
int main1() {
	Employee e1(4,"aman",45666.55);
	e1.display();
	salesManager s2(102,"aryan",350000,500,100);
	s2.display();

	Admin a2(111,"jfj",2344.44f,443);
	a2.display();

	Hr h2(123,"Virat",43566.76f,3500);
	h2.display();
}

int main() {
	printf("in main \n");
	Employee e1(4,"aman",45666.55);
	e1.display();

	printf("\n");
	salesManager * s;
	salesManager s2(102,"aryan",350000,500,100);
	s = &s2;
	s->display();
	printf("\n");

	Admin * a;
	Admin a2(111,"jfj",2344.44f,443);
	a = &a2;
	a->display();
	printf("\n");

	Hr * h;
	Hr h2(123,"Virat",43566.76f,3500);
	h = &h2;
	h->display();
}
int main2() {
	Employee e1(4,"aman",45666.55);
// ep.display();
	Employee* ep;
	ep=&e1;
	ep->display();
	salesManager s2(102,"aryan",350000,500,100);
//     salesManager* ep;
	ep=&s2;
	ep->display();

	Admin a2(111,"jfj",2344.44f,443);
//  Admin*ep;
	ep=&a2;
	ep->display();

	Hr h2(123,"Virat",43566.76f,3500);
//    Hr*ep
	ep=&h2;
	ep->display();
}



