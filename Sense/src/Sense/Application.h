#pragma once

#include "Core.h"

namespace Sense {

	class SENSE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in a client
	Application* CreateApplication();
}
