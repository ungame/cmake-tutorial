# CMake

## Primeiro exemplo


- Windows:
```cmd
cmake . -G "MinGW Makefiles" -B build

cd build

make

.\main.exe
```

- O ponto após o comando `cmake` indica que o CMakeLists.txt está no diretória atual.
- A flag -G indica que tipo de projeto será gerado, neste exemplo foi "MinGW Makefiles".
- A flag -B indica o diretório onde ficará os arquivos gerados.