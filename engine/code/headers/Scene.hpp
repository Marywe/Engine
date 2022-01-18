#pragma once

#include <Window.hpp>
#include <Messages.hpp>
#include <Tasks.hpp>
#include <map>
using namespace std;

namespace engine
{
    class Scene
    {

        Window* window;

        Kernel   kernel;

        //Read_Input_Task read_input_task;
        //Render_Task     render_task;

        Message_Dispatcher message_dispatcher;

        map< string, Entity* > entities;

    public:

        Scene(Window& window);

        Message_Dispatcher& get_message_dispatcher()
        {
            return message_dispatcher;
        }

        Window& get_window();

        void run()
        {
            //kernel.run();
        }

    };
}