#pragma once

#include "../Core.h"
#include "spdlog/spdlog.h"

namespace Loki {

	class LOKI_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	public:
		static void Init();

		static inline std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		static inline std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	};
}

#define LOKI_TRACE(...)		::Loki::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LOKI_INFO(...)		::Loki::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LOKI_WARN(...)		::Loki::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LOKI_ERROR(...)		::Loki::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LOKI_FATAL(...)		::Loki::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define LOKI_CLIENT_TRACE(...)		::Loki::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LOKI_CLIENT_INFO(...)		::Loki::Log::GetClientLogger()->info(__VA_ARGS__)
#define LOKI_CLIENT_WARN(...)		::Loki::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LOKI_CLIENT_ERROR(...)		::Loki::Log::GetClientLogger()->error(__VA_ARGS__)
#define LOKI_CLIENT_FATAL(...)		::Loki::Log::GetClientLogger()->fatal(__VA_ARGS__)