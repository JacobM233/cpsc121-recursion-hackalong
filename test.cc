// Jacob Mijares
// 838781508
// 12 PM Section 13
// Hack-a-long worksheet 21

#include <iostream>
#include <string>
#include <vector>

int sumVector(int index, const std::vector<int>& vec) {
 if (index == vec.size()) {
    return 0;
 } else {
    int temp1 = vec.at(index);
    int temp2 = sumVector(index + 1, vec);
    return temp1 + temp2;
 }
} 

int main() {
 std::vector<int> myVector = {3, 5, 7};
 int finalTotal = sumVector(0, myVector);
 std::cout << "The sum of the vector is " << finalTotal << "\n";
 return 0;
}