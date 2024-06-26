/*****************************************************************//**
 * \file   Engine.h
 * \brief  Main game engine header
 * 
 * \author Sakura
 * \date   April 2024
 *********************************************************************/
#pragma once
#include <chrono> //deltatime 
#include <memory> //unique ptr
#include "RenderSystem.h"


class Engine
{
public:

    Engine();


    void Run();


    ~Engine();

private:
    //for deltatime calcs
    std::chrono::steady_clock::time_point prevTime;
    //rendering system
    std::unique_ptr<RenderSystem> renderInstance;
    //FOR GLFW SHOULD WINDOW CLOSE AAAA
    GLFWwindow* window;
};

