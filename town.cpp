#include "town.h"
#include <string>
Town::Town() {}
Town::~Town() {}
void Town::setName(const std::string& name){
    nameTown = name;
}
std::string Town::getName() const{
    return nameTown;
}
int Town::getFamilyNum() const{
    return familyNum;
}

void Town::showInfo(){};
void Town::addFamily(){
    familyNum++;
};
