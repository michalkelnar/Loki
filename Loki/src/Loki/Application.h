#pragma once

#include "Core.h"

namespace Loki {

	class LOKI_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	Application* CreateApplication();
}