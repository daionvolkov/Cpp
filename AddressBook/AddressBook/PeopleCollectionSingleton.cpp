#include "PeopleCollectionSingleton.h"


PeopleCollectionSingleton::PeopleCollectionSingleton() 
{
    collectionInstance = new PeopleCollection();
}

PeopleCollectionSingleton& PeopleCollectionSingleton::getInstance() 
{
    static PeopleCollectionSingleton instance;
    return instance;
}

PeopleCollection* PeopleCollectionSingleton::getCollectionInstance() 
{
    return collectionInstance;
}