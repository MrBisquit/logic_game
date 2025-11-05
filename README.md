# Logic Game (Logically)
This entire project is written in C.
It uses Raylib to display the game.

## Usage
Either: Follow the instructions in [To build](#to-build)
Or
Run `build.bat` ONCE, then `run.bat` any time you make any changes.

### Setting up the environment
You will need: CMake, Git, VCPkg, Visual Studio (2022), and RayLib.
You can install vcpkg, and RayLib using the scripts:
1. `vcpkg_setup.bat`
2. `raylib_vcpkg.bat`

## To build
```
mkdir build
cd build
cmake .. -G "Visual Studio 17 2022" -A x64
cmake --build . --config Release
```

## Screenshots
