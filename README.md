# WebAssembly Dice
Simple demonstration of compiling a C program to be browser compatible using WASM.
Note that this uses Fastcomp with an LLVM backend and uses native WASM rather than ASM.js.

## Setup
1. Follow the entire Emscripten guide for building the compiler from source found [here](https://kripken.github.io/emscripten-site/docs/getting_started/downloads.html).
2. Remember to set the appropriate paths for `EMSCRIPTEN_ROOT`, `LLVM_ROOT`, `NODE_JS`, and `PYTHON` in `~/.emscripten`.
3. Set your `$PATH` and `env` vars to point to the `emscripten` dir if you have not done so in step 1.
4. Run `emcc dice-roll.c -s WASM=1 -O3 -0 index.js` in the project directory.
    * `emcc` - the compiler
    * `-s WASM=1` - tell compiler to use native WASM
    * `-O3` - the highest level of optimization
    * `-o index.js` - generate the glue code "object file"
    * Add `-g3` at the end to generate a WAST file
5. Start your local server (this uses Python):
    `python -m SimpleHTTPServer 8080`
