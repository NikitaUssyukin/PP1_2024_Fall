#include <iostream>
#include <map>

using namespace std;

int main() {

    freopen("input.txt", "r", stdin);

    map<string, string> m;

    int n;
    cin >> n;

    while(n > 0) {

        string assistant;
        int num_of_students;
        cin >> assistant >> num_of_students;

        while(num_of_students > 0) {

            string student;
            cin >> student;

            m[student] = assistant;

            --num_of_students;
        }

        --n;
    }

    int m_requests;
    cin >> m_requests;

    while(m_requests > 0) {

        string student;
        cin >> student;

        if(m[student] != "") {
            cout << m[student] << endl;
        }
        else {
            cout << "F" << endl;
        }

        --m_requests;
    }

    return 0;
}