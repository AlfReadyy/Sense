#include <Sense.h>

class Sandbox : public Sense::Application 
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Sense::Application* Sense::CreateApplication()
{
	return new Sandbox();
}