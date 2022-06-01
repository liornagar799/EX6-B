#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>


using namespace std;


namespace ariel{

class team{

public:
string name;
int talent;
int how_mach;
int difference;
int win;

team(){
 this->name="";
 this->talent=0;
 this->how_mach=0;
 this->difference=0;
 this->win=0;
}

team(string name1,int t){
 this->name= name1;
 this->talent=t;
 this->how_mach=0;
 this->difference=0;
this->win=0;

   
}


};


}