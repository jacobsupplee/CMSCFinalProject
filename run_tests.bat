@echo off
setlocal

cl /EHsc /std:c++17 /Fe:Project2_test.exe src\*.cpp
if errorlevel 1 exit /b 1

Project2_test.exe tests\input.txt > tests\actual.txt
if errorlevel 1 exit /b 1

fc tests\expected.txt tests\actual.txt
if errorlevel 1 (
    echo Regression tests FAILED.
    exit /b 1
)

echo All regression tests passed.
exit /b 0
