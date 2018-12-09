#include "Log.h"

#include "spdlog\sinks\stdout_color_sinks.h"

namespace Loki {

	std::shared_ptr<spdlog::logger> Loki::Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Loki::Log::s_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("LOKI");
		s_CoreLogger->set_level(spdlog::level::trace);
		
		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
}