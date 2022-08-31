@rem FUCK MAKEFILEEEEE

@echo off

cls 
color f0
mode con:cols=80 lines=25
set "TAB=   "

echo %tab%%tab%%tab%%tab%%tab%%tab%%tab%%tab%%tab%%tab%%tab%[Human by.Zod]
echo:
echo Discord : Zod#8682
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

    @REM Check ::core.c
    if not exist core.c ( 
        echo :: core.c 
        echo :: core.c is missing
        goto :quit
    ) 
    if exist core.c (
        echo :: core.c [OK]
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

    @REM Check ::ifExist.c
    if not exist ifExist.c ( 
        echo :: ifExist.c 
        echo :: ifExist.c is missing
        goto :quit
    ) 
    if exist ifExist.c (
        echo :: ifExist.c [OK]
        ping localhost /l 1 > nul
    )

    @REM Creation of human.exe
    echo Successful installation.
    color 0a
)

echo:
echo:

:quit
echo exit...
ping localhost /l 3 > nul

exit