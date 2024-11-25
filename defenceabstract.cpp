#include<stdio.h>
#include<string.h>
struct Defence
{
	int officerId;
	char officerName[20];
	double salary;
	Defence()
	{
		printf("\nDefault Constructor of Defence called\n");
		this->officerId=0;
		strcpy(this->officerName,"None");
		this->salary=0;
	}
	Defence(int officerId,const char*officerName,int salary)
	{
		printf("\nParameterised Constructor of Defence called\n");
		this->officerId=officerId;
		strcpy(this->officerName,officerName);
		this->salary=salary;
	}
	void setOfficerId(int officerId)
	{
		this->officerId=officerId;
	}
	void setOfficerName(char*officerName)
	{
		strcpy(this->officerName,officerName);
	}
	void setSalary(double salary)
	{
		this->salary=salary;
	}
	int getOfficerId()
	{
		return this->officerId;
	}
	char* getOfficerName()
	{
		return this->officerName;
	}
	double getSalary()
	{
		return this->salary;
	}
	virtual void Fire()=0;
	virtual void display()
	{
		printf("\n");
		printf("The Officer_Id is: %d\n",this->officerId);
		printf("The Officer_Name is: %s\n",this->officerName);
		printf("The Salary is: %.1lf\n",this->salary);
	}
};
struct Army:public Defence
{
	int guns;
	int tanks;
	Army():Defence()
	{
		printf("Default Constructor of Army called");
		this->guns=0;
		this->tanks=0;
	}
	Army(int officerId,const char*officerName,double salary,int guns,int tanks): Defence(officerId,officerName,salary)
	{
		printf("Parameterised Constructor of Army is called");
		this->guns=guns;
		this->tanks=tanks;
	}
	void setGuns(int guns)
	{
		this->guns=guns;
	}
	void setTanks(int tanks)
	{
		this->tanks=tanks;
	}
	int getGuns()
	{
		return this->guns;
	}
	int getTanks()
	{
		return this->tanks;
	}
	void Fire()
	{
		printf("\nArmy fires with Tank and Guns\n");
	}
	void display()
	{
		printf("\n");
		Defence::display();
		printf("The Number of Guns is: %d\n",this->guns);
		printf("The Number of Tanks is: %d\n",this->tanks);
	}
};
struct Airforce:public Defence
{
	int jets;
	int helicopter;
	Airforce():Defence()
	{
		printf("Default Constructor of Airforce called");
		this->jets=0;
		this->helicopter=0;
	}
	Airforce(int officerId,const char*officerName,double salary,int jets,int helicopter): Defence(officerId,officerName,salary)
	{
		printf("Parameterised Constructor of Airforce is called");
		this->jets=jets;
		this->helicopter=helicopter;
	}
	void setJets(int jetss)
	{
		this->jets=jets;
	}
	void setHelicopter(int helicopter)
	{
		this->helicopter=helicopter;
	}
	int getJets()
	{
		return this->jets;
	}
	int getHelicopter()
	{
		return this->helicopter;
	}
	void Fire()
	{
		printf("\nAirForce fires with Jets and Helicopters\n");
	}
	void display()
	{
		printf("\n");
		Defence::display();
		printf("The Number of Jets is: %d\n",this->jets);
		printf("The Number of Helicopter is: %d\n",this->helicopter);
	}
};
struct Navy:public Defence
{
	int ships;
	int submarine;
	Navy():Defence()
	{
		printf("Default Constructor of Navy called");
		this->ships=0;
		this->submarine=0;
	}
	Navy(int officerId,const char*officerName,double salary,int ships,int submarine): Defence(officerId,officerName,salary)
	{
		printf("Parameterised Constructor of Navy is called");
		this->ships=ships;
		this->submarine=submarine;
	}
	void setShips(int ships)
	{
		this->ships=ships;
	}
	void setSubmarine(int submarine)
	{
		this->submarine=submarine;
	}
	int getShips()
	{
		return this->ships;
	}
	int getSubmarine()
	{
		return this->submarine;
	}
	void Fire()
	{
		printf("\nNavy Fire with Ships and Submarines\n");
	}
	void display()
	{
		printf("\n");
		Defence::display();
		printf("The Number of Ships is: %d\n",this->ships);
		printf("The Number of Submarine is: %d\n",this->submarine);
	}
};
int main_1()
{
//	Defence d1(10,"Dip",25000);
//	Defence* de;
//	de=&d1;
//	de->display();
	
	Army a1(11,"Abhi",30000,2,3);
	Army* ae;
	ae=&a1;
	ae->display();
	
	Airforce f1(12,"Mayank",35000,5,4);
	Airforce* fe;
	fe=&f1;
	fe->display();
	
	Navy n1(13,"Rushi",40000,6,7);
	Navy* ne;
	ne=&n1;
	ne->display();
	
	return 0;
}
int main()
{
	//Defence d1(10,"Dip",25000);
	Defence* de;
	//de=&d1;
	//de->display();
	//de->Fire();
	
	Army a1(11,"Abhi",30000,2,3);
	de=&a1;
	de->display();
	de->Fire();
	
	Airforce f1(12,"Aman",35000,5,4);
	de=&f1;
	de->display();
	de->Fire();
	
	Navy n1(13,"Rushi",40000,6,7);
	de=&n1;
	de->display();
	de->Fire();
}