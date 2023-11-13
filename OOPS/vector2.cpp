#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    if (n <= 0 || n > 15) {
        std::cout << "-1" << std::endl;
        return 0;
    }

    std::vector<int> scores(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> scores[i];
    }

    std::vector<int> sortedScores = scores; // Make a copy to preserve the original order
    std::sort(sortedScores.begin(), sortedScores.end());

    std::vector<int> convertedArray(n);

    for (int i = 0; i < n; ++i) {
        convertedArray[i] = std::distance(sortedScores.begin(), std::find(sortedScores.begin(), sortedScores.end(), scores[i]));
    }

    std::cout << "Input Array: ";
    for (int score : scores) {
        std::cout << score << " ";
    }

    std::cout << std::endl << "Converted Array: ";
    for (int rank : convertedArray) {
        std::cout << rank << " ";
    }

    std::cout << std::endl;

    return 0;
}
