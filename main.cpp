#include <iostream>
#include <SDL.h>

int main(int argc, char *argv[])
{
  int ret;
  ret = SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "Handmade Hero", "This is my Handmade Hero", 0);
  std::cout << SDL_GetError();
  std::cout << SDL_GetError();
  std::cout << SDL_GetError();
  return ret;
}
