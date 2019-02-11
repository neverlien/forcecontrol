#include <iostream>
#include <franka/robot.h>
#include <franka/model.h>

int main(int argc, char** argv) {

	franka::Robot robot("10.0.0.1");

	robot.read([](const franka::RobotState& robot_state) {

		std::array<double, 16> pose = robot_state.O_T_EE;

		for (uint8_t j = 0; j < 4; j++) {

			for (uint8_t k = 0; k < 4; k++) 
				std::cout << pose[j * 4 + k] << " ";
		}
		std::cout << std::endl;

		return 0;
	});

	return 0;
}
