#include <iostream>

#define LOG(x) std::cout << x << std::endl;

class Player {
    int x_coordinate, y_coordinate;
    int speed;
public:
    void setPosition() {
        std::cin >> this->x_coordinate >> this->y_coordinate;
    }

    void setSpeed() {
        std::cin >> this->speed;
    }

    void Move() {
        x_coordinate++;
        y_coordinate = y_coordinate * speed;
    }
} A;

int main() {
    LOG("This is a good Program.\n")
    A.setPosition();
    A.setSpeed();
    A.Move();
    return 0;
}