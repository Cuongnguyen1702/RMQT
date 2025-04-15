#include "town.h"
#include "person.h"
Town::Town() {
    familyCount = 0;
    QVector<Person> owner;
}
Town::~Town() {}
int Town::getFamilyCount() const{
    int count = 0;
    for (Person person:owner){
        if(person.getIsHeadOfFamily()){
            ++count;
        }
    }
    return count;
}
