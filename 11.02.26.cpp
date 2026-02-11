#include <iostream>
using namespace std;
#include <vector>


class teacher {
private:
  string name;
  string subject;
  string room;
  


public:
  teacher(){
    name = "George";
    subject = "Art";
    room = "G4";
    
  }
    subject = s;
    room = r;
  }
  
string getRoom(){
  return room;
}


string getSubject(){
  return subject;
}

string getName(){
  return name ;
}



};

int main() 
{
  
  teacher t1;
  cout<< "Teachers1: " <<t1.getName()<< " teaches" << t1.getSubject<< "in room" << t1.getRoom <<  end;
  return 0;
}

  

  teacher (string n, string s, string r){
    name = n; 
