#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1{"happy"};
    string s2{" birthday"};
    string s3;

    cout << "s1: \"" << s1 << "\"; length: " << s1.length();
    cout << "\ns2: \"" << s2 << "\"; length: " << s2.length();
    cout << "\ns1: \"" << s3 << "\"; length: " << s3.length();

    cout << "\n\nThe results of comparing s2 and s1:" << boolalpha
         << "\ns2 == s1: " << (s2 == s1)
         << "\ns2 != s1: " << (s2 != s1);

    cout << "\n\nTesting s3.empty():\n";

    if (s3.empty()) {
        cout << "s3 is empty; assigning to s3;\n";
        s3 = s1 + s2;
        cout << "s3: \"" << s3 << "\"";
    }

    cout << "\n\ns1 starts with \"ha\": " << s1.starts_with("ha") << endl;
    cout << "s2 starts with \"ha\": " << s2.starts_with("ha") << endl;
    cout << "s1 ends with \"ay\": " << s1.ends_with("ay") << endl;
    cout << "s2 ends with \"ay\": " << s2.ends_with("ay") << endl;
}