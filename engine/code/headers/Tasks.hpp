#pragma once

#include <Scene.hpp>
#include <iostream>;
#include <Objects.hpp>

using namespace std;

namespace engine 
{
    class Task
    {
    protected:

        Scene* scene;

    public:

        Task(Scene& scene);

        virtual void run(float delta) = 0;
    };

    class Read_Input_Task : public Task
    {
    public:

        void run(float dT);
    };

    class System : public Task
    {
    public:

        virtual Component* create_component(...) = 0;

    };

    class Render_Task : public System
    {

        glt::Render_Node * renderer;

        list< shared_ptr< Render_Component > > render_components;

    public:

        Component* create_component();

        void run(float dT);
    };


    //Engloba las tareas
    class Kernel
    {
        list< Task* > tasks;
    public:
       
        void inline add_task(Task& task) 
        {
            tasks.push_back(&task);
        }

        void run(float dT);
       
    };
}