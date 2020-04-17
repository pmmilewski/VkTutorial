#pragma once
#include "common.h"

class HelloTriangleApp
{

public:

private:
	const uint32_t WIDTH = 800;
	const uint32_t HEIGHT = 600;

	GLFWwindow* window;

	VkInstance instance;

	const std::vector<const char*> validationLayers =
	{
		"VK_LAYER_KHRONOS_validation"
	};

#ifdef NDEBUG
	const bool enableValidationLayers = false;
#else
	const bool enableValidationLayers = true;

#endif // NDEBUG



public:
	void run();

private:

	void initWindow();
	void checkExtensions(const char** used_extensions, uint32_t count);
	bool checkValidationLayerSupport();
	void createInstance();
	void initVulkan();
	void mainLoop();
	void cleanup();
};

