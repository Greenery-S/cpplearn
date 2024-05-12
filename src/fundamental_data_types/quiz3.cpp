#include <iostream>

/*
Enter the height of the tower in meters: 100
At 0 seconds, the ball is at height: 100 meters
At 1 seconds, the ball is at height: 95.1 meters
At 2 seconds, the ball is at height: 80.4 meters
At 3 seconds, the ball is at height: 55.9 meters
At 4 seconds, the ball is at height: 21.6 meters
At 5 seconds, the ball is on the ground.
*/

// distance fallen = gravity_constant * x_seconds2 / 2

double getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;
    return height;
}

int main()
{
    double gravity_constant{9.8};
    double height{getHeight()};
    bool is_ball_on_ground{false};
    double seconds{0};
    double current_height{0};

    while (!is_ball_on_ground)
    {
        current_height = height - gravity_constant * seconds * seconds / 2.0;
        if (current_height <= 0)
        {
            is_ball_on_ground = true;
            std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
        }
        else
        {
            std::cout << "At " << seconds << " seconds, the ball is at height: " << current_height << " meters\n";
        }
        seconds++;
    }
}
