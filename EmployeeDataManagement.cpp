# EmployeeDataManagement

#include<iostream>
#include<string>
using namespace std;

// structure 
struct employee{
	string name, post ;
	int age, salary, dateofjoining ;
	string id, passwrd1, idd ;
};
employee e[10];


// function of create accout 
void createAcc()
{
	me:
		
	for(int i=0;i<1;i++)
	{
		cout << "Enter Your E-mail id : " ;
		cin >> e[i].id ;
		cout << "Create a Password : " ;
		cin >> e[i].passwrd1 ;
	}
	
	const string passwrd1;
	const string id;
	
	string conform;
	cout << "re enter your password : " ;
	cin >> conform ;
	
	for(int i=0;i<1;i++)
	{
	if(conform == e[i].passwrd1)
	{
		cout << "Your Account Created Successfully !" << "\n\n" ;
	}
	else
	{
		cout << "Both Password Should Be Same !" << "\n\n" ;
		goto me;
	}
  }
}



//function to enter data
void enterinfo()
{
	rev:
		
	string log ;
	cout << "Enter E-mail id to fill data. " ;
	cin >> log ;
	for(int i=0;i<=1;i++)
	{
	if(e[i].id == log)
	{
		cout << "Login Successfully !" << "\n\n" ;
		goto eppp;
	}
	else
	{
		cout << "Somethimg Went Wrong ? try again " << "\n\n" ;
		goto rev;
   	}
    }
    eppp:
	int i, ip ;
	cout << "How Many Employee Data You Want To Enter ? " ;
	cin  >> ip ;
	
	for(i=0;i<ip;i++)
	{
		cout << "Your Name : " ;
		cin >> e[i].name ;
		
		cout << "Your E-mail id : " ;
		cin >> e[i].idd ; 
		
		cout << "Your Post : " ;
		cin >> e[i].post ;
		
		cout << "Your Salary : " ;
		cin >> e[i].salary ;
		
		cout << "Your Age : ";
		cin >> e[i].age ;
		
		cout << "Your Date Of Joining : " ;
		cin >> e[i].dateofjoining ;
	}
	cout << "Your Data Saved successfully ! " << "\n\n" ;
}



//to see the data
void show()
{
	back:
		
	string logi ;
	cout << "Enter E-mail id to See data. "  ;
	cin >> logi ;
	for(int i=0;i<=1;i++)
	{
	if(e[i].id == logi)
	{
		cout << "Login Successfully !" << "\n\n" ;
		goto see;
	}
	else
	{
		cout << "Somethimg Went Wrong ? try again " << "\n\n" ;
		goto back;
	}
	}
	
	see:
	
	int g;
	cout << "how many employee data you want to see ? ";
	cin >> g;
	
	cout << "Data is given below : " << "\n" << "\n" ;
	
	for(int i=0;i<g;i++)
	{
		cout << "Name             : " << e[i].name          << "\n" ;
		cout << "id               : " << e[i].idd            << "\n" ;
		cout << "post             : " << e[i].post          << "\n" ;
		cout << "Salary           : " << e[i].salary        << "\n" ;
		cout << "Age              : " << e[i].age           << "\n" ;
		cout << "Date of Joining  : " << e[i].dateofjoining << "\n\n" ;
	}
}



//modify data
void modify()
{
	ret:
		
	string login ;
	cout << "Enter E-mail id to modify data. " << "\n\n" ;
	cin >> login ;
	for(int i=0;i<=1;i++)
	{
	if(e[i].id == login)
	{
		cout << "\n\n Login Successfully !" << "\n\n" ;
		goto mod;
	}
	else
	{
		cout << "\n\n Somethimg Went Wrong ? try again " << "\n\n" ;
		goto ret;
	}
	}
	
	mod:
		
	int pg;
	cout << "how many employee data you want to modify ? ";
	cin >> pg;
	
	cout << "Enter New Data : " << "\n" << "\n" ;
	for(int i=0;i<pg;i++)
	{
		cout << "Your Name : " ;
		cin >> e[i].name ;
		
		cout << "Your E-mail id : " ;
		cin >> e[i].idd ; 
		
		cout << "Your Post : " ;
		cin >> e[i].post ;
		
		cout << "Your Salary : " ;
		cin >> e[i].salary ;
		
		cout << "Your Age : ";
		cin >> e[i].age ;
		
		cout << "Your Date Of Joining : " ;
		cin >> e[i].dateofjoining ;
	}
	cout << "\n\n New Deatils Saved Successfully !" << "\n\n" ;
}


// delete data
void deletee()
{
	retn:
		
	string lgin ;
	cout << "Enter E-mail id to delete data. " << "\n\n" ;
	cin >> lgin ;
	for(int i=0;i<=1;i++)
	{
	if(e[i].id == lgin)
	{
		cout << "\n\nLogin Successfully !" << "\n\n" ;
		goto del;
	}
	else
	{
		cout << "\n\n Somethimg Went Wrong ? try again " << "\n\n" ;
		goto retn;
	}
	}
	
	del:
	
	int df;	
	cout << "how many employee data you want to delete ? " ;
	cin >> df;
		
	for(int i=0;i<df;i++)
	{
		if(e[i].id == lgin)
		{
			e[i].name=e[i+1].name;
			
			e[i].idd=e[i+1].id;

			e[i].salary=e[i+1].salary;
				
			e[i].post=e[i+1].post;
				
			e[i].age=e[i+1].age;
				
		    e[i].dateofjoining=e[i+1].dateofjoining;
		    
		    cout<<"Your required record is deleted permanently you cannot access old data. "<< "\n\n";
			
			cout << "enter new details to continu. " << "\n\n" ;
			
			df--;
			
			break;
	   	}
    }
}


int main()
{
	cout << "\nNote: create new account first to use other features." << "\n" ;
		
	menu:
	cout << " __________________________________________" << "\n" ;
	cout << "|              !! Welcome !!               |" << "\n" ;
	cout << "|  Simple Employee Data Management System  |" << "\n" ;
	cout << "|__________________________________________|" << "\n\n" ;
	
	options:
	cout << " _____________________________" << "\n" ;
	cout << "|                             |" << "\n" ;
	cout << "|  Press 1 = Create account   |" << "\n" ;
	cout << "|  Press 2 = Enter data       |" << "\n" ;
	cout << "|  Press 3 = See data         |" << "\n" ;
	cout << "|  Press 4 = Modify data      |" << "\n" ;
	cout << "|  Press 5 = Delete data      |" << "\n" ;
	cout << "|  Press 6 = Exit             |" << "\n" ;
	cout << "|_____________________________|" << "\n\n" ;
	
	int press ;
	cout << "Press Any Option From Above : " ;
	cin  >> press ;
	
	if(press == 1)
	{
		createAcc();
		goto options;
	}
	else if(press == 2)
	{
		enterinfo();
		goto options;
	}
	else if(press == 3)
	{
		show();
		goto options;
	}
	else if(press == 4)
	{
		modify();
		goto options;
	}
	else if(press == 5)
	{
		deletee();
		goto options;
	}
	else if(press == 6)
	{
		goto exit;
	}
	else
	{
		cout << "Invalid Input ? try again... " << "\n\n";
		goto menu;
	}
	exit:
	return 0;
}
