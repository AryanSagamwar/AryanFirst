#include<stdio.h>
#include<string.h>

struct Vehicle {
		char name[20];
		double price;
		char companyName[20];
		int noOfSeats;

		Vehicle() {
			printf("Default of vehicle called\n");
			strcpy(this->name,"Not Given");
			this->price=0;
			strcpy(this->companyName,"Not Given");
			this->noOfSeats=0;
		}
		Vehicle( char* name,double price,char* companyName,int seats) {
			printf("parameterised of vehicle called\n");
			strcpy(this->name,name);
			this->price=price;
			strcpy(this->companyName,companyName);
			this->noOfSeats=seats;
		}
		void setName(const char* name) {
			strcpy(this->name,name);
		}
		void setPrice(double price) {
			this->price=price;
		}
		void setCompanyName(char* companyName) {
			strcpy(this->companyName,companyName);
		}
		void setSeats(int seats) {
			this->noOfSeats = seats;
		}
		char* getName() {
			return this->name;
		}
		double getPrice() {
			return this->price;
		}
		const char* getCompanyName() {
			return this->companyName;
		}
		int getSeats() {
			return this->noOfSeats;
		}
		virtual void brake() {
			printf("Vehicle Stopped\n");
		}
		virtual void display() {
			printf("Name : %s \n",this->name);
			printf("Price :%lf\n",this->price);
			printf("Company : %s\n",this->companyName);
			printf("Number of Seats : %d \n",this->noOfSeats);
		}
};
struct Bike : public Vehicle {
		int noOfStands;

		Bike() {
			printf("default of Bike called\n");
			noOfStands=0;
		}
		Bike( char* name,double price,char* companyName,int seats,int noOfStands) : Vehicle(name,price,companyName,seats) {
			printf("parameterised of Bike called\n");
			this->noOfStands = noOfStands;
		}
		void setNoOfStands(int stand) {
			this->noOfStands=stand;
		}
		int getNoOfStands() {
			return this->noOfStands;
		}
		void brake() {
			printf("Disc brake applied\n");
		}
		
			

		void display() {
			Vehicle :: display();
			printf("No of Stands  : %d \n",this->noOfStands);
		}
};
struct Car : public Vehicle {
		int noOfDoors;

		Car() {
			printf("default of car called\n");
			noOfDoors=0;
		}
		Car( char* name,double price, char* companyName,int seats,int noOfDoors) : Vehicle(name,price,companyName,seats) {
			printf("parameterised of car called\n");
			this->noOfDoors = noOfDoors;
		}
		void setNoOfDoors(int stand) {
			this->noOfDoors=stand;
		}
		int getNoOfDoors() {
			return this->noOfDoors;
		}
		void brake() {
			printf("Drum brake applied\n");
		}
		void display() {
			Vehicle :: display();
			printf("No of Doors : %d\n ",this->noOfDoors);
		}
};

struct Bus : public Vehicle {
		int batteryCapacity;

		Bus() {
			printf("default of bus called\n");
			batteryCapacity=0;
		}
		Bus( char* name,double price, char* companyName,int seats,int batteryCapacity) : Vehicle(name,price,companyName,seats) {
			printf("\nparameterised of bus called\n");
			this->batteryCapacity = batteryCapacity;
		}
		void setBatteryCapacity(int batteryCapacity) {
			this->batteryCapacity=batteryCapacity;
		}
		int getBatteryCapacity() {
			return this->batteryCapacity;
		}
		void brake() {
			printf("Air brake applied");
		}
		void display() {
			Vehicle :: display();
			printf("Battery capacity  : %d ",this->batteryCapacity );
		}
};
int main1() {
	Vehicle v1;
	v1.display();
	printf("\n");
	Bike b1("Classic 350",350000,"Royal Enfield",2,2);
	b1.display();
	printf("\n");
	Car c1("Ertiga",1200000,"Maruti Suzuki",7,5);
	c1.display();
	printf("\n");
	Bus b2("JBM",348474,"JBM Auto",60,350);
	b2.display();
}

int main2() {
	Vehicle v1;
	Vehicle*vp;
	vp=&v1;
	vp->display();
	printf("\n");
	Bike*bp;
	Bike b1("Classic 350",350000,"Royal Enfield",2,2);
	bp=&b1;
	bp->display();
	printf("\n");
	Car * cp;
	Car c1("Ertiga",1200000,"Maruti Suzuki",7,5);
	cp=&c1;
	cp->display();
	printf("\n");
	Bus * bs;
	Bus b2("JBM",348474,"JBM Auto",60,350);
	bs=&b2;
	bs->display();
}
int main() {
	Vehicle v1;
	Vehicle*vp;
	vp=&v1;
	vp->display();
	vp->brake();
	printf("\n");
	Bike b1("Classic 350",350000,"Royal Enfield",2,2);
	vp=&b1;
	vp->display();
	vp->brake();
	printf("\n");
	Car c1("Ertiga",1200000,"Maruti Suzuki",7,5);
	vp=&c1;
	vp->display();
	vp->brake();
	printf("\n");
	Bus b2("JBM",348474,"JBM Auto",60,350);
	vp=&b2;
	vp->display();
	vp->brake();
}
