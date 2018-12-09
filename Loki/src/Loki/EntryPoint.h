#pragma once

#ifdef LOKI_PLATFORM_WINDOWS

extern Loki::Application* Loki::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Loki::CreateApplication();
	app->Run();
	delete app;
}

#endif
