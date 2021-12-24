#include <iostream>
#include <cstring>

using namespace std;


class Employee{
	
  string Name;

   int IDNumber;
	string Department;
	string Position;


	
public:

	Employee()
	{

		Name = "";
		IDNumber = 0;
		Department = "";
		Position = "";

	}
	
	void createName(string nameGivenByEmployee)
	{
		nameGivenByEmployee = Name;
	}
	

	void createIDNunmber(int ID)

	{
		ID = IDNumber;
	}
	

	void createDepartment(string nameofDepartment)
	{
		nameofDepartment = Department;
	}
	

	void createPosition (string nameOfPosition)
	{
		nameOfPosition = Position;
	}
	
	string retrieveName()
	{
		return (Name);
	}
	

	int retrieveIDNumber()
	{
		return IDNumber ;
	}
	

	string retrieveDepartment()
	{
		return Department;
	}
	
	string retrievePosition()
	{
		return Position ;
	}
	
	void displayRecord();
};



void Employee::displayRecord()
{
	cout << "Name: " << retrieveName() << endl;
	cout << "ID: " << retrieveIDNumber() << endl;
	cout << "Department: " << retrieveDepartment() << endl;
	cout << "Posistion: " << retrieveDepartment() << endl;
}

int main()
{
	const int size = 3;
	Employee employee[size];
	
	string nameGivenByEmployee, nameofDepartment, nameOfPosition;
	int ID;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter the Employee name: " << endl;
		cin >> nameGivenByEmployee;
		employee[i].createName(nameGivenByEmployee);
		
		cout << "Enter the Employees ID: " << endl; 
		cin >> ID;
		employee[i].createIDNunmber(ID);
		
		cout << "Enter the Employees Department: " << endl;
		cin >> nameofDepartment;
		employee[i].createDepartment(nameofDepartment);
		
		cout << "Enter the Employees Posistion: " << endl;
		cin >> nameOfPosition;
		employee[i].createPosition(nameOfPosition);
	}

return 0;


}
