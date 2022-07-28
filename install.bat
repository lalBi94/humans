@echo off

cls 
color f0
mode con:cols=80 lines=25
set "TAB=   "

echo %tab%%tab%%tab%%tab%%tab%%tab%%tab%%tab%%tab%%tab%%tab%[Human by.Zod]
echo:
echo Discord : Bilaal#7175
echo:
echo Info : Simulation of the physical and mental health of a human being. 
echo The goal of this project is to demonstrate 
echo that life is a computer code governed by logical and algorithmic laws of higher order.
echo:

echo [Installation of Human]

echo check dependency...
if exist human.exe (
    echo suppression of the old verison...
    del human.exe 
) 

if not exist human.exe (
    @REM Check ::human.h
    if not exist human.h ( 
        echo :: human.h 
        echo :: human.h is missing
        goto :quit
    ) 
    if exist human.h (
        echo :: human.h [OK]
        ping localhost /l 1 > nul
    )

    @REM Check ::main.c
    if not exist main.c ( 
        echo :: main.c 
        echo :: main.c is missing
        goto :quit
    ) 
    if exist main.c (
        echo :: main.c [OK]
        ping localhost /l 1 > nul
    )

    @REM Check ::checkExtension.c
    if not exist checkExtension.c ( 
        echo :: checkExtension.c 
        echo :: checkExtension.c is missing
        goto :quit
    ) 
    if exist checkExtension.c (
        echo :: checkExtension.c [OK]
        ping localhost /l 1 > nul
    )

    @REM Check ::createHuman.c
    if not exist createHuman.c ( 
        echo :: createHuman.c 
        echo :: createHuman.c is missing
        goto :quit
    ) 
    if exist createHuman.c (
        echo :: createHuman.c [OK]
        ping localhost /l 1 > nul
    )

    @REM Creation of human.exe
    gcc -w *.c -o human.exe >nul
    echo Successful installation.
)

echo:
echo:

:quit
echo exit...
ping localhost /l 3 > nul

exit