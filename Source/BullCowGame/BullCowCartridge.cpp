// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame();

    PrintLine((TEXT("The HiddenWord is: %s."), *HiddenWord));  // Debug Line

    // Welcoming the player
    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len()); // Magic Number Remove
    PrintLine(TEXT("Type in your guess and press enter to continue..."));

    // Prompt player for guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    // Checking PlayerGuess

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You have Won!"));
    }
    else
    {
        if (Input.Len() != HiddenWord.Len())
        {
            PrintLine(TEXT("The Hidden Word is %i Characters long, try again!"), HiddenWord.Len());    // Magic Number
        }
        PrintLine(TEXT("You have Lost!"));
    }
    
    // Check if Isogram
    // Prompt to guess again
    // Check Right Number of character
    // Prompt to guess again
    
    // Remove Life

    // Check if Lives > 0
    // If Yes GuessAgain
    // Show Lives Left
    // If No show GameOver and HiddenWord?
    // Prompt to play again, Press Enter to play again?
    // Check user input
    // PlayAgain or Quit
}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("cake");
    Lives = 4;
}
