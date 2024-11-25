
#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
    Employee()
    {
        printf("\nemployee default constructor called");
        this->id = 0;
        strcpy(this->name,"not given!");
        this->salary = 0;
    }
    Employee(int id,char* name,float salary)
    {
        printf("\nemployee parameterized constructor called");
        this->id = id;
        strcpy(this->name,name);
        this->salary = salary;
    }
    void setid(int a)
    {
        this->id=a;
    }
    void setname(const char* a)
    {
        strcpy(this->name,a);
    }
    void setsalary(float a)
    {
        this->salary=a;
    }
    int getid()
    {
        return this->id;
    }
    char* getname()
    {
        return this->name;
    }
   float getsalary()
    {
        return this->salary;
    }
   virtual float calSalary()
    {
    	return this->salary;
	}
    virtual void display() // check withot virtual keyword for poc
    {
        printf("\nId : %d",this->id);
        printf("\nName : %s",this->name);
        printf("\nsalary : %f",this->salary);
    }
};// Employee Ends here
struct salesManager :public Employee
{
    int target;
    int incentive;
    salesManager() : Employee()
    {
        printf("\nSalesManager defalut constructor called");
        this->target = 0;
        this->incentive = 0;
    }
    salesManager(int id,char* name,float salary,int target,int incentive) : Employee(id,name,salary) //parameter intialization list

    {
        printf("\nsalesmanager parameterized constructor called");
        this->target = target;
        this->incentive = incentive;
    }

    void settarget(int a)
    {
        this->target=a;
    }
    void setincentive(int a)
    {
        this->incentive=a;
    }
    int gettarget()
    {
        return this->target;
    }
    int getincentive()
    {
        return this->incentive;
    }
     float calSalary()
    {
    		this->salary=this->salary+this->incentive;
    	return this->salary;
	}
    void display()
    {
        Employee::display();
        printf("\nSalesManager Target : %d",this->target);
        printf("\nSalesManager Incentive : %d",this->incentive);

    }
};//Salesemanager Ends here
struct Admin :public Employee
{
    int allowans;
    Admin():Employee()
    {
        printf("\nAdmin default constructor called");
        this->allowans = 0;
    }
    Admin(int id, char* name,float salary,int allowans) : Employee(id,name,salary)
    {
        printf("\nAdmin parameterized constructor called");
        this->allowans = allowans;
    }
    void setallowans(int a)
    {
        this->allowans=a;
    }
    int getallowans()
    {
        return this->allowans;
    }
    virtual float calSalary()
    {
    		this->salary=this->salary+this->allowans;
    	return this->salary;
	}
    void display()
    {
        Employee::display();
        printf("\nAdmin Allowans : %d",this->allowans);
    }
};//Admind ends here
struct Hr :public Employee
{
    int commission;
     Hr():Employee()
    {
        printf("\nHR default constructor called");
        this->commission = 0;
    }
    Hr(int id,char* name,float salary,int commision):Employee(id,name,salary)
    {
        printf("\nHR parameterized constructor called");
        this->commission = commision;
    }
    void setcommission(int a)
    {
        this->commission=a;
    }
    int getcommission()
    {
        return this->commission;
    }
   virtual  float calSalary()
    {
    	this->salary=this->salary+this->commission;
    	return this->salary;
	}
    void display()
    {
        Employee::display();
        printf("\nHR Commission : %d",this->commission);
    }
};// Hr ends here
int main1()
{
    Employee e1;
    e1.display();
    printf("\n");
    salesManager s2(1,"aaaa",10000.54f,45,3000);
    s2.display();
    printf("\n");
    Admin a2(2,"bbbbb",20000.66f,4000);
    a2.display();
    printf("\n");
    Hr h2(3,"cccc",30000.76f,5000);
    h2.display();
}
int main2()
{
    Employee e1;
    Employee* ep=&e1;
    ep->display();
    printf("\n");
    salesManager s2(1,"aaaa",10000.45f,45,3000);
    salesManager* sp=&s2;
    sp->display();
    printf("\n");
    Admin a2(2,"bbbbb",20000.55f,4000);
    Admin* ap=&a2;
    ap->display();
    printf("\n");
    Hr h2(3,"cccc",30000.55f,5000);
    Hr* hp=&h2;
    hp->display();
}
int main()
{
    Employee e1;
    Employee* ep=&e1;
    ep->display();
    printf("\n");
    salesManager s2(1,"aaaa",10000.77f,45,3000);
    ep=&s2;
    ep->calSalary();
    ep->display();
    printf("\n");
    Admin a2(2,"bbbbb",20000.88f,4000);
    ep=&a2;
    ep->calSalary();
    ep->display();
    printf("\n");
    Hr h2(3,"cccc",30000.65f,5000);
    ep=&h2;
    ep->calSalary();
    ep->display();
}
