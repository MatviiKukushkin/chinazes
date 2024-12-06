#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

string doSomething(bool &flag) {
    this_thread::sleep_for(chrono::seconds(1));
    string user = "user";
    flag = false;
    return user;
}

void showProgress(bool &flag) {
    for (int i = 0; flag; i++) {
        cout << "wait..." << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}

int main() {
    int id = 123;
    string user = "";
    bool flag = true;

    thread t1([&] {
        user = doSomething(flag);
    });

string chinazes = "chinazes";
string pechenki = "pechenki"
    cout << chinazes << endl;

    showProgress(flag);

    t1.join();
    cout << user << endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.