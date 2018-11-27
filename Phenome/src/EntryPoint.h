#pragma once

namespace Phenome {
	extern Application* Begin();
}
int main(int argc, char** argv)
{
	using namespace Phenome;

	Application* App = Begin();
	App->Run();
	delete App;
}