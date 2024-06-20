@echo off
REM Batch file to delete all .exe files from the specified directory

REM Define the path
set targetPath=C:\Users\mishr\OneDrive\Desktop\Coding\OOPS\OOPS_C++

REM Change to the target directory
cd /d "%targetPath%"

REM Delete all .exe files
del /s /q *.exe

REM Inform the user that the operation is complete
echo All .exe files have been deleted from %targetPath%
