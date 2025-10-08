@echo off

setlocal

if not exist build cmake -B build -A x64

if "%1"=="build" cmake --build build --config RelWithDebInfo

echo.
echo All done!
echo.