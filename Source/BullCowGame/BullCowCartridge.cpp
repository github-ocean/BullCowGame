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
        if (Input == HiddenWord)
        {
            PrintLine(TEXT("You have Won!"));
            EndGame();
        }
        else
        {
            if (Input.Len() != HiddenWord.Len())
            {
                PrintLine(TEXT("The Hidden Word is %i Characters long. \nYou have lost!"), HiddenWord.Len());    // Magic Number
                EndGame();
            }
        }
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
    // Welcoming the player
    PrintLine(TEXT("Welcome to Bull Cows!"));
    
    HiddenWord = TEXT("cakes");
    Lives = 4;
    bGameOver = false;
    
    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len()); // Magic Number Remove
    PrintLine(TEXT("Type in your guess. /npress enter to continue..."));   // Prompt player for guess
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press enter to play again."));
}