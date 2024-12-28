#include <iostream>
#include <vector>


class Player {
    private:
        std::vector<float> Position;
    public:
        void init(std::vector<float> Spawn) {
            Position = Spawn;

            std::cout << Position[0];
        }
};