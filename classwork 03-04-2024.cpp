#include <iostream>

#include <string>

#include <vector>



using namespace std;



class Person {

private:

    string name;

    int age;

    double height;

    bool student;

    vector<string> hobbies;



public:

    // Constructor

    Person(string n, int a, double h, bool s, vector<string> hobs)

        : name(n), age(a), height(h), student(s), hobbies(hobs) {}



    // Getter and Setter for 'name'

    string getName() const {

        return name;

    }



    void setName(const string& n) {

        name = n;

    }



    // Getter and Setter for 'age'

    int getAge() const {

        return age;

    }



    void setAge(int a) {

        age = a;

    }



    // Getter and Setter for 'height'

    double getHeight() const {

        return height;

    }



    void setHeight(double h) {

        height = h;

    }



    // Getter and Setter for 'student'

    bool isStudent() const {

        return student;

    }



    void setStudent(bool s) {

        student = s;

    }



    // Getter and Setter for 'hobbies'

    vector<string> getHobbies() const {

        return hobbies;

    }



    void setHobbies(const vector<string>& hobs) {

        hobbies = hobs;

    }

};



int main() {

    // Example usage

    Person person1("John Doe", 25, 175.5, true, { "Reading", "Sports" });



    // Display initial values

    cout << "Name: " << person1.getName() << endl;

    cout << "Age: " << person1.getAge() << endl;

    cout << "Height: " << person1.getHeight() << endl;

    cout << "Is Student: " << (person1.isStudent() ? "Yes" : "No") << endl;

    cout << "Hobbies: ";

    for (const auto& hobby : person1.getHobbies()) {

        cout << hobby << " ";

    }

    cout << endl;



    // Updating values using setter methods

    person1.setName("Jane Doe");

    person1.setAge(30);

    person1.setHeight(160.0);

    person1.setStudent(false);

    person1.setHobbies({ "Traveling", "Photography" });



    // Displaying updated values

    cout << "\nAfter updating values:" << endl;

    cout << "Name: " << person1.getName() << endl;

    cout << "Age: " << person1.getAge() << endl;

    cout << "Height: " << person1.getHeight() << endl;

    cout << "Is Student: " << (person1.isStudent() ? "Yes" : "No") << endl;

    cout << "Hobbies: ";

    for (const auto& hobby : person1.getHobbies()) {

        cout << hobby << " ";

    }

    cout << endl;



    return 0;

}





