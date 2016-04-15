#include "Chef.h"
#include <string>
using namespace std;

Chef::Chef(){
	Employee();
	SetCuisine("None");
}

Chef::Chef(string n, int i, char t, string c){
	Employee(n, i, t);
	SetCuisine(c);
	SetName(n);
	SetId(i);
	SetType(t);
}

void Chef::SetCuisine(string c){
	cuisine = c;
} 

string Chef::GetCuisine(){
	return cuisine;
}

void Chef::display(ostream & out) const{
	Employee::display(out);
	out << "Cuisine: " << cuisine << endl;
}

int Chef::GetSalary(int profit){
	int salary = (profit * 0.2)+10000;
	return salary;
}
