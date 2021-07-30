#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Sense::Application* Sense::CreateApplication();

int main(int argc, char** argv)
{
	printf("Sense Engine\n");
	auto app = Sense::CreateApplication();
	app->Run();
	delete app;
}

#endif