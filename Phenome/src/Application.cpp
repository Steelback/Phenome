#include "Application.h"

#include <iostream>

namespace Phenome {
	Application::Application::Application()
	{
	}

	Application::Application::~Application()
	{
	}
	void Application::Run()
	{
		std::cout << "Application Running: " << std::endl;
		std::cin.get();
	}
}
