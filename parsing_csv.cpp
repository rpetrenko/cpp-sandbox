#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void print_vec(std::vector<int> &vec) {
    for(int v: vec) {
        cout << v << ' ';
    }
    cout << endl;
}

int main() {
    std::vector<int> vec;
    string snum;
    string line("1,2,3,4,5");
    cout << "original line " << line << endl;

    stringstream ss(line);
    while (getline(ss, snum, ',')) {
        vec.push_back(stoi(snum));
    }
    cout << "vector: ";
    print_vec(vec);

    return 0;
}
