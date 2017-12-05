#include "data_structure.h"
#include <string>

data_structure::data_structure() {
    // Default constructor: Generate an empty data structure

}

data_structure::data_structure(std::string input_string) {
    // String constructor: Construct a data structure and store the input string into it

}

data_structure::~data_structure() {
    // Default Deconstructor: Deconstruct the data structure
}

unsigned int data_structure::frequency(char input_character) {
    // Given a character, return the frequency of that character in the data structure.
    return 0;
}

char data_structure::most_frequent() {
    // Return the most frequent character in the data structure
    return 0;
}

char data_structure::least_frequent() {
    // Return the least frequency character int the data structure that actually exists
    return 0;
}

void data_structure::sort() {
    // Sort the data structure first by frequency, greatest to least and then by character value, least to greatest.
    // Example: a:3,z:4,c:3,d:1,v:1,e:2         sorted: z:4,a:3,c:3,e:2,d:1,v:1
}

std::istream &operator>>(std::istream &stream, data_structure &structure) {
    // Stream in a string, deconstruct the current data structure and create a new data structure with the new streamed
    // in string.
    return stream;
}

std::ostream &operator<<(std::ostream &stream, const data_structure &structure) {
    // Stream out the data structure
    // Output in this format "<character>:<frequency>,<character>:<frequency>,<character>:<frequency>"
    return stream;
}
