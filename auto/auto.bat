g++ getInData.cpp -o getInData
getInData.exe
g++ main.cpp -o main
for %%i in (*.in) do (
main.exe < %%i > %%~ni.out
) 
7z a -tzip newfolder.zip *.in *.out
del /q *.exe *.in *.out