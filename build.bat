copy OSInfo.c OSInfo.cpp

echo "%CC%"

%CC% OSInfo.c %CEXTRA% OSInfo.exe
del OSInfo.exe

%CC% OSInfo.cpp %CEXTRA% OSInfo.exe
del OSInfo.exe

del OSInfo.cpp