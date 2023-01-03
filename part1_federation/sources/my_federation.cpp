#include "../includes/my_federation.hpp"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name,
                                short maxWarp) :
                                _length(length), _width(width), _name(name),
                                _maxWarp(maxWarp)
{
    std::cout << "The ship USS " << _name << " has been finished." << std::endl;
    std::cout << "It is " << _length << " m in length and "
    << _width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << _maxWarp << "!" << std::endl;
}

Federation::Starfleet::Ship::~Ship()
{}

void    Federation::Starfleet::Ship::setupCore(WarpSystem::Core* core)
{
    _core = core;
    std::cout << "USS " << _name << ": The core is set." << std::endl;
}

void    Federation::Starfleet::Ship::checkCore()
{   
    std::string     stability = "";

    _core->checkReactor()->isStable() == true ? stability = 
    "stable" : stability = "unstable";
    std::cout << "USS " << _name << ": The core is "
    << stability << " at the time." << std::endl;
}