#include <Loki.h>

class Sandbox : public Loki::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Loki::Application* Loki::CreateApplication()
{
	return new Sandbox();
}