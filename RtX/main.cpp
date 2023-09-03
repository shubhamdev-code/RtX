#include "pch.h"


int main()
{
	
	if (glfwInit() != GLFW_TRUE) {
		std::cerr << "Failed to initialize glfw." << std::endl;
		return EXIT_FAILURE;
	}

	if (volkInitialize() != VK_SUCCESS) {
		std::cerr << "Failed to find vulkan loader on host system" << std::endl;
		return EXIT_FAILURE;
	}

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	GLFWwindow* window = glfwCreateWindow(1280, 720, "RtX", nullptr, nullptr);
	if (!window) {
		std::cerr << "Failed to create glfw window." << std::endl;
		glfwTerminate();
		return EXIT_FAILURE;
	}


	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}
