// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame();

    PrintLine((TEXT("The HiddenWord is: %s."), *HiddenWord));  // Debug Line
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    // else 
    if (bGameOver)
    {
        ClearScreen();
        SetupGame();
    }
    else   // Checking PlayerGuess
    {
        ProcessGuess(Input);
        
    }
    
    
}

void UBullCowCartridge::SetupGame()
{
    // Welcoming the player
    PrintLine(TEXT("Welcome to Bull Cows!"));
    
    HiddenWord = TEXT("cakes");
    Lives = HiddenWord.Len();
    bGameOver = false;
    
    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len());
    PrintLine(TEXT("You have %i lives."), Lives);
    PrintLine(TEXT("Type in your guess and \npress enter to continue..."));   // Prompt player for guess
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press enter to play again."));
}

void UBullCowCartridge::ProcessGuess(FString Guess)
{
    if (Guess == HiddenWord)
    {
        PrintLine(TEXT("You have Won!"));
        EndGame();
        return;
    }

    // Check if Isogram
    // Prompt to guess again
    // Check Right Number of character
    if (Guess.Len() != HiddenWord.Len())
    {
        PrintLine(TEXT("Sorry, try guessing again! \nYou have %i lives remaining."), Lives);
        PrintLine(TEXT("The Hedden Word is %i letter long"), HiddenWord.Len());
        return;
    }
    // Prompt to guess again

    // Remove Life

    // Check if Lives > 0
    // If Yes GuessAgain
    // Show Lives Left
    // If No show GameOver and HiddenWord?
    // Prompt to play again, Press Enter to play again?
    // Check user input
    // PlayAgain or Quit

    else
    {
        PrintLine(TEXT("Loat a life!"));
        PrintLine(TEXT("%i"), --Lives);
        if (Lives > 0)
        {
            
        }
        else
        {
            PrintLine(TEXT("You have no lives left!"));
            EndGame();
        }
    }
}