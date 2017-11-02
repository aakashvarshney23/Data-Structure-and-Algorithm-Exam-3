#ifndef MAP_H
#define MAP_H
#include <string>

class map
{
public:
    map();  // Default constructor
    ~map(); // Default desctructor

    void insert(std::string key, int value); // Insert a key pair into our map. Do nothing if key exists
    void replace(std::string key, int value); // Overwrite or insert a key par into our map

    int get(std::string key); //Return the data for the given key. Throw an exception if the key doesn't exist in the map
    bool erase(std::string key); //Remove the key and data from the map. Return true if it is erased, and

    void print(); // Print the map

    void clear();  //Empty the map

    int& operator[](std::string key); // Replace the key with the given integer.
};


#endif //MAP_H
