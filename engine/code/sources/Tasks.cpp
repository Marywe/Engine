#include <Tasks.hpp>

namespace engine
{
	Task::Task(Scene& scene)
	{

	}

	void Read_Input_Task::run(float dT)
	{

	}

	void Kernel::run(float dT)
	{
		bool exit = false;

		do
		{
			for (auto& task : tasks)
			{
				task->run(dT);
			}
		} while (!exit);
	}

	void Render_Task::run(float dT)
	{
		for (auto& components : render_components)
		{

		}
	}

	Component* Render_Task::create_component()
	{
		Render_Component* render = new Render_Component();
		//render_components.push_back(render);
		
		   // añadirlo al renderer
		   // añadirlo a la lista
		   // retornarlo

		return render;
	}


}