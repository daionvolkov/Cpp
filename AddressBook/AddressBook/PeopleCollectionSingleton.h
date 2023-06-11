#pragma once
#include "PeopleCollection.h"


class PeopleCollectionSingleton
{
    private:
        PeopleCollection* collectionInstance;

        PeopleCollectionSingleton();

    public:
        static PeopleCollectionSingleton& getInstance();

        PeopleCollection* getCollectionInstance();
};

