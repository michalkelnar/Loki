#pragma once

#ifdef LOKI_PLATFORM_WINDOWS

extern Loki::Application* Loki::CreateApplication();

int main(int argc, char** argv)
{
	Loki::Log::Init();
	LOKI_TRACE("Initialized Logging");

	auto app = Loki::CreateApplication();
	app->Run();
	delete app;
}

#endif
