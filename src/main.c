#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdio.h>

#define WINDOW_HEIGHT 768
#define WINDOW_WIDTH 1024

int main(int argc, char **argv) {

  // Window Initialization
  if (!glfwInit()) {
    return -1;
  }

  GLFWwindow *window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "cube", NULL, NULL);
  if (!window) {
    glfwTerminate();
    return -1;
  }

  while (!glfwWindowShouldClose(window)) {
      // render here
      glfwSwapBuffers(window);
      glfwPollEvents();
  }
  glfwTerminate();
  return 0;
}
