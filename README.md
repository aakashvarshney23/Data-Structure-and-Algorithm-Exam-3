# Lab Exam 2 #
###### Thursday November 2, 2017 ######
In this exam you will be implementing the C++ standard library object, `map`. This object allows us to store an arbitrary number of key/value pairs. We can then recall the value by asking looking for the key in the map. For more information on maps, reference the [c++ std::map reference.](http://www.cplusplus.com/reference/map/map/)

You have been provided with a template for each of the map functions that you need to implement. You will need to implement each of the functions, as well as add any functions, class, or files required. 

Remember, this is an open book, open internet, open everything exam. The only stipulations are that all of the work you submit you wrote. You can't copy and paste code from the internet. We will be checking for that, and it is very easy to catch. Also, you can't communicate with your fellow classmates. Remember, this is a test. 

As for grading, you **must** turn in code that compiles! **TESTS THAT DON'T COMPILE WILL GET A ZERO!!** 


#### Functional Specification ####
*map()*: The default constructor. This should create an empty map.

*~map()*: Default destructor. Needs to delete each of the objects in the map.

*void insert(std::string key, int value)*: Insert a key pair into our map. Do nothing if key exists
 
 *void replace(std::string key, int value)*: Overwrite or insert a key par into our map. 

*int get(std::string key)*: Return the data for the given key. Throw an exception if the key doesn't exist in the map

*bool erase(std::string key)*: Remove the key and data from the map. Return true if it is erased, and false if nothing is erased.

*void map::clear()*: Empty the map by deleting all of the items in the map.

*int& operator[] (std::string key):* Replace the key with the given integer.

*void print()*: Print the map with the following format.
    
    Key0: Data0
    Key1: Data1
    Key2: Data2
    etc...

#### Hints ####
* You will be using a singly or doubly linked list. To store your data.
* You should test your functions using main, but like always, we will not be looking at your `main.cpp`.

  

