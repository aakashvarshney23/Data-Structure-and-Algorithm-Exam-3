#ifndef EXAM_3_DATA_STRUCTURE_H
#define EXAM_3_DATA_STRUCTURE_H
#include <string>
#include <ostream>

class data_structure
{
private:

public:
    data_structure();  // Default constructor
    explicit data_structure(std::string input_string); // String constructor
    ~data_structure(); // Default destructor

    void sort(); // Sort the data structure first by frequency, greatest to least and then by character value, least to greatest.
    char most_frequent(); // return the most frequent character in data structure
    char least_frequent(); // return the least frequent character in the data structure
    unsigned int frequency(char input_character); // return the frequency of a given character

    friend std::ostream &operator<<(std::ostream &stream, const data_structure &structure);// Stream Insertion
    friend std::istream &operator>>(std::istream &stream, data_structure &structure); // Stream Extraction
};


#endif //EXAM_3_DATA_STRUCTURE_H
