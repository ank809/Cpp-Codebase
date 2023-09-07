#include <iostream>

class MultiplicationGame {
public:
    void game(int n) {
        int p = 1;
        int turn = 1;  // 1 for John, 2 for Michael

        while (p < n) {
            if (turn == 1) {
                p *= turn;
                turn = 2;
            } else {
                int nextMultiplier = turn + 1;
                if (p * nextMultiplier < n) {
                    p *= nextMultiplier;
                } else {
                    break;
                }
                turn = 1;
            }
        }

        if (turn == 1) {
            std::cout << n << " John wins" << std::endl;
        } else {
            std::cout << n << " Michael wins" << std::endl;
        }
    }
};

int main() {
    int n;
    std::cin >> n;

    MultiplicationGame gameInstance;
    gameInstance.game(n);

    return 0;
}
