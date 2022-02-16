#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>

#define NUM_FIELDS 3
struct SplitLine {
    std::string fields[NUM_FIELDS];
};

enum rIndex {
    STUSDENT_ID = 0,
    SUBJECT,
    MARKS
};

int processData(std::vector<struct SplitLine> data) {

    std::map<int, int> student;

    for (auto record : data) {
        int sId = stoi(record.fields[STUSDENT_ID]);
        int sMarks = stoi(record.fields[MARKS]);

        auto itr = student.find(sId);
        if (itr != student.end()) {
            int tempMarks = sMarks + itr->second;
            itr->second = tempMarks;
        } else {
            student.insert(std::make_pair(sId, sMarks));
        }
    }

    int count = 0;
    for (auto s : student) {
        if (s.second >= 100) {
            count++;
        }
    }
    return count;
}

int main(void) {
    std::ifstream in("input.txt");
    std::vector<struct SplitLine> input_data;
    while (in) {
        struct SplitLine line;
        for (int i = 0; i<NUM_FIELDS; i++) {
            if (i == NUM_FIELDS - 1)
                std::getline(in, line.fields[i]);
            else
                std::getline(in, line.fields[i], ',');
        }
        if (line.fields[0] != "")
            input_data.push_back(line);
    }
    std::ofstream out("output.txt");
    out << processData(input_data) << std::endl;
    return 0;
}