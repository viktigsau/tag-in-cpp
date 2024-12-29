#include <iostream>
#include <array>


class Player {
    private:
        std::array<float, 2> Position;
    public:
        void init(std::array<float, 2> Spawn) {
            Position = Spawn;
        }

        void Print() {
            std::cout << "(" << Position[0] << ", " << Position[1] << ")" << std::endl;
        }

        void Move(std::array<float, 2> Movment) {
            Position[0] += Movment[0];
            Position[1] += Movment[1];
        }
};