#include <iostream>
using namespace std;
#include <string>
#include <vector>
class vehicle {
  public:
  string name;
  int max_speed;
  vehicle(string n , int s){
    name = n;
    max_speed = s;
  }
};
class bus : public vehicle{
string seating_capacity;
  public:
  bus(string sc, string n, int s) {
    name = n;
    seating_capacity = sc;
    max_speed = s;
`}
};
class car : public vehicle{
  string model_name;
};
int main() {
vector <bus> bus_objects;
string user_choice;
cin>>user_choice;
while (user_choice == "yes"){
  }
};
