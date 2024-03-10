#include <iostream>
#include <vector>


int main() {
 std::vector<int> db(20);
 int number = 0;
 int counter = 0;
 int counterSize = 0;

 while (number != -2) {
        std::cout << "input number: ";
        std::cin >> number;
        if (number == -2) break;
        else {
            if (counter >= db.size()) {
                counter = 0;
                counterSize++;
            }
            if (number == -1) {
                std::cout << "output: ";
                if (counterSize == 0) {
                    for (int i = 0; i < counter; ++i) {
                        std::cout << db[i] << " ";
                    }
                    std::cout << std::endl;
                } else {
                    for (int i = counter; i < db.size(); ++i) {
                        std::cout << db[i] << " ";
                    }
                    for (int i = 0; i < counter; ++i) {
                        std::cout << db[i] << " ";
                    }
                    std::cout << std::endl;
                }
            } else {
                db[counter] = number;
                counter++;
            }
        }
 }



}
