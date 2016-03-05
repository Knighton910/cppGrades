// Computing student grades

#include <iomanip>
#include <ios>
#include <iostream>
#include <string>


using namespace std;        using std::string;
using std::setprecision;    using std::streamsize;

int main() {
    // ask for and read the student's name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;

    cout << "Enter all your homework grades, "
        "followed by end-of-file";

    int count = 0;
    double sum = 0;

    double x;

    //invariant:
    while (cin >> x) {
        ++count;
        sum += x;
    }

    streamsize prec = cout.precision();
    cout << "Your final grades is " << setprecision(3)
            << 0.2 * midterm + 0.8 * final + 0.4 * sum / count
            << setprecision(prec) << endl;

    return 0;
}

