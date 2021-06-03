#include <emscripten.h>
#include <stdio.h>

int main() {
  printf("Simple WASM is working\n");

  // Call JS functions from here
  emcripten_run_script("console.log('Hello from C!')");

  return 1;
}
