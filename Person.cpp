#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
    std::string mail;
};

void fillObjects ( Person& p);
void showObjects (const Person& p);

int main()
{
  int n;
  std::cout << "Enter the number of people: ";
  std::cin >> n;
  std::cin.get();
  Person* arr = new Person[n];
  for( int i=0 ; i<n ; ++i ) 
        fillObjects(arr[i]);
  
  for( int i=0 ; i<n ; ++i ) {
    std::cout<<"The value of (" << i+1 << ") object is: ";
    showObjects(arr[i]);
  }
  
  return 0;
}

void fillObjects ( Person& p) {
  std::cout << "Etner name of Person: ";
	std::getline(std::cin, p.name);
	std::cout << "Etner  the age: ";
	std::cin >> p.age;
	std::cin.get();
	std::cout << "Enter the  email: ";
	std::getline(std::cin, p.mail);
}

void showObjects (const Person& p) {
  std::cout << "Person's name is: " << p.name <<  ".Age is: " << p.age << ". Email is: " << p.mail<< std::endl;

}
