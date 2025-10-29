@echo off
REM Build script for Windows (uses msys2/ucrt64 g++)
set "GPP=C:\msys64\ucrt64\bin\g++.exe"
"%GPP%" -Wall -Wextra -g3 src\main.cpp src\Centro.cpp src\RedCentros.cpp src\algoritmos\NodoABB.cpp -Iinclude -o src\output\main.exe
if %errorlevel% neq 0 (
    echo Build failed with exit code %errorlevel%.
    exit /b %errorlevel%
)
echo Build succeeded. Running program...
src\output\main.exe
pause
