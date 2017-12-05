# Lab Exam 3 #
###### Tuesday December 5, 2017 ######

For your final lab exam you will be creating a data structure that holds both a character and an unsigned integer. This structure will be generated by parsing a string and inserting each of the characters into the structure. You can **implement** any structure you want, but some structures are inherently better than others for this assignment. 

Your structure needs to support the functions already provided in the template, and you can add any functions you need into the *private* section of the data structure. There should be no other public functions other than the ones provided to you. 

We have provided you with all of the tests needed to test this exam, and we will not be changing out the tests when we grade the exam. So you have the answers to the test, all you need to do is to write the code to make it work. As for grading, you **must** turn in code that compiles! **TESTS THAT DON'T COMPILE WILL GET A ZERO!!** 


#### Functional Specification ####
*data_structure()*: The default constructor. This should create an empty structure

*data_structure(std::string input)*: Construct a structure using the given string input 

*~data_structure()*: Default destructor. Needs to delete each of the objects in the structure
 
*unsigned int get_frequency(char key)*: Return the number of times the character is in the data structure. Return 0 if the character is not in the structure, because it has a frequency of 0 if it isn't in the structure.

*char most_frequent()*: Return the most frequent character in data structure

*char least_frequent()*: Return the least frequent character in the data structure

*void sort()*: Sort the data structure first by frequency, greatest to least and then by character value, least to greatest.

*friend std::ostream &operator<<(std::ostream &stream, const data_structure &structure)*: Stream Insertion. Used to create a stream for printing using cout or converting into a string.

*friend std::istream &operator>>(std::istream &stream, data_structure &structure)*: Stream Extraction. Used to stream in a string and store that input into the structure. The data that was previously in the structure needs to be deleted and then the new string needs to be inserted. 
    

#### Hints ####
* You should test your functions using main, but like always, we will not be looking at your `main.cpp`.

  

