#define _CRT_SECURE_NO_WARNINGS 1
#include <vector>
#include <iostream>
#include <fstream>
#include <map>
#include <queue>
#include <cstring>

class Compare {
public:
    bool operator() (const std::pair<std::string, int> pair1, const std::pair<std::string, int> pair2) {
        if (pair1.second > pair2.second)
            return false;
        if (pair1.second == pair2.second)
            if (pair1.first.compare(pair2.first) < 0)
                return false;
        return true;
    }
};

std::map<std::string, int> splitStrings(std::string str, std::string dl)
{
    std::string word = "";

    // to count the number of split strings
    int num = 0;

    // adding delimiter character at the end
    // of 'str'
    str = str + ' ';

    // length of 'str'
    int l = str.size();

    // traversing 'str' from left to right
    std::map<std::string, int> map;
    for (int i = 0; i < l; i++) {

        // if str[i] is not equal to the delimiter
        // character then accumulate it to 'word''
        if(dl.find(str[i]) == std::string::npos)
            word = word + str[i];

        else {

            // if 'word' is not an empty string,
            // then add this 'word' to the array
            // 'substr_list[]'
            
            if ((int)word.size() != 0) {
                bool exists = 0;
                for (auto i = map.begin(); i != map.end(); i++) {
                    //cout << i->first << "      " << i->second
                    if (word == i->first) {
                        i->second++;
                        exists = 1;
                    }
                }

                if (!exists)
                    map.insert(std::pair<std::string, int>(word, 1));
            }

            // reset 'word'
            word = "";
        }
    }

    // return the splitted strings
    return map;
}

int main()
{

    FILE* file = fopen("a.txt", "rb");

    if (file == nullptr) {
        printf("?");
        return 1;
    }

    std::string s;

    char buffer[4096];
    while (!feof(file)) {
        auto read = fread(buffer, 1, sizeof(buffer), file);
        s.append(buffer, read);
    }

    fclose(file);

    for (auto& c : s) {
        c = tolower(c);
    }

    std::string sep = " ,!.";
    std::map<std::string, int> map = splitStrings(s, sep);

    std::priority_queue<std::pair<std::string, int>, std::vector<std::pair<std::string, int>>, Compare> queue;

    for (const std::pair<std::string, int> pair: map) {
        queue.push(pair);
    }

    while (!queue.empty()) {
        std::cout << queue.top().first << " => " << queue.top().second << std::endl;
        queue.pop();
    }

}
