#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<iostream>
#include<string>

int main(){

    GLuint Height, Width;
    const char* Title = "Practica 1"; // Change the type of Title to const char*
    Height = 600;
    Width = 800;

    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // Major version
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3); // Minor version
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); // Core profile
    GLFWwindow *window = glfwCreateWindow(Width, Height, Title, NULL, NULL); // Use Title directly
    if(window == NULL){
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        return -1;
    }

    while(!glfwWindowShouldClose(window)){
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f); // Clear color
        glClear(GL_COLOR_BUFFER_BIT); // Clear buffer
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}