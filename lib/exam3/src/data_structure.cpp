#include "data_structure.h"
#include <string>
#include <sstream>
#include <cstdlib>

data_structure::data_structure() {
    // Default constructor: Generate an empty data structure
    head = new node(0);
    head->next = nullptr;
    head->prev = nullptr;
    count = 0;
}

data_structure::data_structure(std::string input_string) {
    // String constructor: Construct a data structure and store the input string into it
    std::stringstream ss(input_string);
    data_structure structure();        //not sure if its needed

    unsigned i;
    while (ss >> i) {
        node *input = new node(0);
        input->data = i;

        //inserting the node in the linked list
        insert_node(input);

        if (ss.peek() == ' ')
            ss.ignore();
        if (ss.peek() == ',')
            ss.ignore();
    }
}

data_structure::~data_structure() {
    // Default Destructor: Deconstruct the data structure
    node *temp;
    temp = head;
    while (head != nullptr) {
        temp = head->next;
        delete head;
        head = temp;
        count--;
    }
}

unsigned int data_structure::frequency(int input_character) {
    // Return the number of times the integer is in the data structure.
    node *temp = head->next;
    while (temp->data != input_character) {
        temp = temp->next;
    }
    if (temp == nullptr)
        return 0;
    else
        return temp->count;
}

int data_structure::most_frequent() {
    // Return the most frequent number in the data structure. If there is more than one, return the highest value
    if (head == nullptr)
        return 0;
    else {
        node *temp = head;
        int max = temp->count;
        while (temp != nullptr) {
            if (max > temp->count)
                max = temp->count;
            temp = temp->next;
        }
        return max;
    }

}

int data_structure::least_frequent() {
    // Return the least frequent number in the data structure. If there is more than one, return the lowest value
    if (head == nullptr)
        return 0;
    else {
        node *temp = head;
        int min = temp->count;
        while (temp != nullptr) {
            if (min < temp->count)
                min = temp->count;
            temp = temp->next;
        }
        return min;
    }
}

void data_structure::sort() {
    // Sort the data structure first by frequency, greatest to least and then by value, least to greatest.
    // Example: 1:3,42:4,17:3,11:1,46:1,3:2         sorted: 42:4,1:3,17:3,3:2,11:1,46:1
    node *temp = head;

}

std::istream &operator>>(std::istream &stream, data_structure &structure) {
    // Stream in a string, empty the current structure and create a new structure with the new streamed in string.
    std::string input;
    stream >> input;

    //empty the original data structure
    while (structure.count != 0) {
        node *ptr;
        ptr = (structure.head)->next;
        ptr->prev = nullptr;
        structure.head->next = ptr->next;
        if (structure.count != 1)
            ptr->next->prev = structure.head;
        ptr->next = nullptr;
        delete ptr;
        (structure.count)--;
    }
    data_structure data(input);
    structure = data;
    return stream;
}

std::ostream &operator<<(std::ostream &stream, const data_structure &structure) {
    // Stream out the data structure
    // Output in this format "<integer>:<frequency>,<integer>:<frequency>,<integer>:<frequency>"
    node *ptr = structure.head->next;
    while (ptr != nullptr) {
        stream << ptr->data << ": " << ptr->count << ", ";
        ptr = ptr->next;
    }
    return stream;
}

void data_structure::insert_node(node *data) {

    node *ptr;
    ptr = head->next;
    if (count == 0) {
        head->next = data;
        data->prev = head;
    } else {
        head->next = data;
        data->prev = head;
        data->next = ptr;
        ptr->prev = data;
    }
    count++;
}