#ifndef INITIALIZER
#define INITIALIZER

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Engine
{
	class Initializer
	{
		public:

			void Start();

			GLFWwindow* CreateWindow(int x, int y);
	};
}

#endif // !INITIALIZER
