#pragma once

#include <string>
#include <Model.hpp>
#include <map>



using namespace std;
using namespace glt;

namespace engine
{
    class Component
    {
    };

    class Transform_Component : public Component
    {
    public:
        //vec3 position;
        
    };

    class Render_Component : public Component
    {

    public:
        shared_ptr< Model > model;
    };

    class Collider_Component : public Component
    {
    };

    class Controller_Component : public Component
    {
    };

    //El objeto / entidad que tiene los componentes
    class Entity
    {
        map<string, Component*> components;

        Transform_Component transform;

    public:

        Component* get_component(const string& id);

        Transform_Component& get_transform();
    };

}