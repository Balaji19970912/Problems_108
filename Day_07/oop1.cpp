#include <iostream>
#include <string>
using namespace std;

class Cars {
  private:
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;
  public:
    void setData(string cname, string mname, string ftype, float m, double p) {
      company_name = cname;
      model_name = mname;
      fuel_type = ftype;
      mileage = m;
      price = p;
    }
    
    void displayData() {
      cout<<"Car details are:"<<endl;
      cout<<"Car company: "<<company_name<<endl;
      cout<<"Car model name: "<<model_name<<endl;
      cout<<"Fuel type: "<<fuel_type<<endl;
      cout<<"Car mileage: "<<mileage<<endl;
      cout<<"Car price: "<<price;
    }
};

int main() 
{
    cout << "Hello, World!"<<endl;
    Cars car1;
    car1.setData("Rolce Royce","Phantom", "Petrol", 3.6, 1200000000);
    car1.displayData();
    return 0;
}
