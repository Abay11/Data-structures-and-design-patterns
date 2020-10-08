if not exist .\build_x64 (
	mkdir ".\build_x64"
)

cd .\build_x64

C:\dev\cmake_3_18\cmake-3.18.1-win64-x64\cmake-3.18.1-win64-x64\bin\CMake.exe ..\ -G "Visual Studio 16 2019" -A "x64"

pause