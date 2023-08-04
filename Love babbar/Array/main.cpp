#include <iostream>
#include <string.h>
using namespace std;

class Employee{
    public:
    string str = "Harry Bhai";
    int salary = 100000;
    void PrintEmployee(string str, int salary){
        cout<< "name of hr is : "<<this->str<< " and sallary of hr is : "<<this->salary<<endl;
    }
};
int main(){
    // cout<< "Hello World!";
    // create a object
    Employee hr;
    hr.PrintEmployee("Harry", 50000);
    hr.PrintEmployee("Kamlesh Kumar", 70000);
    // hr.PrintEmployee();
}