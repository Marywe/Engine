#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace engine
{
    struct Message
    {
        string id;
        map<string, string> parameters;
    };

    // Message m;
    // m.id = "key-pressed";
    // m.parameters["key-code"] = "arrow-up";

    class Observer
    {
    public:

        virtual void handle(const Message& m) = 0;
    };

    class Message_Dispatcher
    {

        map<string, list<Observer*>> observers;

    public:

        void add_observer(const string message_id, Observer& observer)
        {
            auto& observer_list = observers[message_id];

            observer_list.push_back(&observer);
        }

        void send(const Message& message)
        {
            auto item = observers.find(message.id);

            if (item != observers.end())
            {
                auto& observer_list = observers[message.id];

                for (auto& observer : observer_list)
                {
                    observer->handle(message);
                }
            }
        }

    };
}